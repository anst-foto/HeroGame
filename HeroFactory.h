#ifndef HEROGAME_HEROFACTORY_H
#define HEROGAME_HEROFACTORY_H

#include <string>

#include "AHero.h"

using namespace std;

class HeroFactory {
protected:
    string name;

    HeroFactory(const string& name) {
        this->name = name;
    }

public:
    virtual AHero* createHero() = 0;
};


#endif //HEROGAME_HEROFACTORY_H
