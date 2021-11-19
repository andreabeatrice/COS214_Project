#include "Spacecraft.h"

Spacecraft::Spacecraft()
{

}

void Spacecraft::loadCargo(Cargo* c)
{
	_Cargo = c;
}

Cargo* Spacecraft::unloadCargo()
{
	Cargo* c = _Cargo;
	_Cargo = nullptr;
	return c;
}
