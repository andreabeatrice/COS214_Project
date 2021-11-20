#ifndef REALLAUNCH_H
#define REALLAUNCH_H

#include "Launch.h"
#include "Rocket.h"

//ConcreteCommand class
class RealLaunch : public Launch {
	private:
		//Rocket list to launch rockets - Means rocket class must have the 
		//functions as they are receivers
		Rocket* rocket;
	public:
		//Initialise the variable to launch
		RealLaunch(Rocket*);
		~RealLaunch();
		virtual void execute();
};

#endif