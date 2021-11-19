#ifndef ROCKETBODY_H
#define ROCKETBODY_H

#include "RocketComponent.h"
#include "Prototype.h"
#include "string"

using namespace std;
class RocketBody : public RocketComponent, public Prototype
{
private:
	string typeOfBody;
public:
	RocketBody(string);
	string getBodyType();
	Rocket* clone(int);
};

#endif