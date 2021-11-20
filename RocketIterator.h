#include "Iterator.h"

#ifndef ROCKETITERATOR_H
#define ROCKETITERATOR_H

#include <string>
#include <iostream>

using namespace std;

class RocketIterator : public Iterator
{

public:
	Rocket* first();
	Rocket* next();
	Rocket* isDone();
	Rocket* current();
};

#endif