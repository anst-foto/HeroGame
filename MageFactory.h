#ifndef HEROGAME_MAGEFACTORY_H
#define HEROGAME_MAGEFACTORY_H

#include "HeroFactory.h"
#include "Mage.h"

class MageFactory : public HeroFactory {
public:
    explicit MageFactory(const string &name) : HeroFactory(name) {}

    AHero *createHero() override {
        return new Mage(name);
    }
};


#endif //HEROGAME_MAGEFACTORY_H
