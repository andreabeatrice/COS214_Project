#include "Aero.h"

Rocket* clone(int h)
{
    Rocket* r = new Aero();
    r->setHealth(h);
    return r;
}