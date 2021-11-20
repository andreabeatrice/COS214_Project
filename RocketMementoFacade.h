#ifndef ROCKETMEMENTOFACADE_H
#define ROCKETMEMENTOFACADE_H

#include "RocketMemento.h"
class RocketMemento;
#include "Rocket.h"
class Rocket;
#include "Originator.h"
class Originator;


class RocketMementoFacade
    {
        public:
            RocketMementoFacade();
            ~RocketMementoFacade();
            void createMemento(Rocket*);
            RocketMemento* getMemento();
        private:
            RocketMemento* memento;
    };

#endif