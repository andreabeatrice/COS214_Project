#ifndef ROCKETFACTORY_H
#define ROCKETFACTORY_H

#include <iostream>
#include "StorageFacade.h"
#include "Rocket.h"
#include "RocketMemento.h"
#include "RocketObserver.h"
#include "Caretaker.h"

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
//^^For the sleep function
#include <cstdlib>
//To generate random number

using namespace std;

class BaseRocket;
class RocketMemento;
class RocketObserver;

class CreateRocket{
    public:
        BaseRocket* produce();
    
    protected:
        virtual BaseRocket* produceProduct() = 0;
        StorageFacade* FactoryStorageFacade;

};

class CreateViableRocket : public CreateRocket{
    public:
        CreateViableRocket(StorageFacade* inStorageFacade);
        virtual BaseRocket* produceProduct();

};

class CreateTestRocket : public CreateRocket{
    public:
        virtual BaseRocket* produceProduct();

};

/////////////////////////

class BaseRocket{
    protected:
        int state;
        RocketObserver* observer;
        bool stateContext;

    public:
        BaseRocket();
        virtual int getCount() = 0;
        virtual Rocket_Decorator* getRocketComponents() = 0;
        virtual void Countdown() = 0;

        virtual RocketMemento* createMemento() = 0;
        virtual void setState(RocketMemento* memento) = 0;

        void attachObserver(RocketObserver* observer);
        void notifyObserver();
        
        void setState(bool state);
        bool getState();

};

class ViableRocket : public BaseRocket{
    private:
        Rocket_Decorator* myRocket;
        int noOfComponents;

    public:
        ViableRocket(Rocket_Decorator* inRocket, int count);
        virtual int getCount();
        Rocket_Decorator* getRocketComponents();
        virtual void Countdown();

        virtual RocketMemento* createMemento();
        virtual void setState(RocketMemento* memento);

};

class TestRocket : public BaseRocket{
    private:
        Rocket_Decorator* myRocket;
        int noOfComponents;

    public:
        TestRocket(Rocket_Decorator* inRocket, int count);
        virtual int getCount();
        Rocket_Decorator* getRocketComponents();
        virtual void Countdown();

        virtual RocketMemento* createMemento();
        virtual void setState(RocketMemento* memento);

};

#endif