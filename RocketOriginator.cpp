#include "RocketOriginator.h"

RocketMemento* RocketOriginator::createMemento()
{
	//Create memento - store health and cost and current state
	RocketMemento* temp = new RocketMemento(RocketHealth, RocketCost, state);
	
	return temp;
}

void RocketOriginator::setMemento(RocketMemento* rocketM)
{
	this->RocketHealth = rocketM->getHealth();
	this->RocketCost = rocketM->getCost();
	this->state = rocketM->getState();
}