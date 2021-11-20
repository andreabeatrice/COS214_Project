#ifndef ROCKETCONTEXT_H
#define ROCKETCONTEXT_H

#include <string>
#include <iostream>

#include "RocketState.h"


using namespace std;

class RocketState;

class RocketContext
{
private:
    RocketState* state;

public:
    RocketContext();
    ~RocketContext();

    void changeRocketState(RocketState* _state);
    string getState();

};




#endif
