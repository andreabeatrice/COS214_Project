#include "ControlRocketStateFacade.h"

ControlRocketStateFacade::ControlRocketStateFacade(Container* c)
    {
        container = c;
        iterator = container->createIterator();
        Rocket* rock = iterator->first();
        for(rock = iterator->first();!iterator->isDone();rock = iterator->next())
            {
                context.push_back(new RocketContext());
            }
    }

ControlRocketStateFacade::~ControlRocketStateFacade()
    {
        delete container;
        delete iterator;
    }

void ControlRocketStateFacade::putInFailedState(Rocket* r)
    {
        RocketState* state = new RocketFailedState();
        int count = 0;
        Rocket* rock = iterator->first();
        for(rock = iterator->first();!iterator->isDone();rock = iterator->next())
            {
                if(rock == r)
                    {
                        context[count]->changeRocketState(state);
                    }
                count++;
            }
    }

void ControlRocketStateFacade::putInSuccessState(Rocket* r)
    {
        RocketState* state = new RocketSuccessState();
        int count = 0;
        Rocket* rock = iterator->first();
        for(rock = iterator->first();!iterator->isDone();rock = iterator->next())
            {
                if(rock == r)
                    {
                        context[count]->changeRocketState(state);
                    }
                count++;
            }
    }