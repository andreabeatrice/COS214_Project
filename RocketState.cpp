#include "RocketState.h"

void RocketSuccessState::doAction(BaseRocket* context){

    cout<<"The Rocket was successful!\n";
    context->setState(true);

}

void RocketFailedState::doAction(BaseRocket* context){

    cout<<"The Rocket failed\n";
    context->setState(false);

}