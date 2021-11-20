#ifndef SUCCESSFULROCKETSTRATEGY_H
#define SUCCESSFULROCKETSTRATEGY_H

#include <string>
#include "PostLaunchStrategy.h"

using namespace std;

class SuccessfulRocketStrategy : PostLaunchStrategy{

public:
	SuccessfulRocketStrategy();
	
	string launchCost();

};

#endif