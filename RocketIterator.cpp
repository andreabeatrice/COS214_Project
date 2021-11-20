#include "RocketIterator.h"

RocketIterator::RocketIterator(){

}

RocketIterator::RocketIterator(vector<Rocket*> rl){
	rocketList = rl;
}

Rocket* RocketIterator::first() {
	index = 0;
	return rocketList.front();
}

Rocket* RocketIterator::next() {
	index++;
	return rocketList.at(index);
}

Rocket* RocketIterator::previous() {
	index--;
	return rocketList.at(index);
}

bool RocketIterator::isDone() {
	if (index == rocketList.size() - 1) {
		return true;
	}
	else {
		return false;
	}
}

Rocket* RocketIterator::current() {
	return rocketList.at(index);
}

Rocket* RocketIterator::last() {
	index = rocketList.size() - 1;
	return rocketList.back();
}