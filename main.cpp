#include "Game.h"

int main() {
    AHero* hero;
    AHero* enemy;

    Game::mainMenu();
    auto inputType = Game::inputHeroType();
    auto name = Game::inputName();
    auto factory = Game::createHeroFactory(inputType, name);

    if (factory == nullptr) {
        cout << "Invalid input" << endl;
        return 1;
    }

    hero = Game::createHero(factory);
    enemy = Game::createHero(new WarriorFactory("Enemy"));

    while (true) {
        Game::printHero(hero);
        Game::printHero(enemy);

        hero->attack(enemy);
        if (enemy->isDead()) {
            break;
        }
        enemy->attack(hero);
        if (hero->isDead()) {
            break;
        }
    }

    if (hero->isDead()) {
        cout << "You lose!" << endl;
        return 0;
    }

    if (enemy->isDead()) {
        cout << "You win!" << endl;
        return 0;
    }

    return 0;
}
