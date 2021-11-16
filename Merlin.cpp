#include "Merlin.h"

int Merlin::refill(int f)
{
    Fuel += f;
    return Fuel;
}

int Merlin::getFuelLevel()
{
    return Fuel;
}
