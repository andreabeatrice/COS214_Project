#ifndef ROCKETSUBSYSTEMFACADE_H
#define ROCKETSUBSYSTEMFACADE_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;

#include "Rocket.h"
#include "Cargo.h"

class Rocket;
class Cargo;


class RocketSubsytemFacade
    {
        public:
            RocketSubsytemFacade();
            ~RocketSubsytemFacade();
            void addRocket(Rocket*);
            void addSupplies(int);
            void addHumans(int);
            void addSatellites(int);

            void addAero();
            void addRocketBody(string);
            void addEngine(string);
            void addElectronic();

            void load(Cargo* c = nullptr);
            Cargo* unload();

            vector<Rocket*> getRockets();

            int getRocketHealth();
            int getRocketCost();

        private:
            Rocket* spacecraft;
            Rocket* component;
            Cargo* cargo;
            vector<Rocket*> components;
    };

#endif