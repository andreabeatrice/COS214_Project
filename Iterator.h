#ifndef ITERATOR_H
#define ITERATOR_H

#include <string>
#include <iostream>

using namespace std;

class Iterator
{
private:
	

public:
	virtual Rocket* first();
	virtual Rocket* next();
	virtual Rocket* isDone();
	virtual Rocket* current();
};

#endif