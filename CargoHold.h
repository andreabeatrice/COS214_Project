#ifndef CARGOHOLD_H
#define CARGOHOLD_H

#include "Cargo.h"
#include "Rocket.h"
class CargoHold : public Rocket
{
private:
	Cargo* _Cargo;
public:
	CargoHold();
	void loadCargo(Cargo*);
	Cargo* unloadCargo();
};

#endif