#include <string>
#include <iostream>

#include "PostLaunchStrategy.h"
#include "PostLaunchContext.h"

using namespace std;

PostLaunchContext::PostLaunchContext(){
	
}

PostLaunchContext::PostLaunchContext(PostLaunchStrategy* _strategy){
	strategy = _playstyle;
}

string PostLaunchContext::launchCost(){

	/*cout<<name<<*/strategy->launchCost();
}

void PostLaunchContext::setLaunchStrategy(PostLaunchStrategy* _strategy){
	strategy = _strategy;
}

