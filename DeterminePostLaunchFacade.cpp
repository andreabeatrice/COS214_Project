#include "DeterminePostLaunchFacade.h"

DeterminePostLaunchFacade::(PostLaunchStrategy* _strategy = nullptr)
    {
        if(_strategy == nullptr)
            {
                context = new PostLaunchContext();
            }
        else
            {
                context = new PostLaunchContext(_strategy);
            }   
    }

DeterminePostLaunchFacade::~DeterminePostLaunchFacade()
    {
        delete context;
    }

PostLaunchContext* DeterminePostLaunchFacade::getContext()
    {
        return context;
    }

void DeterminePostLaunchFacade::setContext(PostLaunchContext* p)
    {
        context = nullptr;
        context = p;
    }

void DeterminePostLaunchFacade::SetLaunchStrategy(PostLaunchStrategy* _strategy)
    {
        this->getContext()->seLaunchStrategy(_strategy);
    }

string DeterminePostLaunchFacade::getLaunchCost()
    {
        return this->getContext()->launchCost();
    }