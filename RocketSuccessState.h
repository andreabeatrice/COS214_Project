#ifndef ROCKETSUCCESSSTATE_H
#define ROCKETSUCCESSSTATE_H
#include "RocketState.h"

class RocketSuccessState : public RocketState 
{
    public:
        RocketSuccessState(RocketContext* r);
        void changeState();
        string getRocketState();
};

#endif
