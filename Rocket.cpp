#include "Rocket.h"

Rocket::Rocket()
{
}

int Rocket::getCost()
{
	return cost;
}

int Rocket::getHealth()
{
	return health;
}

void Rocket::setHealth(int h)
{
	health = h;
}
