#ifndef POSTLAUNCHCONTEXT_H
#define POSTLAUNCHCONTEXT_H

#include <string>
#include "PostLaunchStrategy.h"


using namespace std;

class PostLaunchContext{

private:
	PostLaunchStrategy* strategy;
	

public:
	PostLaunchContext();

	PostLaunchContext(PostLaunchStrategy* _strategy);
	
	string launchCost();

	void setLaunchStrategy(PostLaunchStrategy* _strategy);

};

#endif