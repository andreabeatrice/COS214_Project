#ifndef ROCKETOBSERVER_H
#define ROCKETOBSERVER_H

#include "RocketFactory.h"

class BaseRocket;

class Observer{
    protected:
        BaseRocket* subject;

    public:
        virtual void update() = 0;

};

class RocketObserver : public Observer{
    public:
        RocketObserver(BaseRocket* subject);
        void update();
        //update("crash"/"success")

};

#endif