#ifndef MERLIN_H
#define MERLIN_H

#include "RocketComponent.h"
class Merlin : public RocketComponent
{
private:
	int Fuel;
public:
	int refill(int); //return total fuel after filling.
	int getFuelLevel();
};

#endif