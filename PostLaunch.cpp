#include "PostLaunch.h"

PostLaunchContext::PostLaunchContext(PostLaunchStrategy* strategy){
    this->strategy = strategy;

}

int PostLaunchContext::launchCost(){

}

/////////////////////////////////////

int SuccessfulRocketStrategy::rocketLaunchCost(){

}

/////////////////////////////////////

int FailedRocketStrategy::rocketLaunchCost(){

}