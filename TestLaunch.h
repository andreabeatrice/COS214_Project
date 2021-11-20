#ifndef TESTLAUNCH_H
#define TESTLAUNCH_H

#include "Launch.h"
#include "Rocket.h"

//ConcreteCommand class
class TestLaunch : public Launch {
	private:
		//Rocket list to launch rockets - Means rocket class must have the 
		//functions as they are receivers
		Rocket* rocket;
	public:
		//Initialise the variable to launch
		TestLaunch(Rocket*);
		~TestLaunch();
		virtual void execute();
};

#endif
