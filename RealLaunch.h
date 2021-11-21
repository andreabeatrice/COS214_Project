#ifndef REALLAUNCH_H
#define REALLAUNCH_H

#include "Launch.h"
#include "RocketFactory.h"

//ConcreteCommand class
class RealLaunch : public Launch {
	private:
		//Rocket list to launch rockets - Means rocket class must have the 
		//functions as they are receivers
		BaseRocket* rocket;
	public:
		//Initialise the variable to launch
		RealLaunch(BaseRocket* r);
		~RealLaunch();
		virtual void execute();
};

#endif