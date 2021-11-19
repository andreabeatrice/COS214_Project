#ifndef ELECTRONIC_H
#define ELECTRONIC_H

#include "RocketComponent.h"
#include "Prototype.h"

using namespace std;

class Electronic : public RocketComponent, public Prototype
{
public:
	Rocket* clone(int);
};

#endif