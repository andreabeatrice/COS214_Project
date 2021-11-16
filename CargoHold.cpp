#include "CargoHold.h"

CargoHold::CargoHold()
{

}

void CargoHold::loadCargo(Cargo* c)
{
	_Cargo = c;
}

Cargo* CargoHold::unloadCargo()
{
	Cargo* c = _Cargo;
	_Cargo = nullptr;
	return c;
}
