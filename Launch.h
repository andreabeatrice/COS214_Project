#ifndef LAUNCH_H
#define LAUNCH_H

#include <iostream>

using namespace std;

//Command class
class Launch {
	public:
		//Function to call the rocket function to launch
		virtual int execute() = 0;
};

#endif