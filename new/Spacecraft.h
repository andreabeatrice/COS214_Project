#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include "Cargo.h"
#include "Rocket.h"
#include "string"

using namespace std;

class Spacecraft : public Rocket
{
private:
	Cargo* _Cargo;
	string typeOfSpacecraft;
public:
	Spacecraft();
	void loadCargo(Cargo*);
	Cargo* unloadCargo();
};

#endif