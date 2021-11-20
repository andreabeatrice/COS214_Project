#ifndef FAILEDROCKETSTRATEGY_H
#define FAILEDROCKETSTRATEGY_H

#include <string>
#include "PostLaunchStrategy.h"

using namespace std;

class FailedRocketStrategy : PostLaunchStrategy{

public:
	FailedRocketStrategy();
	
	string launchCost();

};

#endif