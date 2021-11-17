#include "CommandRoom.h"

CommandRoom::CommandRoom(Launch* l)
{
	this->launch = l;
}

CommandRoom::~CommandRoom()
{
	delete launch;
}

void CommandRoom::blastOff()
{
	launch->execute();
}
