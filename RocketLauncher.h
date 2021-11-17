#ifndef ROCKETLAUNCHER_H
#define ROCKETLAUNCHER_H

#include <iostream>
#include <string>

using namespace std;

//Receiver class
class RocketLauncher {
	public:
		RocketLauncher();
		//Function to simulate real launch
		void RealCountdown();
		//Function to simulate test launch
		void TestCountdown();
};

#endif