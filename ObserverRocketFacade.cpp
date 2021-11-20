#include "ObserverRocketFacade.h"

ObserverRocketFacade::ObserverRocketFacade(Rocket* r)
    {
        subject = r;
    }

ObserverRocketFacade::~ObserverRocketFacade()
    {
        delete subject;
    }

void ObserverRocketFacade::add(Observer* o)
    {
        subject->attach(o);
    }

void ObserverRocketFacade::remove(Observer* o)
    {
        subject->detach(o);
    }

void ObserverRocketFacade::notify()
    {
        subject->notify();
    }