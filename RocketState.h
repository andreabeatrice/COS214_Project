#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include "RocketFactory.h"
#include "PostLaunch.h"
#include "Caretaker.h"

class BaseRocket;
class PostLaunchStrategy;
class Caretaker;

class State{
    public:
        virtual void doAction(BaseRocket* context, Caretaker* caretaker) = 0;
    
    protected:
        PostLaunchStrategy* PostLaunch;

};

class RocketSuccessState : public State{
    public:
        virtual void doAction(BaseRocket* context, Caretaker* caretaker);

};

class RocketFailedState : public State{
    public:
        virtual void doAction(BaseRocket* context, Caretaker* caretaker);

};

#endif