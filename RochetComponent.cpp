#include "RochetComponent.h"

RochetComponent::RochetComponent()
{
	Part = nullptr;
}

void RochetComponent::add(Rochet* p)
{
	if(p==nullptr)
	{
		Part = p;
	}
	else
	{
		Part->add(p);
	}
}

RochetComponent::~RochetComponent()
{
	delete Part;
}
