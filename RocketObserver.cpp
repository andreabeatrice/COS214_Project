#include "RocketObserver.h"

RocketObserver::RocketObserver(BaseRocket* subject){
    this->subject = subject;
    this->subject->attachObserver(this);

}

void RocketObserver::update(bool LaunchResult){

    if(LaunchResult == true){

        this->rocketState = new RocketFailedState();

    }
    else{

        this->rocketState = new RocketSuccessState();

    }

}

State* RocketObserver::getState(){

    return this->rocketState;
}