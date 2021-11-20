#include "RocketMementoFacade.h"

RocketMementoFacade::RocketMementoFacade()
    {
        memento = nullptr;
    }

RocketMementoFacade::~RocketMementoFacade()
    {
        delete memento;
    }

void RocketMementoFacade::createMemento(Rocket* r)
    {
        memento = new RocketMemento(r);
    }

RocketMemento* RocketMementoFacade::getMemento()
    {
        return memento;
    }

