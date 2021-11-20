#ifndef ROCKETCREATIONFACADE_H
#define ROCKETCREATIONFACADE_H


#include "CreateRocket.h"
#include "Rocket.h"
class CreateRocket;
class Rocket;

class RocketCreationFacade
    {
        public:
            RocketCreationFacade();
            ~RocketCreationFacade();
            Rocket* makeTestRocket();
            Rocket* makeViableRocket();

        private:
            CreateRocket* ViableRocketFactory;
            CreateRocket* TestRocketFactory;
    };

#endif