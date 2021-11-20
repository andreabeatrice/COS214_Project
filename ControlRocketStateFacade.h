#ifndef CONTROLROCKETSTATE_H
#define CONTROLROCKETSTATE_H


#include<iostream>
#include<string>
#include<vector>
using namespace std;

#include "RocketContext.h"
class RocketContext;
#include "Container.h"
class Container;
#include "Iterator.h"
class Iterator;
#include "RocketState.h"
class RocketState;

class ControlRocketStateFacade
    {
        public:
            ControlRocketStateFacade(Container*);
            ~ControlRocketStateFacade();

            void putInFailedState(Rocket*);
            void putInSuccessState(Rocket*);

        private:
            //RocketContext* context;
            vector<RocketContext*> context;
            
            //AGGREGATE
            Container* container;

            //ITERATOR
            Iterator* iterator;
    };

#endif();