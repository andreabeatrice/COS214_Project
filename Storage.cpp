#include "Storage.h"

Storage::Storage()
{
    RocketBody = new list<Rocket*>;
    Engine = new list<Rocket*>;
    Aero = new list<Rocket*>;
    Spacecraft = new list<Rocket*>;
    Electronic = new list<Rocket*>;
}

void Storage::addPart(string s)
{
    Rocket* r;
    if (s=="Body")
    {
        
    }
    else
    if (s=="Engine")
    {
        
    }
    else
    if (s=="Aero")
    {
        
    }
    else
    if (s=="SC")
    {
        
    }
    else
    if (s=="Elec")
    {
        
    }
    
    
}

Storage::~Storage()
{
    delete RocketBody;
    delete Engine;
    delete Aero;
    delete Spacecraft;
    delete Electronic;
}