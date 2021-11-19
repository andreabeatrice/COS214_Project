#include "StorageFacade.h"

StorageFacade::StorageFacade()
{
    Warehouse = new Storage();
}

StorageFacade::~StorageFacade()
{
    delete Warehouse;
}
void StorageFacade::addPart()
{
    Warehouse->addPart();
}

void StorageFacade::addPart(Aero* a)
{
    Warehouse->addPart(a);
}

void StorageFacade::addPart(RocketBody* r)
{
    Warehouse->addPart(r);
}

void StorageFacade::addPart(Engine* e)
{
    Warehouse->addPart(e);
}

void StorageFacade::addPart(Electronic* e)
{
    Warehouse->addPart(e);
}

void StorageFacade::addPart(Cargo* s)
{
    Warehouse->addPart(s);
}

list<Rocket*> StorageFacade::getComponents(string s)
{
    Warehouse->getComponents(s);
}

list<list<Rocket*>> StorageFacade::getAllComponents()
{
    list<list<Rocket*>> n;
    n.push_front(getComponents("F9"));
    n.push_front(getComponents("FH"));
    n.push_front(getComponents("M"));
    n.push_front(getComponents("VM"));
    n.push_front(getComponents("EL"));
    return n;
}

list<Cargo*> StorageFacade::getSatellites()
{
    return Warehouse->getSatellites();
}