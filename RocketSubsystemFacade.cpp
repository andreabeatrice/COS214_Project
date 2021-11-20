#include "RocketSubsytemFacade.h"

RocketSubsytemFacade::RocketSubsytemFacade()
    {
        spacecraft = new Spacecraft();
        component = new RocketComponent();
    }

RocketSubsytemFacade::~RocketSubsytemFacade()
    {
        delete spacecraft;
        delete component;
        delete cargo;
    }

void RocketSubsytemFacade::addRocket(Rocket* r)
    {
        component->add(r);
    }

void RocketSubsytemFacade::load(Cargo* c = nullptr)
    {
        if(c == nullptr)
            {
                spacecraft->loadCargo(cargo);
                return;        
            }
        cargo = c;
        spacecraft->loadCargo(c);
    }

Cargo* RocketSubsytemFacade::unload()
    {
        return spacecraft->unloadCargo();
    }

void RocketSubsytemFacade::addSupplies(int s)
    {
        cargo = new Supplies(s);
        this->load(cargo);
    }
void RocketSubsytemFacade::addHumans(int h)
    {
        cargo = new Humans(s);
        this->load(cargo);
    }

void RocketSubsytemFacade::addSatellites(int s)
    {
        cargo = new Satellite(s);
        this->load(cargo);
    }

void RocketSubsytemFacade::addAero()
    {
        Rocket_Component* a = new Aero();
        rocket->add(a);
        components.push_back(a);
    }

void RocketSubsytemFacade::addRocketBody(string s)
    {
        Rocket_Component* r = new RocketBody(s);
        rocket->add(r);
        components.push_back(r);
    }

void RocketSubsytemFacade::addEngine(string s)
    {
        Rocket_Component* e = new Engine(s);
        rocket->add(e);
        components.push_back(e);       
    }   

void RocketSubsytemFacade::addElectronic()
    {   
        Rocket_Component* e = new Electronic();
        rockets->add(e);
        components.push_back(e);
    }

vector<Rocket*> RocketSubsytemFacade::getRockets()
    {
        return components;
    }


int RocketSubsytemFacade::getRocketHealth()
    {
        int health = 0;
        fo(int i = 0;i < components.size();i++)
            {
                health = health + components[i]->getCost();
            }
        return health;
    }

int RocketSubsytemFacade::getRocketCost()
    {
        int cost = 0;
        fo(int i = 0;i < components.size();i++)
            {
                cost = cost + components[i]->getCost();
            }
        return cost;        
    }