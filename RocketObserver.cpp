#include "RocketObserver.h"

RocketObserver::RocketObserver(BaseRocket* subject){
    this->subject = subject;
    this->subject->attachObserver(this);

}

void RocketObserver::update(){

    cout<<"observer notified!";

}