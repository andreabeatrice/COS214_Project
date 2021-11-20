#ifndef LAUNCHSYSTEMFACADE_H
#define LAUNCHSYSTEMFACADE_H

#include<iostream>
#include<string>
using namespace std;

#include "Launch.h"
#include "CommandRoom.h"
class Launch;
class CommandRoom;

class LaunchSystemFacade
    {
        public:
            LaunchSystemFacade(Launch* l);
            ~LaunchSystemFacade();
            void notifyRocketFailed();
            void notifyRocketSuccess();

            void setLaunch(Launch*);
            Launch* getLaunch();
            CommandRoom* getCommand();
            void setCommand(CommandRoom* c = nullptr);
            void run();

        private:
            Launch* launch;
            CommandRoom* command;
    };

#endif