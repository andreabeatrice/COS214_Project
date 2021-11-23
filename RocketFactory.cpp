#include "RocketFactory.h"

BaseRocket* CreateRocket::produce(){
    cout<<"Building Rocket...\n\n";
    return produceProduct();
}

///////////////////////////

CreateViableRocket::CreateViableRocket(StorageFacade* inStorageFacade){
    this->FactoryStorageFacade = inStorageFacade;
}

BaseRocket* CreateViableRocket::produceProduct(){
    char cargo = 'a';
    char mass = 'a';

    Rocket_Component** MerlinC = NULL;
    Rocket_Component** FalconCoresC = NULL;
    Rocket_Component** bodyC = NULL;
    Rocket_Component** cargoC = NULL;
    Rocket_Component** aeroC = NULL;
    Rocket_Component** electricC = NULL;

    int nOfMerlin = 0;
    int nOfFCore = 0;


    cout<<"What type of cargo would you like to launch?\n\n";
    cout<<"[a] : Satellites, [b] : Supplies, [c] Humans\n\n";
    cin>>cargo;
    cout<<"\n";

    cout<<"What is the mass of the cargo?\n\n";
    cout<<"[a] : <= 22.8 tons , [b] > 22.8 tons\n\n";
    cin>>mass;
    cout<<"\n";

    cout<<"--------------------------\n\n";

    if(cargo=='c'){
        cout<<"The type of cargo specified will require a Crew Dragon Spacecraft.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        cargoC = this->FactoryStorageFacade->ItemsStored("Crew Dragon",1);

    }
    else if(cargo=='b'){
        cout<<"The type of cargo specified will require a Dragon Spacecraft.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        cargoC = this->FactoryStorageFacade->ItemsStored("Dragon",1);

    }
    else if(cargo=='a'){
        cout<<"The type of cargo specified will not require a spacecraft.\n\n";
        cout<<"--------------------------\n\n";
        cargoC = NULL;

    }

    if(mass=='b'){
        cout<<"The mass of the cargo specified will require a Falcon Heavy Rocket.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        bodyC = this->FactoryStorageFacade->ItemsStored("Falcon Heavy",1);

        cout<<"The Falcon Heavy Rocket will require 3 Falcon 9 cores.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        sleep(1);
        FalconCoresC = this->FactoryStorageFacade->ItemsStored("Falcon 9 Core",3);
        nOfFCore = 3;

        cout<<"The Falcon Heavy Rocket will require 27 Merlin Engines.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        sleep(1);
        MerlinC = this->FactoryStorageFacade->ItemsStored("Merlin",27);
        nOfMerlin = 27;

    }
    else if(mass=='a'){
        cout<<"The mass of the cargo specified will require a Falcon 9 Rocket.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        bodyC = this->FactoryStorageFacade->ItemsStored("Falcon 9",1);

        cout<<"The Falcon 9 Rocket will require 1 Falcon 9 core.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        sleep(1);
        FalconCoresC = this->FactoryStorageFacade->ItemsStored("Falcon 9 Core",1);

        nOfFCore = 1;

        cout<<"The Falcon 9 Rocket will require 9 Merlin Engines.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        sleep(1);
        MerlinC = this->FactoryStorageFacade->ItemsStored("Merlin",9);
        nOfMerlin = 9;

    }

    cout<<"The rocket will require aerodynamic components.\n\n";
    cout<<"The options currently available in storage are: \n\n";
    aeroC = this->FactoryStorageFacade->ItemsStored("Aerodynamic Components",1);

    cout<<"The rocket will require electronic components.\n\n";
    cout<<"The options currently available in storage are: \n\n";
    electricC = this->FactoryStorageFacade->ItemsStored("Electronic Components",1);

    //Build the Rocket

    Rocket_Decorator* myRocket;

    myRocket = new Aero_Decorator(aeroC[0]->getName(),aeroC[0]->getHealth());
    myRocket->add(new RocketBody_Decorator(bodyC[0]->getName(),bodyC[0]->getHealth()));
    myRocket->add(new Electronic_Decorator(electricC[0]->getName(), electricC[0]->getHealth()));

    for(int i=0; i< nOfMerlin; i++){
        myRocket->add(new Engine_Decorator(MerlinC[i]->getName(),MerlinC[i]->getHealth()));
    }
    

    for(int i=0; i< nOfFCore; i++){
        myRocket->add(new Engine_Decorator(FalconCoresC[i]->getName(),FalconCoresC[i]->getHealth()));
    }

    myRocket->add(new Spacecraft_Decorator(cargoC[0]->getName(), cargoC[0]->getHealth()));

    int count = nOfFCore + nOfMerlin + 4;

    Storage* delFromStorage = this->FactoryStorageFacade->getStorage();

    //delete components used for rocket from storage

    Rocket_Decorator** rocketComponentArray = new Rocket_Decorator*[count];


    int i = 0;

    myRocket->setRocketArr(rocketComponentArray, i);

    for(int i=0; i< count;i++){

        delFromStorage->deleteComponent(rocketComponentArray[i]->getName(), rocketComponentArray[i]->getType(), rocketComponentArray[i]->getHealth());

    }
    

    return new ViableRocket(myRocket, count, this->FactoryStorageFacade);

}

