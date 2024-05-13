#ifndef HEROGAME_WARRIORFACTORY_H
#define HEROGAME_WARRIORFACTORY_H

#include "HeroFactory.h"
#include "Warrior.h"

class WarriorFactory : public HeroFactory {
public:
    explicit WarriorFactory(const string &name) : HeroFactory(name) {}

    AHero *createHero() override {
        return new Warrior(name);
    }
};


#endif //HEROGAME_WARRIORFACTORY_H
