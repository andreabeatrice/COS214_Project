#include "RocketContainer.h"

RocketContainer::RocketContainer(){
    this->ContainerSize = 0;

}

RocketIterator* RocketContainer::getIterator(){
    return new RocketIterator(this->rocketList, this->ContainerSize);

}

void RocketContainer::addRocket(BaseRocket* inRocket){

    increaseArraySize();
    this->rocketList[this->ContainerSize-1] = inRocket;

}

void RocketContainer::increaseArraySize(){


    BaseRocket** newArr = new BaseRocket*[this->ContainerSize + 1];

    for(int i=0; i<this->ContainerSize; i++){
        newArr[i] = this->rocketList[i];
    }

    delete [] this->rocketList;

    this->rocketList = newArr;
    this->ContainerSize++;

}

void RocketContainer::deleteRocket(BaseRocket* removeRocket){

    BaseRocket** newArr = new BaseRocket*[this->ContainerSize - 1];

    int j = 0;

    for(int i=0; i<this->ContainerSize; i++){

        if(this->rocketList[i] == removeRocket){
            continue;
        }
        else{
            newArr[j] = this->rocketList[i];
            j++;
        }

    }

    this->rocketList = newArr;
    this->ContainerSize--;

}