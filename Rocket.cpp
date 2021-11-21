#include "Rocket.h"

Rocket_Decorator::Rocket_Decorator(){}

void Rocket_Decorator::setHealth(int health){

    this->health = health;

}

int Rocket_Decorator::getHealth(){

    return this->health;

}

void Rocket_Decorator::setType(string type){

    this->type = type;

}

string Rocket_Decorator::getType(){

    return this->type;

}

void Rocket_Decorator::setName(string name){

    this->name = name;

}

string Rocket_Decorator::getName(){

    return this->name;
    
}

/////////////////////////////////////////////////

Rocket_Component_Decorator::Rocket_Component_Decorator(){

}

void Rocket_Component_Decorator::add(Rocket_Decorator* Component){
    if(Part == NULL){
        Part = Component;
    }
    else{
        Part->add(Component);
    }

}

void Rocket_Component_Decorator::setRocketArr(Rocket_Decorator** inRocket, int i){


    int index = i;

    inRocket[i] = this;
    index++;

    

    if(this->Part != NULL){
        Part->setRocketArr(inRocket, index);
    }


}

/////////////////////////////////////////////////

Engine_Decorator::Engine_Decorator(string name, int health){
    setName(name);
    setHealth(health);

}

/////////////////////////////////////////////////

Aero_Decorator::Aero_Decorator(string name, int health){
    setName(name);
    setHealth(health);
    
}

/////////////////////////////////////////////////

Electronic_Decorator::Electronic_Decorator(string name, int health){
    setName(name);
    setHealth(health);
    
}

/////////////////////////////////////////////////

RocketBody_Decorator::RocketBody_Decorator(string name, int health){
    setName(name);
    setHealth(health);
    
}

/////////////////////////////////////////////////

Spacecraft_Decorator::Spacecraft_Decorator(string name, int health){
    setName(name);
    setHealth(health);
    
}

void Spacecraft_Decorator::add(Rocket_Decorator* Component){}

void Spacecraft_Decorator::setRocketArr(Rocket_Decorator** inRocket, int i){
    
    inRocket[i] = this;

}

