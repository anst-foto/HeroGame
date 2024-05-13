#ifndef HEROGAME_AHERO_H
#define HEROGAME_AHERO_H

#include <string>

using namespace std;

class AHero {
private:
    string _name;

protected:
    const int MAX_HEALTH = 100;
    const int MIN_HEALTH = 0;

    int health;
    int damage;

    explicit AHero(const string &name) : _name(name) {}

public:
    const string &getName() const {
        return _name;
    }

    int getHealth() const {
        return health;
    }

    int getDamage() const {
        return damage;
    }

    void setHealth(int health) {
        if (health < MIN_HEALTH) {
            this->health = MIN_HEALTH;
        } else if (health > MAX_HEALTH) {
            this->health = MAX_HEALTH;
        } else {
            this->health = health;
        }
    }

    void attack(AHero* enemy) {
        enemy->setHealth(enemy->getHealth() - this->damage);
    }

    bool isDead() const {
        return this->health == 0;
    }
};


#endif //HEROGAME_AHERO_H
