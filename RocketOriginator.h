#ifndef ROCKETORIGINATOR_H
#define ROCKETORIGINATOR_H

#include "RocketMemento.h"
#include "State.h"

class RocketOriginator {
	private: 
		State* state;
		int RocketHealth;
		int RocketCost;
	public:
		RocketMemento* createMemento();
		void setMemento(RocketMemento*);
};

#endif