///////////////////////////

BaseRocket* CreateTestRocket::produceProduct(){

    char cargo = 'a';
    char mass = 'a';

    string spacecraftName = "";
    int spacecraftHealth = 0;

    string rocketName = "";
    int rocketHealth = 0;

    int merlinHealth = 0;
    int falconCoreHealth = 0;

    int electricHealth = 0;
    int aeroHealth = 0;

    int nOfMerlin = 0;
    int nOfFCore = 0;


    cout<<"What type of cargo would you like to launch?\n";
    cout<<"[a] : Satellites, [b] : Supplies, [c] Humans\n";
    cin>>cargo;
    cout<<"\n";

    cout<<"What is the mass of the cargo?\n";
    cout<<"[a] : <= 22.8 tons , [b] > 22.8 tons\n";
    cin>>mass;
    cout<<"\n";

    cout<<"--------------------------\n\n";

    if(cargo=='c'){
        cout<<"The type of cargo specified will require a Crew Dragon Spacecraft.\n\n";
        cout<<"Please enter a health value for the spacecraft:\n";
        cin>>spacecraftHealth;
        cout<<"\n";
        spacecraftName = "Crew Dragon";
        cout<<"--------------------------\n\n";        

    }
    else if(cargo=='b'){
        cout<<"The type of cargo specified will require a Dragon Spacecraft.\n\n";
        cout<<"Please enter a health value for the spacecraft:\n";
        cin>>spacecraftHealth;
        cout<<"\n";
        spacecraftName = "Dragon";
        cout<<"--------------------------\n\n";

    }
    else if(cargo=='a'){
        cout<<"The type of cargo specified will not require a spacecraft.\n\n";
        cout<<"--------------------------\n\n";

    }

    if(mass=='b'){
        cout<<"The mass of the cargo specified will require a Falcon Heavy Rocket.\n\n";
        cout<<"Please enter a health value for the rocket body:\n";
        cin>>rocketHealth;
        cout<<"\n";
        rocketName = "Falcon Heavy";

        cout<<"The Falcon Heavy Rocket will require 3 Falcon 9 cores.\n\n";
        cout<<"Please enter a health value for the Falcon 9 cores:\n";
        cin>>falconCoreHealth;
        cout<<"\n";
    
        nOfFCore = 3;

        cout<<"The Falcon Heavy Rocket will require 27 Merlin Engines.\n\n";
        cout<<"Please enter a health value for the Merlin Engines:\n";
        cin>>merlinHealth;
        cout<<"\n";
    
        nOfMerlin = 27;
        cout<<"--------------------------\n\n";

    }
    else if(mass=='a'){
        cout<<"The mass of the cargo specified will require a Falcon 9 Rocket.\n\n";
        cout<<"Please enter a health value for the rocket body:\n";
        cin>>rocketHealth;
        cout<<"\n";
        rocketName = "Falcon 9";

        cout<<"The Falcon 9 Rocket will require 1 Falcon 9 core.\n\n";
        cout<<"Please enter a health value for the Falcon 9 core:\n";
        cin>>falconCoreHealth;
        cout<<"\n";

        nOfFCore = 1;

        cout<<"The Falcon 9 Rocket will require 9 Merlin Engines.\n\n";
        cout<<"Please enter a health value for the Merlin Engines:\n";
        cin>>merlinHealth;
        cout<<"\n";

        nOfMerlin = 9;
        cout<<"--------------------------\n\n";

    }

    cout<<"The rocket will require aerodynamic components.\n\n";
    cout<<"Please enter a health value for the aerodynamic components:\n";
    cin>>aeroHealth;
    cout<<"\n";
    cout<<"--------------------------\n\n";

    cout<<"The rocket will require electronic components.\n\n";
    cout<<"Please enter a health value for the electronic components:\n\n";
    cin>>electricHealth;
    cout<<"\n";
    cout<<"--------------------------\n\n";

    //Build the Rocket

    Rocket_Decorator* myRocket;

    myRocket = new Aero_Decorator("Aerodynamic Components",aeroHealth);
    myRocket->add(new RocketBody_Decorator(rocketName,rocketHealth));
    myRocket->add(new Electronic_Decorator("Electronic Components", electricHealth));

    for(int i=0; i< nOfMerlin; i++){
        myRocket->add(new Engine_Decorator("Merlin",merlinHealth));
    }
    

    for(int i=0; i< nOfFCore; i++){
        myRocket->add(new Engine_Decorator("Falcon 9 Core",falconCoreHealth));
    }

    myRocket->add(new Spacecraft_Decorator(spacecraftName, spacecraftHealth));

    int count = nOfFCore + nOfMerlin + 4;
    

    return new TestRocket(myRocket, count, this->FactoryStorageFacade);

}

