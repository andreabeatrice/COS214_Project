#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include"Rocket.h"

class Prototype
{
private:
public:
    Prototype();
    virtual Rocket* clone(int)=0;
};

Prototype::Prototype()
{
}

#endif