#include "RocketMemento.h"

RocketMemento::RocketMemento(int h, int c, State* s)
{
	this->health = h;
	this->cost = c;
	this->state = s;
}

int RocketMemento::getHealth()
{
	return health;
}

int RocketMemento::getCost()
{
	return cost;
}

State* RocketMemento::getState()
{
	return state;
}