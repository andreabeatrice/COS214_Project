/*
Main parent for Rocket hierarchy.
All parts have health and cost.
Rockets contructed via Decorator patern. CargoHold (i.e.Dragon and Starlink) are end of chain. Nothing can be held after them.
Cargo is held within CargoHold.
Rockets Stored via Composite Pattern.
All changes are added to Lucidchart

To Do:
Add Composite.
No parts have functionality past what is needed for Decorator.

Questions:
Should Merlin Rockets be in Decorator chain or stored in array within Falcon Rocket?intint
*/

#ifndef Rocket_H
#define Rocket_H

class Rocket
{
private:
	int health;
	int cost;
public:
	Rocket();
	int getCost();
	int getHealth();
	void setHealth(int);
	virtual void add(Rocket*) = 0;
};

#endif