#ifndef ROCHETCOMPONENT_H
#define ROCHETCOMPONENT_H

#include "Rochet.h"
class RochetComponent : public Rochet
{
private:
	Rochet* Part;
public:
	RochetComponent();
	void add(Rochet*);
	~RochetComponent();
};

#endif