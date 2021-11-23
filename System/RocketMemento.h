#ifndef ROCKETMEMENTO_H
#define ROCKETMEMENTO_H


#include "RocketFactory.h"

class RocketMemento {
	private:
		int state;

	public:
		RocketMemento(int state);
		int getState();
};

#endif