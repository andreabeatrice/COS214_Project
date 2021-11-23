#ifndef TESTLAUNCH_H
#define TESTLAUNCH_H

#include "Launch.h"
#include "Rocket.h"

#include "RocketFactory.h"

//ConcreteCommand class
class TestLaunch : public Launch {
	private:
		//Rocket list to launch rockets - Means rocket class must have the 
		//functions as they are receivers
		BaseRocket* rocket;
	public:
		//Initialise the variable to launch
		TestLaunch(BaseRocket* r);
		~TestLaunch();
		virtual int execute();
};

#endif