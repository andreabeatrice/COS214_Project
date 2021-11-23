#ifndef CARETAKER_H
#define CARETAKER_H

#include "RocketMemento.h"

class RocketMemento;

class Caretaker {
	private:
		RocketMemento* mem;
	public:
		RocketMemento* getMemento();
		void setMemento(RocketMemento*);
};

#endif