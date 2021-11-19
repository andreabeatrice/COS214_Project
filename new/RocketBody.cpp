#include "RocketBody.h"

RocketBody::RocketBody(string s)
{
    typeOfBody = s;
}
Rocket* RocketBody::clone(int h)
{
    Rocket* r = new RocketBody(typeOfBody);
    r->setHealth(h);
    return r;
}