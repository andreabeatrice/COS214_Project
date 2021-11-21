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
        cout<<"The options currently available in storage are: \n\n";
        cargoC = this->FactoryStorageFacade->ItemsStored("Crew Dragon",1);

    }
    else if(cargo=='b'){
        cout<<"The type of cargo specified will require a Dragon Spacecraft.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        cargoC = this->FactoryStorageFacade->ItemsStored("Crew Dragon",1);

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
        FalconCoresC = this->FactoryStorageFacade->ItemsStored("Falcon 9 Core",3);
        nOfFCore = 3;

        cout<<"The Falcon Heavy Rocket will require 27 Merlin Engines.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        MerlinC = this->FactoryStorageFacade->ItemsStored("Merlin",27);
        nOfMerlin = 27;

    }
    else if(mass=='a'){
        cout<<"The mass of the cargo specified will require a Falcon 9 Rocket.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        bodyC = this->FactoryStorageFacade->ItemsStored("Falcon 9",1);

        cout<<"The Falcon 9 Rocket will require 1 Falcon 9 core.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        FalconCoresC = this->FactoryStorageFacade->ItemsStored("Falcon 9 Core",1);

        nOfFCore = 1;

        cout<<"The Falcon 9 Rocket will require 9 Merlin Engines.\n\n";
        cout<<"The options currently available in storage are: \n\n";
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
    

    return new ViableRocket(myRocket, count);

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
    

    return new TestRocket(myRocket, count);

}

///////////////////////////

BaseRocket::BaseRocket(){}

///////////////////////////

ViableRocket::ViableRocket(Rocket_Decorator* inRocket, int count){
    this->myRocket = inRocket;
    this->noOfComponents = count;

}

int ViableRocket::getCount(){
    return this->noOfComponents;

}

Rocket_Decorator* ViableRocket::getRocketComponents(){
    return this->myRocket;
}

///////////////////////////

TestRocket::TestRocket(Rocket_Decorator* inRocket, int count){
    this->myRocket = inRocket;
    this->noOfComponents = count;

}

int TestRocket::getCount(){
    return this->noOfComponents;

}

Rocket_Decorator* TestRocket::getRocketComponents(){
    return this->myRocket;
}


