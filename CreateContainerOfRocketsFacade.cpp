#include "CreateContainerOfRocketsFacade.h"

CreateContainerOfRocketsFacade::CreateContainerOfRocketsFacade(Container* c = nullptr)
    {
        if(c == nullptr)
            {
                rockets = new RocketContainer();
            }
        else
            {
                rockets = c;
            }
        iterator = rockets->createIterator();
    }

CreateContainerOfRocketsFacade::~CreateContainerOfRocketsFacade()
    {
        delete rockets;
    }

void CreateContainerOfRocketsFacade::setContainer(Container* con)
    {
        rockets = con;
    }

Container* CreateContainerOfRocketsFacade::getContainer()
    {
        return rockets;
    }

Iterator* CreateContainerOfRocketsFacade::getIterator()
    {
        return iterator;
    }

void CreateContainerOfRocketsFacade::addRocket(Rocket* r)
    {
        rockets->addRocket(r);
    }

vector<Rocket*> CreateContainerOfRocketsFacade::getRocketList()
    {
        return rockets->getRocketList();
    }