#include "Rocket_Component.h"

Rocket_Component::Rocket_Component(){}

Rocket_Component::Rocket_Component(string name, int health){}

string Rocket_Component::getType(){

    return this->type;
}

string Rocket_Component::getName(){

    return this->name;

}

int Rocket_Component::getHealth(){

    return this->health;

}

////////////////////////////////////////

Engine::Engine(string name, int health){

    this->name = name;
    this->health = health;
    this->type = "Engine";

}

Rocket_Component* Engine::insert(string name, int health){

    return new Engine(name, health);

}

////////////////////////////////////////

Aero::Aero(string name, int health){

    this->name = name;
    this->health = health;
    this->type = "Aerodynamics";

}

Rocket_Component* Aero::insert(string name, int health){

    return new Aero(name, health);

}

////////////////////////////////////////

Spacecraft::Spacecraft(string name, int health){

    this->name = name;
    this->health = health;
    this->type = "Spacecraft";

}

Rocket_Component* Spacecraft::insert(string name, int health){

    return new Spacecraft(name, health);

}

////////////////////////////////////////

Electronic::Electronic(string name, int health){

    this->name = name;
    this->health = health;
    this->type = "Electronic";

}

Rocket_Component* Electronic::insert(string name, int health){

     return new Electronic(name, health);

}

////////////////////////////////////////

RocketBody::RocketBody(string name, int health){

    this->name = name;
    this->health = health;
    this->type = "Rocket Body";

}

Rocket_Component* RocketBody::insert(string name, int health){

     return new RocketBody(name, health);

}