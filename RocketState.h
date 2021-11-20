#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include <string>
#include <iostream>
using namespace std;

#include "RocketContext.h"
class RocketContext;

class RocketState {
	protected:	 //I made this protected instead of private, for subclass inheritance
		RocketContext* con;
    public:
        RocketState();
        virtual void changeState() = 0;
        virtual string getRocketState() = 0;
};

#endif
