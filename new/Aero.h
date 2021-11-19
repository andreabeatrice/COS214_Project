#ifndef AERO_H
#define AERO_H

#include "RocketComponent.h"
#include "Prototype.h"

using namespace std;

class Aero : public RocketComponent, public Prototype
{
public:
	Rocket* clone(int);
};

#endif