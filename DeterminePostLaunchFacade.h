#ifndef DETERMINEPOSTLAUNCHFACADE_H
#define DETERMINEPOSTLAUNCHFACADE_H

#include<iostream>
#include<string>
using namespace std;

#include "PostLaunchContext.h"
class PostLaunchContext;


class DeterminePostLaunchFacade
    {
        public:
            DeterminePostLaunchFacade(PostLaunchStrategy* _strategy = nullptr);
            ~DeterminePostLaunchFacade();
            PostLaunchContext* getContext();
            void setContext(PostLaunchContext*);
            string getLaunchCost();
            void SetLaunchStrategy(PostLaunchStrategy*);

        private:
            PostLaunchContext* context;
    };

#endif