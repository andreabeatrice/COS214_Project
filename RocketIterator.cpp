#include "RocketIterator.h"

RocketIterator::RocketIterator(BaseRocket** rocketList, int size){
    this->rocketList = rocketList;
    this->index = 0;
    this->size = size;

}

bool RocketIterator::hasNext(){
    if(this->index < this->size){
        return true;
    }
    return false;
}

BaseRocket* RocketIterator::Next(){

    if(this->hasNext()){
        index++;
        return this->rocketList[index-1];
    }

}