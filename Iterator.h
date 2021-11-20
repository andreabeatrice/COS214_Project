#ifndef ITERATOR_H
#define ITERATOR_H

#include <string>
#include <iostream>
#include "Rocket.h"
#include <vector>

using namespace std;

class Iterator
{
private:
	

public:
	virtual Rocket* first() = 0;
	virtual Rocket* next() = 0;
	virtual Rocket* previous() = 0;
	virtual Rocket* current() = 0;
	virtual Rocket* last() = 0;
	virtual bool isDone() = 0;
};

#endif