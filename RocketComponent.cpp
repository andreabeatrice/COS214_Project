#include "RocketComponent.h"

RocketComponent::RocketComponent()
{
	Part = 0;
}

void RocketComponent::add(Rocket* p)
{
	if(p==0)
	{
		Part = p;
	}
	else
	{
		Part->add(p);
	}
}

RocketComponent::~RocketComponent()
{
	delete Part;
}
