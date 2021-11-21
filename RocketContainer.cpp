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

/*void Storage::deleteComponent(string name, string Type, int health){

    Rocket_Component** newArr = new Rocket_Component*[this->size - 1];

    int j = 0;

    for(int i=0; i<this->size; i++){

        if(this->components[i]->getType()==Type && this->components[i]->getName()==name && this->components[i]->getHealth()==health){
            continue;
        }
        else{
            newArr[j] = this->components[i];
            j++;
        }

    }

    this->components = newArr;
    this->size--;

}*/