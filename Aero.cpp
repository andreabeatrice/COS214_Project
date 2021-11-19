#include "Aero.h"

Aero::Aero()
{

}

Rocket* Aero::clone(int h)
{
    Rocket* r = new Aero();
    r->setHealth(h);
    return r;
}