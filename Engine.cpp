#include "Engine.h"

Engine::Engine(string s)
{
    typeOfEngine = s;
}
Rocket* Engine::clone(int h)
{
    Rocket* r = new Engine(typeOfEngine);
    r->setHealth(h);
    return r;
}