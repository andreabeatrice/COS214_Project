#ifndef ROCKETITERATOR_H
#define ROCKETITERATOR_H

#include "RocketContainer.h"

class RocketContainer;

class Iterator{
    public:
        virtual bool hasNext() = 0;
        virtual BaseRocket* Next() = 0;

};

class RocketIterator : public Iterator{
    private:
        int index;
        BaseRocket** rocketList;
        int size;

    public:
        RocketIterator(BaseRocket** rocketList, int size);
        virtual bool hasNext();
        virtual BaseRocket* Next();

};

#endif