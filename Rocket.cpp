#include "Rocket.h"

int Rocket::getCost()
{
	return rocketCost;
}

int Rocket::getHealth()
{
	return rocketHealth;
}

void Rocket::setHealth(int h)
{
	rocketHealth = h;
}
