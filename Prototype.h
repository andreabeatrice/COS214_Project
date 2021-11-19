#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include"Rocket.h"

class Prototype
{
public:
    Prototype(){};
    virtual Rocket* clone(int)=0;
};

#endif