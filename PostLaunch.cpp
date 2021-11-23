#include "PostLaunch.h"
#include <iomanip>

//Price of engines
const int MerlinP = 10;
const int Falc9CoreP = 20;

//Price of rocket bodies
const int Falc9BodyP = 30;
const int FalcHeavyP = 60;

//Price of spacecraft
const int DragonS = 30;
const int CrewDragonS = 40;

//Aero + Elec
const int RocketAero = 5;
const int RocketElec = 10;


int SuccessfulRocketStrategy::rocketLaunchCost(BaseRocket* context, Caretaker* caretaker){


    context->setState(caretaker->getMemento());

    int or_avgHealth = context->getStateInt();

    cout<<"--------------------------\n\n";
    cout<<"The components recovered from the launch are the following:\n\n";

    Rocket_Decorator* doneRocket = context->getRocketComponents();

    ///////////////////////////////////////

    Rocket_Decorator** rocketComponentArray = new Rocket_Decorator*[context->getCount()];

    int i = 0;

    int avgHealth = 0;

    doneRocket->setRocketArr(rocketComponentArray, i);

    int lCost = 0;

    Storage* rStore = context->getStorage();

    for(int i=0; i< context->getCount();i++){

        avgHealth = avgHealth + rocketComponentArray[i]->getHealth();
        cout<<"Name: "<<rocketComponentArray[i]->getName()<<" "<<rocketComponentArray[i]->getType()<<"\t"<<"Health: "<<rocketComponentArray[i]->getHealth()<<"\n";

        rStore->addRocketComponent(rocketComponentArray[i]->getName(), rocketComponentArray[i]->getType(), rocketComponentArray[i]->getHealth());

        if(rocketComponentArray[i]->getName()=="Merlin"){

            lCost = lCost + MerlinP;

        }
        else if(rocketComponentArray[i]->getName()=="Falcon 9 Core"){

            lCost = lCost + Falc9CoreP;

        }
        else if(rocketComponentArray[i]->getName()=="Aerodynamic Components"){

            lCost = lCost + RocketAero;

        }
        else if(rocketComponentArray[i]->getName()=="Electronic Components"){

            lCost = lCost + RocketElec;
            
        }
        else if(rocketComponentArray[i]->getName()=="Crew Dragon"){

            lCost = lCost + CrewDragonS;
            
        }
        else if(rocketComponentArray[i]->getName()=="Dragon"){

            lCost = lCost + DragonS;
            
        }
        else if(rocketComponentArray[i]->getName()=="Falcon 9"){

            lCost = lCost + Falc9BodyP;
            
        }
        else if(rocketComponentArray[i]->getName()=="Falcon Heavy"){

            lCost = lCost + FalcHeavyP;
            
        }

    }

    avgHealth = avgHealth/context->getCount();

    cout<<"--------------------------\n\n";

    cout<<"The overall health of the rocket before the launch = "<<or_avgHealth<<"\n\n";
    cout<<"The overall health of the rocket after the launch = "<<avgHealth<<"\n\n";

    cout<<"Considering the price of building new components, and the damage done to the components that were launched\n\n";

    float f_lCost = (float)(or_avgHealth - avgHealth)/(float)100;

    f_lCost = f_lCost * lCost;

    cout<<"We can determine that the launch had a cost of R"<<setprecision(2)<<fixed<<f_lCost<<" million\n\n";

    do{
        cout<< "Press enter to continue...";
    }
    while (cin.get() != '\n');

    return 0;    

}

/////////////////////////////////////

int FailedRocketStrategy::rocketLaunchCost(BaseRocket* context, Caretaker* caretaker){

    context->setState(caretaker->getMemento());

    int or_avgHealth = context->getStateInt();

    cout<<"--------------------------\n\n";
    cout<<"The components that were destroyed during the launch are the following:\n\n";

    Rocket_Decorator* doneRocket = context->getRocketComponents();

    ///////////////////////////////////////

    Rocket_Decorator** rocketComponentArray = new Rocket_Decorator*[context->getCount()];

    int i = 0;

    doneRocket->setRocketArr(rocketComponentArray, i);

    int lCost = 0;


    for(int i=0; i< context->getCount();i++){

        cout<<"Name: "<<rocketComponentArray[i]->getName()<<" "<<rocketComponentArray[i]->getType()<<"\t"<<"Health: "<<rocketComponentArray[i]->getHealth()<<"\n";

        if(rocketComponentArray[i]->getName()=="Merlin"){

            lCost = lCost + MerlinP;

        }
        else if(rocketComponentArray[i]->getName()=="Falcon 9 Core"){

            lCost = lCost + Falc9CoreP;

        }
        else if(rocketComponentArray[i]->getName()=="Aerodynamic Components"){

            lCost = lCost + RocketAero;

        }
        else if(rocketComponentArray[i]->getName()=="Electronic Components"){

            lCost = lCost + RocketElec;
            
        }
        else if(rocketComponentArray[i]->getName()=="Crew Dragon"){

            lCost = lCost + CrewDragonS;
            
        }
        else if(rocketComponentArray[i]->getName()=="Dragon"){

            lCost = lCost + DragonS;
            
        }
        else if(rocketComponentArray[i]->getName()=="Falcon 9"){

            lCost = lCost + Falc9BodyP;
            
        }
        else if(rocketComponentArray[i]->getName()=="Falcon Heavy"){

            lCost = lCost + FalcHeavyP;
            
        }

    }

    cout<<"--------------------------\n\n";

    cout<<"The overall health of the rocket before the launch = "<<or_avgHealth<<"\n\n";

    cout<<"The rocket was totally destroyed during the launch\n";
    cout<<"Therefore, the cost of the launch will be the cost of all of the destroyed components\n\n";

    cout<<"We can determine that the launch had a cost of R"<<lCost<<" million\n\n";

    do{
        cout<< "Press enter to continue...\n";
    }
    while (cin.get() != '\n');

    return 0;

}