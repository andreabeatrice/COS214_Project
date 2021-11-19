#ifndef ENGINE_H
#define ENGINE_H

#include "RocketComponent.h"
#include "string"

using namespace std;

class Engine : public RocketComponent
{
private:
	string typeOfEngine;
public:
	Engine(string);
	string getEngineType();
	Rocket* clone(int);
};

#endif