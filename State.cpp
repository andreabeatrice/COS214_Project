#include "State.h"

State::State()
{
	health = 0;
	cost = 0;
}

int State::getH()
{
	return health;
}

int State::getC()
{
	return cost;
}

void State::setH(int h)
{
	health = h;
}

void State::setC(int c)
{
	cost = c;
}