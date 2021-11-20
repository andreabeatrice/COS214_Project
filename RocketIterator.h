#include "Iterator.h"

#ifndef ROCKETITERATOR_H
#define ROCKETITERATOR_H

#include <string>
#include <iostream>

using namespace std;

class RocketIterator : public Iterator
{
private:
	vector<Rocket*> rocketList;
	int index = 0;

public:
	RocketIterator();
	RocketIterator(vector<Rocket*> rl);
	Rocket* first();
	Rocket* next();
	Rocket* previous();
	Rocket* current();
	Rocket* last();
	bool isDone();
};

#endif