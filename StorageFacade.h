#ifndef StorageFacade_H
#define StorageFacade_H

#include "Storage.h"
#include "list"
#include "Rocket.h"
#include <algorithm>

using namespace std;
class StorageFacade
{
private:
    Storage* Warehouse;
public:
    StorageFacade();
    ~StorageFacade();
    void addPart();
    void addPart(Aero*);
    void addPart(RocketBody*);
    void addPart(Engine*);
    void addPart(Electronic*);
    void addPart(Cargo*);
    list<Rocket*> getComponents(string);
    list<list<Rocket*>> getAllComponents();
    list<Cargo*> getSatellites();
    void printAvailableParts();
    void printHelper(string);
};

#endif