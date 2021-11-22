#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include "RocketFactory.h"
#include "PostLaunch.h"

class BaseRocket;

class State{
    public:
        virtual void doAction(BaseRocket* context) = 0;
    
    protected:
        PostLaunchStrategy* PostLaunch;

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