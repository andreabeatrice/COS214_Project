#include "RocketContext.h"

RocketContext::RocketContext() {
	//
}

RocketContext::~RocketContext() {
	//delete this−>state;
}

void RocketContext::changeRocketState(RocketState* _state) {      //setState()
    this->state = _state;     
}

string RocketContext::getState() {
	return this->state->getRocketState();
}