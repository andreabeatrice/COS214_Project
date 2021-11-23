#include "TestLaunch.h"

TestLaunch::TestLaunch(BaseRocket* r)
{
	this->rocket = r;
}

TestLaunch::~TestLaunch()
{
	delete rocket;
}

int TestLaunch::execute()
{
	return rocket->Countdown();//Function in rocket that will allow the rocket to blast off as simulation
}