#include "RocketState.h"

void RocketSuccessState::doAction(BaseRocket* context){

    cout<<"The Rocket was successful!\n";

    PostLaunch = new SuccessfulRocketStrategy();
    PostLaunch->rocketLaunchCost();
    //context->setState(true);

}

void RocketFailedState::doAction(BaseRocket* context){

    cout<<"The Rocket failed\n";

    PostLaunch = new FailedRocketStrategy();
    PostLaunch->rocketLaunchCost();

    //context->setState(false);

}