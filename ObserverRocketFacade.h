#ifndef OBSERVERROCKETFACADE_H
#define OBSERVERROCKETFACADE_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;

#include "Observer.h"
class Observer;

#include "Rocket.h"
class Rocket;


class ObserverRocketFacade
    {
        public:
            ObserverRocketFacade(Rocket*);
            ~ObserverRocketFacade();
            void add(Observer*);
            void remove(Observer*);
            void notify();

        private:
            Rocket* subject;
    };

#endif