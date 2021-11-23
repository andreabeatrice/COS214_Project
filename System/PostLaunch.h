#ifndef POSTLAUNCH_H
#define POSTLAUNCH_H

#include "RocketFactory.h"
#include "Caretaker.h"
#include "Rocket.h"
#include "Storage.h"

class BaseRocket;
class Caretaker;

/*class PostLaunchStrategy;

class PostLaunchContext{
    private:
        PostLaunchStrategy* strategy; 

    public:
        PostLaunchContext(PostLaunchStrategy* strategy);
        int launchCost();

};*/

#include <iostream>

using namespace std;

class PostLaunchStrategy{
    public:
        virtual int rocketLaunchCost(BaseRocket* context,  Caretaker* caretaker) = 0;

};

class SuccessfulRocketStrategy : public PostLaunchStrategy{
    public:
        virtual int rocketLaunchCost(BaseRocket* context,  Caretaker* caretaker);

};

class FailedRocketStrategy : public PostLaunchStrategy{
    public:
        virtual int rocketLaunchCost(BaseRocket* context,  Caretaker* caretaker);

};

#endif