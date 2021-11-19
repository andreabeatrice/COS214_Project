#ifndef ELECTRONIC_H
#define ELECTRONIC_H

#include "RocketComponent.h"
#include "Prototype.h"

using namespace std;

class Electronic : public RocketComponent, public Prototype
{
public:
	virtual Rocket* clone(int);
};

#endif