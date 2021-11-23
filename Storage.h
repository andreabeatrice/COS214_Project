#ifndef STORAGE_H
#define STORAGE_H

#include "Rocket_Component.h"
#include <string>
#include <iostream>

using namespace std;

class Storage{

    private:
        Rocket_Component** components;
        int size;
        Rocket_Component** protoComponents;

    public:
        Storage();
        void addRocketComponent(string name, string Type, int health);
        void increaseArraySize();
        void printStorage();
        void deleteComponent(string name, string Type, int health);
        Rocket_Component** getComponents();
        int totalItems();
};

#endif