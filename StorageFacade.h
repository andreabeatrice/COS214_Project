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
    void addPart();             //all addParts are overloaded functions make sure to call one depending on what you want to add
    void addPart(Aero*);        //addPart with no parameters will prompt the user to input a code and that part is created. The
    void addPart(RocketBody*);  //rest are to readd used components
    void addPart(Engine*);      //NB DO NOT ATTEMPT TO USE OBJECTS THAT HAVE BEEN STORED!
    void addPart(Electronic*);
    void addPart(Cargo*);
    list<Rocket*> getComponents(string);
    list<list<Rocket*>> getAllComponents(); //Satellites are not of type rocket. and technically not components so they are stored
    list<Cargo*> getSatellites();           //differently
    void printAvailableParts();
    void printHelper(string);
    void deleteComponent(string,int);       //imput the code of the component and its health if it has one or it's weight if it's a Satellite
};

#endif