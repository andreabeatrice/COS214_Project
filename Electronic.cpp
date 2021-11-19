#include "Electronic.h"

Rocket* Electronic::clone(int h)
{
    Rocket* r = new Electronic();
    r->setHealth(h);
    return r;
}