#include "Storage.h"
#include "Rocket.h"
#include "RocketFactory.h"
#include "StorageFacade.h"

int main(){

    //Storage Test

    Storage* RocketStorage = new Storage();

    RocketStorage->addRocketComponent("Falcon 9", "Rocket Body", 53);
    RocketStorage->addRocketComponent("Falcon 9 Core", "Engine", 84);
    RocketStorage->addRocketComponent("Aerodynamic Components", "Aero", 45);
    RocketStorage->addRocketComponent("Electronic Components", "Electronic", 49);
    RocketStorage->addRocketComponent("Crew Dragon","Spacecraft",25);

    for(int i=0; i<35; i++){
        RocketStorage->addRocketComponent("Merlin", "Engine", 99-i);
    }

    for(int i=0; i<35; i++){
        RocketStorage->addRocketComponent("Falcon 9 Core", "Engine", 99-i);
    }

    //RocketStorage->printStorage();

    //RocketStorage->deleteComponent("Falcon 9 Core","Engine", 84);
    //RocketStorage->deleteComponent("Merlin", "Engine", 65);

    //cout<<"\n";

    //RocketStorage->printStorage();*/




    /*//Decorator Test

    Rocket_Decorator* myRocket;

    myRocket = new Aero_Decorator("Aerodynamic Parts", 99);

    myRocket->add(new RocketBody_Decorator("Falcon 9", 98));
    myRocket->add(new Engine_Decorator("Merlin", 97));
    myRocket->add(new Electronic_Decorator("Electronic Parts", 96));
    myRocket->add(new Spacecraft_Decorator("Dragon", 95));

    Rocket_Decorator** rocketComponentArray = new Rocket_Decorator*[5];

    int i = 0;

    myRocket->setRocketArr(rocketComponentArray, i);

    for(i=0; i< 5;i++){

        cout<<rocketComponentArray[i]->getHealth()<<"\n";

    }*/

    //Using Storage Facade for the rocket factory

    StorageFacade* RocketFactoryFacade = new StorageFacade(RocketStorage);

    CreateRocket* factory[2];

    factory[0] = new CreateViableRocket(RocketFactoryFacade);

    factory[1] = new CreateTestRocket();

    BaseRocket* storage[2];

    //storage[0] = factory[0]->produce();
    storage[1] = factory[1]->produce();


    //Printing Rocket created by Factory

    Rocket_Decorator* myRock = storage[1]->getRocketComponents();

    Rocket_Decorator** rocketComponentArray = new Rocket_Decorator*[storage[1]->getCount()];


    int i = 0;

    myRock->setRocketArr(rocketComponentArray, i);

    for(int i=0; i< storage[1]->getCount();i++){

        cout<<rocketComponentArray[i]->getName()<<"\t"<<rocketComponentArray[i]->getHealth()<<"\n";

    }
    //storage[1] = factory[1]->produce();



    return 0;
}