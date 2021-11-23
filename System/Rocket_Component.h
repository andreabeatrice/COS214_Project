#ifndef ROCKET_COMPONENT_H
#define ROCKET_COMPONENT_H

#include <string>

using namespace std;

class Rocket_Component{
    public:
        Rocket_Component();
        Rocket_Component(string name, int health);
        virtual Rocket_Component* insert(string name, int health) = 0;
        string getType();
        string getName();
        int getHealth();


    protected:
        string name;
        int health;
        string type;

};

class Engine: public Rocket_Component{
    public:
        Engine(string name, int health);
        virtual Rocket_Component* insert(string name, int health);

};

class Aero: public Rocket_Component{
    public:
        Aero(string name, int health);
        virtual Rocket_Component* insert(string name, int health);

};

class Spacecraft: public Rocket_Component{
    public:
        Spacecraft(string name, int health);
        virtual Rocket_Component* insert(string name, int health);

};

class Electronic: public Rocket_Component{
    public:
        Electronic(string name, int health);
        virtual Rocket_Component* insert(string name, int health);

};

class RocketBody: public Rocket_Component{
    public:
        RocketBody(string name, int health);
        virtual Rocket_Component* insert(string name, int health);
};

#endif