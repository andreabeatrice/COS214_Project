#include "RocketComponent.h"

RocketComponent::RocketComponent()
{
	Part = nullptr;
}

void RocketComponent::add(Rocket* p)
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

RocketComponent::~RocketComponent()
{
	delete Part;
}
