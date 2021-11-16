#ifndef CARGOHOLD_H
#define CARGOHOLD_H

#include "Cargo.h"
#include "Rochet.h"
class CargoHold : public Rochet
{
private:
	Cargo* _Cargo;
public:
	CargoHold();
	void loadCargo(Cargo*);
	Cargo* unloadCargo();
};

#endif