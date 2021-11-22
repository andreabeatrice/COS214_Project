#ifndef ROCKETCONTAINER_H
#define ROCKETCONTAINER_H

#include "RocketFactory.h"
#include "RocketIterator.h"

class RocketIterator;

class Container{
    public:
        virtual RocketIterator* getIterator() = 0;

};

class RocketContainer : public Container{
    private:
        BaseRocket** rocketList;
        int ContainerSize;

    public:
        RocketContainer();
        virtual RocketIterator* getIterator();
        void addRocket(BaseRocket* inRocket);

        void increaseArraySize();
        void deleteRocket(BaseRocket* removeRocket);

};

#endif