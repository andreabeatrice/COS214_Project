#ifndef ROCKETFACTORY_H
#define ROCKETFACTORY_H

#include <iostream>
#include "StorageFacade.h"
#include "Rocket.h"

using namespace std;

class BaseRocket;

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
    /*protected:
        int id;
        int total;*/

    public:
        BaseRocket();
        virtual int getCount() = 0;
        virtual Rocket_Decorator* getRocketComponents() = 0;
        virtual void Countdown() = 0;

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

};

#endif