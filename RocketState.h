#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include "RocketFactory.h"

class State{
    public:
        virtual void doAction(BaseRocket* context) = 0;

};

class RocketSuccessState : public State{
    public:
        virtual void doAction(BaseRocket* context);

};

class RocketFailedState : public State{
    public:
        virtual void doAction(BaseRocket* context);

};

#endif