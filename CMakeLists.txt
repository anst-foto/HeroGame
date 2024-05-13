cmake_minimum_required(VERSION 3.28)
project(HeroGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(HeroGame main.cpp
        IWarrior.h
        IMage.h
        AHero.h
        HeroTypes.h
        HeroFactory.h
        Warrior.h
        Mage.h
        WarriorFactory.h
        MageFactory.h
        Game.h)
