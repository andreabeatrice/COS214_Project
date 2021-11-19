#ifndef Rocket_H
#define Rocket_H

class Rocket
{
private:
	int rocketHealth;
	int rocketCost;
public:
	Rocket();
	int getCost();
	int getHealth();
	void setHealth(int);
	virtual void add(Rocket*) = 0;
};

#endif