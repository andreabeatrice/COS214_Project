#include "RealLaunch.h"

RealLaunch::RealLaunch(BaseRocket* r)
{
	this->rocket = r;
}

RealLaunch::~RealLaunch()
{
	delete rocket;
}

int RealLaunch::execute()
{
	return rocket->Countdown();//Function in rocket that will allow the rocket to blast off fro real
}