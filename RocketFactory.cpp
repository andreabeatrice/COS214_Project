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

    //cout<<FactoryStorageFacade->totalItemsStored()<<"\n";


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
        //cout<<temp[0]->getName()<<"hello"<<"\n";

    }
    else if(cargo=='b'){
        cout<<"The type of cargo specified will require a Dragon Spacecraft.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        cargoC = this->FactoryStorageFacade->ItemsStored("Crew Dragon",1);
        //cout<<temp[0]->getName()<<"hello"<<"\n";

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
        //cout<<"Test "<<bodyC[0]->getName();

        cout<<"The Falcon Heavy Rocket will require 3 Falcon 9 cores.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        FalconCoresC = this->FactoryStorageFacade->ItemsStored("Falcon 9 Core",3);
        nOfFCore = 3;
        /*cout<<temp[0]->getHealth()<<"\n";
        cout<<temp[1]->getHealth()<<"\n";
        cout<<temp[2]->getHealth()<<"\n";*/

        cout<<"The Falcon Heavy Rocket will require 27 Merlin Engines.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        MerlinC = this->FactoryStorageFacade->ItemsStored("Merlin",27);
        nOfMerlin = 27;
        /*cout<<temp[0]->getHealth()<<"\n";
        cout<<temp[1]->getHealth()<<"\n";
        cout<<temp[26]->getHealth()<<"\n";*/

    }
    else if(mass=='a'){
        cout<<"The mass of the cargo specified will require a Falcon 9 Rocket.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        bodyC = this->FactoryStorageFacade->ItemsStored("Falcon 9",1);

        cout<<"The Falcon 9 Rocket will require 1 Falcon 9 core.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        FalconCoresC = this->FactoryStorageFacade->ItemsStored("Falcon 9 Core",1);
        //cout<<temp[0]->getHealth()<<"\n";
        nOfFCore = 1;

        cout<<"The Falcon 9 Rocket will require 9 Merlin Engines.\n\n";
        cout<<"The options currently available in storage are: \n\n";
        MerlinC = this->FactoryStorageFacade->ItemsStored("Merlin",9);
        nOfMerlin = 9;
        /*cout<<temp[0]->getHealth()<<"\n";
        cout<<temp[1]->getHealth()<<"\n";
        cout<<temp[2]->getHealth()<<"\n";*/

    }

    cout<<"The rocket will require aerodynamic components.\n\n";
    cout<<"The options currently available in storage are: \n\n";
    aeroC = this->FactoryStorageFacade->ItemsStored("Aerodynamic Components",1);

    cout<<"The rocket will require electronic components.\n\n";
    cout<<"The options currently available in storage are: \n\n";
    electricC = this->FactoryStorageFacade->ItemsStored("Electronic Components",1);

    //Build the Rocket
    //cout<<"\n"<<nOfFCore<<"\t"<<nOfMerlin<<"\n";

    Rocket_Decorator* myRocket;

    myRocket = new Aero_Decorator(aeroC[0]->getName(),aeroC[0]->getHealth());
    myRocket->add(new RocketBody_Decorator(bodyC[0]->getName(),bodyC[0]->getHealth()));
    myRocket->add(new Electronic_Decorator(electricC[0]->getName(), electricC[0]->getHealth()));
    myRocket->add(new Spacecraft_Decorator(cargoC[0]->getName(), cargoC[0]->getHealth()));

    //cout<<"\n"<<MerlinC[0]->getName()<<"\t"<<MerlinC[0]->getHealth()<<"\n";

    /*for(int i=0; i< nOfMerlin; i++){
        myRocket->add(new Engine_Decorator(MerlinC[i]->getName(),MerlinC[i]->getHealth()));
    }*/
    myRocket->add(new Engine_Decorator(MerlinC[0]->getName(),MerlinC[0]->getHealth()));

    /*for(int i=0; i< nOfFCore; i++){
        myRocket->add(new Engine_Decorator(FalconCoresC[i]->getName(),FalconCoresC[i]->getHealth()));
    }*/

    //int count = nOfFCore + nOfMerlin + 4;
    int count = 5;

    return new ViableRocket(myRocket, count);



}

///////////////////////////

BaseRocket* CreateTestRocket::produceProduct(){

    cout<<"Testt";

    return new TestRocket();

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

int TestRocket::getCount(){
    return this->noOfComponents;

}

Rocket_Decorator* TestRocket::getRocketComponents(){
    return this->myRocket;
}


