#include "Storage.h"
#include "Rocket.h"
#include "RocketFactory.h"
#include "StorageFacade.h"
#include "RocketContainer.h"
#include "RocketIterator.h"

#include "RealLaunch.h"
#include "TestLaunch.h"
#include "CommandRoom.h"

#include "Caretaker.h"
#include "RocketObserver.h"

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
//^^For the sleep function
#include <cstdlib>
//To generate random number



int main(){

    //Storage Test

    /*Storage* RocketStorage = new Storage();

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

    /*StorageFacade* RocketFactoryFacade = new StorageFacade(RocketStorage);

    CreateRocket* factory[1];

    factory[0] = new CreateViableRocket(RocketFactoryFacade);

    //factory[1] = new CreateTestRocket();

    BaseRocket* storage[2];

    //storage[0] = factory[0]->produce();
    storage[0] = factory[0]->produce();
    storage[1] = factory[0]->produce();


    //Printing Rocket created by Factory

    /*Rocket_Decorator* myRock = storage[0]->getRocketComponents();

    Rocket_Decorator** rocketComponentArray = new Rocket_Decorator*[storage[0]->getCount()];


    int i = 0;

    myRock->setRocketArr(rocketComponentArray, i);

    for(int i=0; i< storage[0]->getCount();i++){

        cout<<rocketComponentArray[i]->getName()<<"\t"<<rocketComponentArray[i]->getHealth()<<"\n";

    }*/

    //Rocket Iterator

    /*RocketContainer* launchList = new RocketContainer[2];
    launchList->addRocket(storage[0]);
    launchList->addRocket(storage[1]);
    
    int in = 0;

    RocketIterator* iter = launchList->getIterator();

    while(iter->hasNext()){
        cout<<0;
        iter->Next();
    }*/

    //Command Launch

    /*RealLaunch* rLaunch = new RealLaunch(storage[0]);

    CommandRoom* rCommand = new CommandRoom(rLaunch);

    rCommand->blastOff();*/

    //Memento


    /*Caretaker* rCaretaker = new Caretaker();

    rCaretaker->setMemento(storage[0]->createMemento());

    //Observer

    RocketObserver* nObserver = new RocketObserver(storage[0]);
    storage[0]->notifyObserver();*/

    //Setup basic storage

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



    //Main Program

    string act = "a";

    cout<<"\n-------------------------------------------\n";

    cout<<"Welcome to the rocket launch simulator!\n\n";

    sleep(1);

    bool mainCon = true;

    while(mainCon){

        cout<<"\n-------------------------------------------\n\n";
        cout<<"Would you like to work with the componets currently in storage, or simulate a launch?\n\n";
        cout<<"[a] : Work with the components in storage\t[b] : Simulate a launch\n\n";
        getline(cin, act);

        if(act == "a"){
            cout<<"\n-------------------------------------------\n";
            cout<<"\nYou have chosen to work with the components in storage\n\n";

            sleep(1);

            string sDec = "a";
            bool storCon = true;

            while(storCon == true){

                cout<<"\n-------------------------------------------\n\n";
                cout<<"How would you like to proceed?\n\n";
                cout<<"[a] Print the components currently in storage\n";
                cout<<"[b] Add a new rocket component to storage\n";
                cout<<"[c] Remove a rocket component from storage\n\n";
                getline(cin,sDec);

                if(sDec == "a"){
                    cout<<"\nYou have chose to print the components currently in storage...\n\n";

                    sleep(1);

                    cout<<"\n-------------------------------------------\n";

                    RocketStorage->printStorage();

                    cout<<"\n-------------------------------------------\n\n";
                }
                else if(sDec == "b"){
                    string inCType = "";
                    string inCName = "";
                    string inCHealth = "";
                    int iCHealth = 0;

                    cout<<"\nYou have chosen to add a component to storage...\n\n";

                    cout<<"What type of component would you like to add?\n\n";
                    getline(cin, inCType);

                    cout<<"\n\nWhat is the name of the component you would like to add?\n\n";
                    getline(cin, inCName);

                    cout<<"\n\nWhat is the health value of the component you would like to add?\n\n";
                    getline(cin, inCHealth);

                    iCHealth = stoi(inCHealth);

                    cout<<"\nAdding the new component to storage...\n\n";

                    RocketStorage->addRocketComponent(inCName,inCType,iCHealth);

                    sleep(1);

                    cout<<"\nThe component has been added to storage!\n\n";

                    cout<<"\n-------------------------------------------\n\n";

                }
                else if(sDec == "c"){

                    string inCType = "";
                    string inCName = "";
                    string inCHealth = "";
                    int iCHealth = 0;

                    cout<<"\nYou have chosen to remove a component from storage...\n\n";

                    cout<<"What is the type of the component that should be removed?\n\n";
                    getline(cin, inCType);

                    cout<<"\n\nWhat is the name of the component that should be removed?\n\n";
                    getline(cin, inCName);

                    cout<<"\n\nWhat is the health value of the component that should be removed?\n\n";
                    getline(cin, inCHealth);

                    iCHealth = stoi(inCHealth);

                    cout<<"\nRemoving the component from storage...\n\n";

                    RocketStorage->deleteComponent(inCName, inCType, iCHealth);

                    sleep(1);

                    cout<<"\nThe component has been removed from storage!\n\n";

                    cout<<"\n-------------------------------------------\n\n";

                }

                cout<<"Would you like to continue working with the storage?\n\n";
                cout<<"[a] : Yes\t[b] : No\n\n";
                getline(cin,sDec);


                if(sDec == "a"){
                    storCon = true;
                }
                else{
                    storCon = false;
                }

            }

        }
        else if(act=="b"){

            string lType = "";
            string lCount = "";
            int ilCount = 0;

            //Using Storage Facade for the rocket factory

            StorageFacade* RocketFactoryFacade = new StorageFacade(RocketStorage);

            CreateRocket* factory[1];

            factory[0] = new CreateViableRocket(RocketFactoryFacade);

            factory[1] = new CreateTestRocket();

            cout<<"\n-------------------------------------------\n";
            cout<<"\nYou have chosen to simulate a launch\n\n";

            cout<<"How would you like to proceeed?\n\n";
            cout<<"[a] : Simulate a real launch\n";
            cout<<"[b] : Simulate a test launch\n\n";
            getline(cin, lType);

            cout<<"\nHow many rockets would you like to build for the simulation?\n\n";
            getline(cin, lCount);
            ilCount = stoi(lCount);

            BaseRocket* storage[ilCount];

            cout<<"\n-------------------------------------------\n";

            if(lType == "a"){

                for(int i = 0; i<ilCount; i++){

                    cout<<"Rocket Number "<<i+1<<"\n\n";

                    storage[i] = factory[0]->produce();

                }

            }
            else if(lType == "b"){

                for(int i = 0; i<ilCount; i++){

                    storage[i] = factory[1]->produce();

                }

            }

            //Preparing the iterator to launch the stored rockets

            RocketContainer* launchList = new RocketContainer[ilCount];

            for(int i = 0; i < ilCount; i++){
                launchList->addRocket(storage[i]);

            }
    
            int in = 0;

            RocketIterator* iter = launchList->getIterator();

            BaseRocket* currentLaunch;
            State* rocketState;

            int rResul = 0;

            while(iter->hasNext()){
                currentLaunch = iter->Next();

                rResul = currentLaunch->Countdown();

                if(rResul == 1){
                    /*launchList->deleteRocket(currentLaunch);
                    iter = launchList->getIterator();*/
                    continue;

                }
                else if(rResul == 2){

                    break;

                }

            }




        }

        cout<<"\nWould you like to continue working with the program?\n\n";
        cout<<"[a] : Yes\t[b] : No\n\n";
        getline(cin, act);

        if(act == "a"){
            mainCon = true;
        }
        else{
            mainCon = false;
        }

    }



   



    return 0;
}