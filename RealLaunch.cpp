#include "RealLaunch.h"

RealLaunch::RealLaunch(Rocket* r)
{
	this->rocket = r;
}

RealLaunch::~RealLaunch()
{
	delete rocket;
}

void RealLaunch::execute()
{
	rocket->RealCountdown();//Function in rocket that will allow the rocket to blast off fro real
}
