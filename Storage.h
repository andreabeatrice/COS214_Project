#ifndef STORAGE_H
#define STORAGE_H

#include<list>
#include"string"
#include"Rocket.h"

using namespace std;  

class Storage
{
private:
    list<Rocket*>* RocketBody;
    list<Rocket*>* Engine;
    list<Rocket*>* Aero;
    list<Rocket*>* Spacecraft;
    list<Rocket*>* Electronic;
public:
    Storage();
    ~Storage();
    void addPart(string);
};


#endif