///////////////////////////

BaseRocket::BaseRocket(){

    this->stateContext = true;
}

void BaseRocket::attachObserver(RocketObserver* observer){

    this->observer = observer;

}

void BaseRocket::notifyObserver(){
    
    this->observer->update(false);

}

void BaseRocket::setState(bool state){

    this->stateContext = state;

}

bool BaseRocket::getState(){

    return this->stateContext;
}

int BaseRocket::getStateInt(){

    return this->state;
}

Storage* BaseRocket::getStorage(){

    return this->FactoryStorageFacade->getStorage();
}


///////////////////////////

ViableRocket::ViableRocket(Rocket_Decorator* inRocket, int count, StorageFacade* sFacade){
    this->myRocket = inRocket;
    this->noOfComponents = count;
    this->FactoryStorageFacade = sFacade;

}

int ViableRocket::getCount(){
    return this->noOfComponents;

}

Rocket_Decorator* ViableRocket::getRocketComponents(){
    return this->myRocket;
}

int ViableRocket::Countdown(){
    cout<<"Initiating Launch Procedure...\n\n";
    sleep(2);

    //Array of the components of the rocket

    Rocket_Decorator* myRock = this->getRocketComponents();

    Rocket_Decorator** rocketComponentArray = new Rocket_Decorator*[this->getCount()];

    int i = 0;

    myRock->setRocketArr(rocketComponentArray, i);

    //Calculate the average health of all of the components

    double avgHealth = 0;

    for(int j = 0; j < this->getCount() ; j++){
        avgHealth = avgHealth + rocketComponentArray[j]->getHealth();
    }

    avgHealth = avgHealth / this->getCount();

    //Provide a description of the rocket being launched

    cout<<"Description of all components used by the rocket currently being launched: \n";
    cout<<"\n-------------------------------------------\n";


    for(int i=0; i< this->getCount();i++){

        cout<<"Name: "<<rocketComponentArray[i]->getName()<<"\t"<<"Health: "<<rocketComponentArray[i]->getHealth()<<"\n";

    }
    cout<<"\n-------------------------------------------\n";

    cout<<"The overall health value for this rocket is: "<<avgHealth<<"\n\n";


    //Create a memento of the rocket and attach observer

    Caretaker* rCaretaker = new Caretaker();

    rCaretaker->setMemento(this->createMemento());

    RocketObserver* nObserver = new RocketObserver(this);

    //this->notifyObserver();

    //Static fire test
	
	cout<<"Preparing rocket and launch pad...\n\n";
    sleep(2);
	
	cout<<"Static fire test initiated!\n\n";
    sleep(1);

    int randVal = 0;
    int compHealth = 0;

    for(int i=0; i<this->getCount();i++){
        compHealth = rocketComponentArray[i]->getHealth();
        //Calculate a random value from 1 to 99
        int randVal = (rand()%(70)) + 1;

        if(randVal>= compHealth){
            cout<<"The rocket failed the static fire test!\n";
            cout<<"Component "<<rocketComponentArray[i]->getType()<< " failed during the test. \n";
            break;
        }
        else{
            cout<<"Component "<<rocketComponentArray[i]->getType()<<" passed the static fire test!\n";
        }
        
    }

    cout<<"\n-------------------------------------------\n";

    cout<<"\nWould you like to continue to launch? (y/n)\n\n";
    string answ = "n";
    getline(cin, answ);

    if(answ == "n"){
    
        string lDec = "";
        cout<<"\nWould you like to remove the current rocket from your launch list, or cancel all launches?\n\n";
        cout<<"[a]: Remove current rocket from launch list, [b] Cancel all launches\n\n";
        getline(cin, lDec);
        cout<<"--------------------------\n\n";

        if(lDec == "a"){
            return 1;
        }
        else{
            return 2;
        }

    }

    //Do the actual launch
    cout<<"\nPreparing rocket and launch pad for final launch...\n\n";
    sleep(2);

    cout<<"Rocket launch initiated!\n\n";
    sleep(1);

    randVal = 0;
    compHealth = 0;
    bool rocketFail = false;

    cout<<"The rocket is currently launching...\n\n";
    sleep(4);

    for(int i=0; i<this->getCount();i++){
        compHealth = rocketComponentArray[i]->getHealth();
        //Calculate a random value from 1 to 99
        int randVal = (rand()%(70)) + 1;
        rocketComponentArray[i]->setHealth(compHealth-randVal);
        compHealth = rocketComponentArray[i]->getHealth();

        if(compHealth<=0){
            cout<<"The rocket failed during the launch! All of the components used were lost\n";
            cout<<"Component "<<rocketComponentArray[i]->getType()<< " failed during the launch. \n\n";
            rocketFail = true;
            break;
        }

        
    }

    if(rocketFail == true){
        //RocketObserver->notify("fail");
        //notify observer
        nObserver->update(true);
    }
    else{
        //Could also add, "Humands docked at ISS" or "Satelites successfully launched depending on the type of cargo"
        //notify observer
        nObserver->update(false);
        cout<<"The rocket successfully launched and its components were recovered!\n\n";
    }

    State* rState = nObserver->getState();
    rState->doAction(this, rCaretaker);

    cout<<"--------------------------\n\n";

    return 0;

}

