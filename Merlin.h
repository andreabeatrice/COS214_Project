#ifndef MERLIN_H
#define MERLIN_H

#include "RochetComponent.h"
class Merlin : public RochetComponent
{
private:
	int Fuel;
public:
	int refill(int); //return total fuel after filling.
	int getFuelLevel();
};

#endif