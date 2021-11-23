#include "RocketState.h"

void RocketSuccessState::doAction(BaseRocket* context, Caretaker* caretaker){

    //cout<<"The Rocket was successful!\n";

    PostLaunch = new SuccessfulRocketStrategy();
    PostLaunch->rocketLaunchCost(context, caretaker);
    //context->setState(true);

}

void RocketFailedState::doAction(BaseRocket* context, Caretaker* caretaker){

    //cout<<"The Rocket failed\n";

    PostLaunch = new FailedRocketStrategy();
    PostLaunch->rocketLaunchCost(context, caretaker);

    //context->setState(false);

}