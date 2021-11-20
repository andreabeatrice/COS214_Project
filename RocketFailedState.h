#ifndef ROCKETFAILEDSTATE_H
#define ROCKETFAILEDSTATE_H
#include "RocketState.h"

class RocketFailedState : public RocketState 
{
    public:
        RocketFailedState(RocketContext* r);
        void changeState();
        string getRocketState();
};

#endif
