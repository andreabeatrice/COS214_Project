#ifndef CREATECONTAINEROFROCKETSFACADE_H
#define CREATECONTAINEROFROCKETSFACADE_H

#include "Container.h"
class Container;
#include "Iterator.h"
class Iterator;

class CreateContainerOfRocketsFacade
    {
        public:
            CreateContainerOfRocketsFacade(Container* c = nullptr);
            ~CreateContainerOfRocketsFacade();
            void setContainer(Container*);
            Container* getContainer();
            Iterator* getIterator();
            void addRocket(Rocket*);
            vector<Rocket*> getRocketList();

        private:
            Container* rockets;
            Iterator* iterator;
    };

#endif