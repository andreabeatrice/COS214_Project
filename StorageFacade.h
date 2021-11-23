#ifndef STORAGE_FACADE_H
#define STORAGE_FACADE_H

#include "Storage.h"

class StorageFacade{
    private:
        Storage* RocketStore;
        Rocket_Component** components;

    public:
        StorageFacade(Storage* inRocketStore);
        Rocket_Component** ItemsStored(string name, int count);
        void bubbleSort(Rocket_Component** inArr, int size);
        Storage* getStorage();

};

#endif