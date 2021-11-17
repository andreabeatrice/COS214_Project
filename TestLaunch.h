#ifndef TESTLAUNCH_H
#define TESTLAUNCH_H

#include "Launch.h"
#include "RocketLauncher.h"

//ConcreteCommand class
class TestLaunch : public Launch {
	private:
		//Rocket list to launch rockets - Means rocket class must have the 
		//functions as they are receivers
		RocketLauncher* rocket;
	public:
		//Initialise the variable to launch
		TestLaunch(RocketLauncher*);
		~TestLaunch();
		virtual void execute();
};

#endif