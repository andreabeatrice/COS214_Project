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
	virtual Iterator* createIterator();
	virtual void addRocket(Rocket* r);
};

#endif