#ifndef ROCKETMEMENTO_H
#define ROCKETMEMENTO_H

#include "State.h"

class RocketMemento {
	private:
		int health;
		int cost;
		State* state;
	public:
		RocketMemento(int, int, State*);
		int getHealth();
		int getCost();
		State* getState();
};

#endif