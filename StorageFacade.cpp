#include "StorageFacade.h"

StorageFacade::StorageFacade(Storage* inRocketStore){
    this->RocketStore = inRocketStore;

}

Rocket_Component** StorageFacade::ItemsStored(string name, int count){
    
    int totalItems = RocketStore->totalItems();
    this->components = RocketStore->getComponents();
    int selection = 0;
    char selectC = 'a';

    if(name != "Falcon 9 Core" && name != "Merlin"){

        for(int i=0; i<totalItems; i++){

            if(this->components[i]->getName()==name){
                cout<<"ID: "<<i<<"\t"<<name<<"\t"<<this->components[i]->getType()<<"\t"<<this->components[i]->getHealth()<<"% Health\n";
            }

        }

        cout<<"\nPlease enter the ID of the option you would like to select:\n\n";
        cin>>selection;
        cin.ignore();

        Rocket_Component** returnArr = new Rocket_Component*[1];
        returnArr[0] = this->components[selection];

        cout<<"\n--------------------------\n\n";

        return returnArr;

    }
    else{
        int j=0;

        //Get the number of engines of type x from storage

        for(int i=0; i<totalItems; i++){

           if(this->components[i]->getName()==name){ 
            j++;
           }

        }

        Rocket_Component** tempStorage = new Rocket_Component*[j];
        j=0;

        //Copy them into a new array

        for(int i=0; i<totalItems; i++){

            if(this->components[i]->getName()==name){ 
                tempStorage[j] = this->components[i];
                j++;
            }

        }

        //Sort the array
        bubbleSort(tempStorage, j);

        //print the array

        for(int i=0; i<j; i++){
            cout<<"ID: "<<i<<"\t"<<name<<"\t"<<tempStorage[i]->getType()<<"\t"<<tempStorage[i]->getHealth()<<"% Health\n";
        }

        cout<<"\nPlease select one of the following options from the list: \n\n";
        cout<<"[a] : "<<count<<" "<<name<<" engine(s) with the highest health values\n";
        cout<<"[b] : "<<count<<" "<<name<<" engine(s) with the lowest health values\n\n";

        cin>>selectC;
        cin.ignore();

        cout<<"--------------------------\n\n";

        Rocket_Component** returnArr = new Rocket_Component*[count];

        if(selectC=='a'){
            int k=0;

            for(int i = j-1; i>j-1-count; i--){
                returnArr[k] = tempStorage[i];
                k++;
            }
        }
        else if(selectC=='b'){

            for(int i=0; i<count;i++){
                returnArr[i] = tempStorage[i];
            }
        }

        return returnArr;

        
    }
    
}

void StorageFacade::bubbleSort(Rocket_Component** inArr, int size){

    Rocket_Component* temp;
    int i, j;
    for (i = 0; i < size-1; i++){    
     
        for (j = 0; j < size-i-1; j++){
            if (inArr[j]->getHealth() > inArr[j+1]->getHealth()){
                temp = inArr[j];
                inArr[j] = inArr[j+1];
                inArr[j+1] = temp;
            }
        }
    }

}
