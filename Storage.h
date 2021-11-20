#ifndef STORAGE_H
#define STORAGE_H

#include<list>
#include"string"
#include<iostream>
#include"Aero.h"
#include"RocketBody.h"
#include"Engine.h"
#include"Electronic.h"
#include"Spacecraft.h"
#include"Satellite.h"

using namespace std;
class Storage
{
private:
    list<int> AO;
    Aero* AeroCopy;
    list<int> F9;
    RocketBody* Falcon9Copy;
    list<int> FH;
    RocketBody* FalconHCopy;
    list<int> M;
    Engine* MerlinCopy;
    list<int> MV;
    Engine* MerlinVacuumCopy;
    list<int> Elec;
    Electronic* ElectronicCopy;
    list<int> SL;
    Cargo* SatelliteCopy;
public:
    Storage();
    ~Storage();
    void addPart();
    void addPart(Aero*);
    void addPart(RocketBody*);
    void addPart(Engine*);
    void addPart(Electronic*);
    void addPart(Cargo*);
    list<Rocket*> getComponents(string);
    list<Cargo*> getSatellites();
    void RemoveF9(int);
    void RemoveFH(int);
    void RemoveM(int);
    void RemoveVM(int);
    void RemoveEL(int);
    void RemoveSAT(int);
    void RemoveAO(int);
};


#endif