RocketMemento* ViableRocket::createMemento(){

    Rocket_Decorator* myRock = this->myRocket;

    Rocket_Decorator** rocketComponentArray = new Rocket_Decorator*[this->noOfComponents];

    int i = 0;

    int avgHealth = 0;

    myRock->setRocketArr(rocketComponentArray, i);

    for(int i=0; i< this->noOfComponents;i++){

        avgHealth = avgHealth + rocketComponentArray[i]->getHealth();

    }

    avgHealth = avgHealth/this->noOfComponents;

    //cout<<"\nThe average health of the components is: "<<avgHealth;

    this->state = avgHealth;

    return new RocketMemento(avgHealth);

}

void ViableRocket::setState(RocketMemento* memento){

    this->state = memento->getState();

}

///////////////////////////

TestRocket::TestRocket(Rocket_Decorator* inRocket, int count, StorageFacade* sFacade){
    this->myRocket = inRocket;
    this->noOfComponents = count;
    this->FactoryStorageFacade = sFacade;

}

int TestRocket::getCount(){
    return this->noOfComponents;

}

Rocket_Decorator* TestRocket::getRocketComponents(){
    return this->myRocket;
}

int TestRocket::Countdown(){
    cout<<"Test Launch\n";
}

RocketMemento* TestRocket::createMemento(){

    Rocket_Decorator* myRock = this->myRocket;

    Rocket_Decorator** rocketComponentArray = new Rocket_Decorator*[this->noOfComponents];

    int i = 0;

    int avgHealth = 0;

    myRock->setRocketArr(rocketComponentArray, i);

    for(int i=0; i< this->noOfComponents;i++){

        avgHealth = avgHealth + rocketComponentArray[i]->getHealth();

    }

    avgHealth = avgHealth/this->noOfComponents;

    //cout<<"\nThe average health of the components is: "<<avgHealth;

    this->state = avgHealth;

    return new RocketMemento(avgHealth);

}

void TestRocket::setState(RocketMemento* memento){

    this->state = memento->getState();

}


