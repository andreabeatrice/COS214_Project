#include "RocketMemento.h"

RocketMemento::RocketMemento(int state)
{
	this->state = state;
}

int RocketMemento::getState()
{
	return this->state;
}