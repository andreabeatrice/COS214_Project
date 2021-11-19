#ifndef SATELLITE_H
#define SATELLITE_H

#include "Cargo.h"
#include "Prototype.h"
class Satellite : public Cargo
{
    Satellite(int);
    Cargo* clone();
};

#endif