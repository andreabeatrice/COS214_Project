#ifndef ROCKETOBSERVER_H
#define ROCKETOBSERVER_H

#include "RocketFactory.h"
#include "RocketState.h"

class BaseRocket;
class State;

class Observer{
    protected:
        BaseRocket* subject;
        State* rocketState;

    public:
        virtual void update(bool LaunchResult) = 0;


};

class RocketObserver : public Observer{
    public:
        RocketObserver(BaseRocket* subject);
        void update(bool LaunchResult);
        //update("crash"/"success")
        State* getState();

};

#endif