#ifndef REALLAUNCH_H
#define REALLAUNCH_H

#include "Launch.h"
#include "RocketLauncher.h"

//ConcreteCommand class
class RealLaunch : public Launch {
	private:
		//Rocket list to launch rockets - Means rocket class must have the 
		//functions as they are receivers
		RocketLauncher* rocket;
	public:
		//Initialise the variable to launch
		RealLaunch(RocketLauncher*);
		~RealLaunch();
		virtual void execute();
};

#endif