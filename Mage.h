#ifndef HEROGAME_MAGE_H
#define HEROGAME_MAGE_H

#include "AHero.h"
#include "IMage.h"

class Mage : public AHero, public IMage {
private:
    const int DAMAGE = 15;
    const int WISDOM = 5;

    int _wisdom;

public:
    explicit Mage(const string &name) : AHero(name) {
        health = MAX_HEALTH;
        _wisdom = WISDOM;
        damage = DAMAGE + WISDOM;
    }

    int getWisdom() override {
        return _wisdom;
    }
};


#endif //HEROGAME_MAGE_H
