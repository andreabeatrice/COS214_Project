/*
Main parent for Rochet hierarchy.
All parts have health and cost.
Rochets contructed via Decorator patern. CargoHold (i.e.Dragon and Starlink) are end of chain. Nothing can be held after them.
Cargo is held within CargoHold.
Rochets Stored via Composite Pattern.
All changes are added to Lucidchart

To Do:
Add Composite.
No parts have functionality past what is needed for Decorator.

Questions:
Should Merlin Rochets be in Decorator chain or stored in array within Falcon Rochet?intint
*/

#ifndef ROCHET_H
#define ROCHET_H

class Rochet
{
private:
	int health;
	int cost;
public:
	Rochet();
	int getCost();
	int getHealth();
	void setHealth(int);
	virtual void add(Rochet*) = 0;
};

#endif