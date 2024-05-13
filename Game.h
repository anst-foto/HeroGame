#ifndef HEROGAME_GAME_H
#define HEROGAME_GAME_H

#include <iostream>
#include <string>

#include "AHero.h"
#include "HeroTypes.h"
#include "HeroFactory.h"

#include "Warrior.h"
#include "Mage.h"

#include "WarriorFactory.h"
#include "MageFactory.h"

using namespace std;

class Game {
public:
    static void mainMenu() {
        cout << "Welcome to Hero Game!" << endl;
        cout << "Select your hero type:" << endl;
        cout << "1. Warrior" << endl;
        cout << "2. Mage" << endl;
    }

    static HeroType inputHeroType() {
        char choice;
        cout << "Enter your hero type: ";
        cin >> choice;

        switch (choice) {
            case '1':
                return HeroType::HERO_TYPE_WARRIOR;
            case '2':
                return HeroType::HERO_TYPE_MAGE;
            default:
                cerr << "Invalid input!" << endl;
                return HeroType::HERO_TYPE_NONE;
        }
    }

    static string inputName() {
        string name;
        cout << "Enter your hero name: ";
        getline(cin, name);
        return name;
    }

    static HeroFactory* createHeroFactory(HeroType heroType, const string& name) {
        switch (heroType) {
            case HeroType::HERO_TYPE_WARRIOR:
                return new WarriorFactory(name);
            case HeroType::HERO_TYPE_MAGE:
                return new MageFactory(name);
            default:
                cerr << "Invalid hero type!" << endl;
                return nullptr;
        }
    }

    static AHero* createHero(HeroFactory* heroFactory) {
        if (heroFactory == nullptr) {
            cerr << "Invalid hero factory!" << endl;
            return nullptr;
        }

        return heroFactory->createHero();
    }

    static void printHero(AHero* hero) {
        cout << "=== === ===" << endl;
        cout << "Name: " << hero->getName() << endl;
        cout << "Health: " << hero->getHealth() << endl;
        cout << "Damage: " << hero->getDamage() << endl;
        cout << "=== === ===" << endl << endl;
    }
};


#endif //HEROGAME_GAME_H
