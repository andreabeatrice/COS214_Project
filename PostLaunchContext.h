#ifndef POSTLAUNCHCONTEXT_H
#define POSTLAUNCHCONTEXT_H

#include <string>
#include "PostLaunchStrategy.h"
#include "SuccessfulRocketStrategy.h"
#include "FailedRocketStrategy.h"

using namespace std;

class PostLaunchContext{

private:
	PostLaunchStrategy* strategy;
	

public:
	PostLaunchContext();

	PostLaunchContext(PostLaunchStrategy* _strategy);
	
	void launchCost();

	void setLaunchStrategy(PostLaunchStrategy* _strategy);

};

#endif