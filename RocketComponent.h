#ifndef RocketCOMPONENT_H
#define RocketCOMPONENT_H

#include "Rocket.h"
class RocketComponent : public Rocket
{
private:
	Rocket* Part;
public:
	RocketComponent();
	void add(Rocket*);
	~RocketComponent();
};

#endif