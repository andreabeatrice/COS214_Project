#include "RocketContainer.h"

RocketContainer::RocketContainer() {

}

Iterator* RocketContainer::createIterator() {
	return new RocketIterator(rocketList);
}

void RocketContainer::addRocket(Rocket* r) {
	rocketList.push_back(r);
}

vector<Rocket*> RocketContainer::getRocketList() {
	return rocketList;
}