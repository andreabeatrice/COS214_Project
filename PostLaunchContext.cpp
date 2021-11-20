#include <string>
#include <iostream>

#include "PostLaunchStrategy.h"
#include "SuccessfulRocketStrategy.h"
#include "FailedRocketStrategy.h"
#include "PostLaunchContext.h"

using namespace std;

PostLaunchContext::PostLaunchContext(){
	//strategy = new SuccessfulRocketStrategy();
}

PostLaunchContext::PostLaunchContext(PostLaunchStrategy* _strategy){
	strategy = _strategy;
}

void PostLaunchContext::launchCost(){

	cout<<strategy->launchCost()<<endl;
}

void PostLaunchContext::setLaunchStrategy(PostLaunchStrategy* _strategy){
	strategy = _strategy;
}

