
#ifndef COMMANDROOM_H
#define COMMANDROOM_H

#include "Launch.h"

//Invoker class
class CommandRoom {
	private:
		//Variable to hold command to execute
		Launch* launch;
	public:
		//Initialise launch variable
		CommandRoom(Launch*);
		~CommandRoom();
		//Call execute command
		void blastOff();
};

#endif