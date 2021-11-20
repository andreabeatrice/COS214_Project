#include "Container.h"
#include <vector>

#ifndef ROCKETCONTAINER_H
#define ROCKETCONTAINER_H

#include <string>
#include <iostream>

using namespace std;

class RocketContainer : public Container
{
private:
	vector<Rocket*> rocketList;

public:
	Iterator* createIterator();
	void addRocket(Rocket* r);
};

#endif