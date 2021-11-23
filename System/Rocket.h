#ifndef ROCKET_H
#define ROCKET_H

#include <string>
#include <iostream>

using namespace std;

class Rocket_Component_Decorator;

class Rocket_Decorator{

    private:
        int health;
        string type;
        string name;
    
    public:
        Rocket_Decorator();
        void setHealth(int health);
        int getHealth();
        void setType(string type);
        string getType();
        void setName(string name);
        string getName();

        virtual void add(Rocket_Decorator* Component) = 0;
        virtual void setRocketArr(Rocket_Decorator** inRocket, int i) = 0;

};

class Rocket_Component_Decorator: public Rocket_Decorator{

    private:
        Rocket_Decorator* Part;

    public:

        Rocket_Component_Decorator();
        virtual void add(Rocket_Decorator* Component);
        virtual void setRocketArr(Rocket_Decorator** inRocket, int i);

};

class Engine_Decorator: public Rocket_Component_Decorator{

    public:
        Engine_Decorator(string name, int health);

};

class Aero_Decorator: public Rocket_Component_Decorator{

    public:
        Aero_Decorator(string name, int health);

};

class Electronic_Decorator: public Rocket_Component_Decorator{

    public:
        Electronic_Decorator(string name, int health);

};

class RocketBody_Decorator: public Rocket_Component_Decorator{

    public:
        RocketBody_Decorator(string name, int health);
};

class Spacecraft_Decorator: public Rocket_Decorator{

    public:
        Spacecraft_Decorator(string name, int health);

        virtual void add(Rocket_Decorator* Component);
        virtual void setRocketArr(Rocket_Decorator** inRocket, int i);

};

#endif