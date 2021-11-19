#include "Electronic.h"

Rocket* clone(int h)
{
    Rocket* r = new Electronic();
    r->setHealth(h);
    return r;
}