#include "PostLaunch.h"

/*PostLaunchContext::PostLaunchContext(PostLaunchStrategy* strategy){
    this->strategy = strategy;

}

int PostLaunchContext::launchCost(){

}*/

/////////////////////////////////////

int SuccessfulRocketStrategy::rocketLaunchCost(){

    cout<<"Success Strat";

}

/////////////////////////////////////

int FailedRocketStrategy::rocketLaunchCost(){

    cout<<"Failed Strat";

}