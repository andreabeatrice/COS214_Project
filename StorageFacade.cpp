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
    return Warehouse->getComponents(s);
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

void StorageFacade::printAvailableParts()
{
    Warehouse->printHelper("F9");
    Warehouse->printHelper("FH");
    Warehouse->printHelper("M");
    Warehouse->printHelper("VM");
    Warehouse->printHelper("EL");
    Warehouse->printHelper("AO");
    Warehouse->printHelper("SAT");
}

void StorageFacade::deleteComponent(string s,int i)
{
    if (s=="F9")
        Warehouse->RemoveF9(i);
    else
    if (s=="FH")
        Warehouse->RemoveFH(i);
    else
    if (s=="M")
        Warehouse->RemoveM(i);
    else
    if (s=="VM")
        Warehouse->RemoveVM(i);
    else
    if (s=="EL")
        Warehouse->RemoveEL(i);
    else
    if (s=="SAT")
        Warehouse->RemoveSAT(i);
    else
    if (s=="AO")
        Warehouse->RemoveAO(i);
    else
        cout<<"Enter a valid code"<<endl;
    
}