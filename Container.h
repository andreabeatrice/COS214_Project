#include "RocketIterator.h"
#include <vector>

#ifndef CONTAINER_H
#define CONTAINER_H

#include <string>
#include <iostream>

using namespace std;

class Container
{
private:
	vector<Rocket*> rocketList;

public:
	virtual Iterator* createIterator() = 0;
	virtual void addRocket(Rocket* r) = 0;
	virtual vector<Rocket*> getRocketList() = 0;
};

#endif