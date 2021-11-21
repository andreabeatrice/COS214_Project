#include "Storage.h"

Storage::Storage(){
    this->size = 8;
    this->components = new Rocket_Component*[this->size];

    this->components[0] = new Engine("Falcon 9 Core",99);
    this->components[1] = new Engine("Merlin",99);
    this->components[2] = new Aero("Aerodynamic Components",99);
    this->components[3] = new Spacecraft("Crew Dragon",99);
    this->components[4] = new Spacecraft("Dragon",99);
    this->components[5] = new Electronic("Electronic Components",99);
    this->components[6] = new RocketBody("Falcon 9",99);
    this->components[7] = new RocketBody("Falcon Heavy",99);

}

void Storage::addRocketComponent(string name, string Type, int health){

    this->increaseArraySize();

    if(Type == "Engine"){

        this->components[this->size-1] = this->components[0]->insert(name,health);

    }
    else if(Type == "Aero"){

        this->components[this->size-1] = this->components[2]->insert(name,health);

    }
    else if(Type == "Spacecraft"){

        this->components[this->size-1] = this->components[3]->insert(name,health);

    }
    else if(Type == "Electronic"){

        this->components[this->size-1] = this->components[5]->insert(name,health);

    }
    else if(Type == "Rocket Body"){

        this->components[this->size-1] = this->components[6]->insert(name,health);

    }

}

void Storage::deleteComponent(string name, string Type, int health){

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

}

void Storage::increaseArraySize(){


    Rocket_Component** newArr = new Rocket_Component*[this->size + 1];

    for(int i=0; i<this->size; i++){
        newArr[i] = this->components[i];
    }

    delete [] this->components;

    this->components = newArr;
    this->size++;

}

void Storage::printStorage(){
    for(int i=0; i<this->size; i++){
        cout<<"Type: "<<this->components[i]->getType()<<" Name: "<<this->components[i]->getName()
        <<" Health: "<<this->components[i]->getHealth()<<"\n";
    }

    cout<<"Total = "<<this->size<<"\n";
}

Rocket_Component** Storage::getComponents(){
    return this->components;
}

int Storage::totalItems(){
    return this->size;
}