#ifndef HEROGAME_WARRIOR_H
#define HEROGAME_WARRIOR_H

#include "AHero.h"
#include "IWarrior.h"

class Warrior : public AHero, public IWarrior {
private:
    const int DAMAGE = 10;
    const int POWER = 10;

    int _power;

public:
    explicit Warrior(const string &name) : AHero(name) {
        health = MAX_HEALTH;
        damage = DAMAGE + POWER;
        _power = POWER;
    }

    int getPower() override {
        return _power;
    }
};


#endif //HEROGAME_WARRIOR_H
