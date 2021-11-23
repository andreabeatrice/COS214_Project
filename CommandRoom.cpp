#include "CommandRoom.h"

CommandRoom::CommandRoom(Launch* l)
{
	this->launch = l;
}

CommandRoom::~CommandRoom()
{
	delete launch;
}

int CommandRoom::blastOff()
{
	return launch->execute();
}