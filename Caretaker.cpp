#include "Caretaker.h"

RocketMemento* Caretaker::getMemento()
{
	return this->mem;
}

void Caretaker::setMemento(RocketMemento* rm)
{
	this->mem = rm;
}