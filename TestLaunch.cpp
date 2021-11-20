#include "TestLaunch.h"

TestLaunch::TestLaunch(Rocket* r)
{
	this->rocket = r;
}

TestLaunch::~TestLaunch()
{
	delete rocket;
}

void TestLaunch::execute()
{
	rocket->TestCountdown();//Function in rocket that will allow the rocket to blast off as simulation
}
