#include "Cargo.h"

Cargo::Cargo(int w)
{
    weight = w;
}

Cargo* Cargo::clone(int w)
{
    return new Cargo(w);
}