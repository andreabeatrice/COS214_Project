#include "LaunchSystemFacade.h"

LaunchSystemFacade::LaunchSystemFacade(Launch* l)
    {
        this->setLaunch(l);
        command = new CommandRoom(l);
    }

LaunchSystemFacade::~LaunchSystemFacade()
    {
        delete launch;
        delete command;
    }

void LaunchSystemFacade::notifyRocketFailed()
    {
        //DO SOMETHING IF ROCKET FAILS
        cout<<"Rocket Failed"<<endl;
    }

void LaunchSystemFacade::notifyRocketSuccess()
    {
        //DO SOMETHING IF ROCKET SUCCEEDS
        cout<<"Rocket Succeeds"<<endl;
    }

void LaunchSystemFacade::setLaunch(Launch* l)
    {
        launch = l;
    }

Launch* LaunchSystemFacade::getLaunch()
    {
        return launch;
    }

CommandRoom* LaunchSystemFacade::getCommand()
    {
        return command;
    }

void LaunchSystemFacade::setCommand(CommandRoom* c = nullptr)
    {
        if(c == nullptr)
            {
                command = new CommandRoom(launch);
                return;        
            }
        command = c;
    }

void LaunchSystemFacade::run()
    {
        command->blastOff();
    }