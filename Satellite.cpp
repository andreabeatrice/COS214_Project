#include "Satellite.h"

Satellite::Satellite(int w) : Cargo(w)
{
}

Cargo* Satellite::clone()
{
    Cargo* r = new Satellite(260);
    return r;
}