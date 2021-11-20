#ifndef POSTLAUNCHSTRATEGY_H
#define POSTLAUNCHSTRATEGY_H

#include <string>
//

using namespace std;

class PostLaunchStrategy{

	public:
		PostLaunchStrategy();

		virtual string launchCost()=0;
};

#endif