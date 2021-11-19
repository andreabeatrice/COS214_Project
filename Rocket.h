#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include <string>

using namespace std;

//Receiver class
class Rocket {
	public:
		//Function to simulate real launch
		void RealCountdown();
		//Function to simulate test launch
		void TestCountdown();
};

#endif
