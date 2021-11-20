#include "StorageFacade.h"
#include "string"
#include "iostream"

using namespace std;
int main()
{
    StorageFacade WarehouseControl;
    for (int i = 0; i < 4; i++)
    {
        WarehouseControl.addPart();
    }
    WarehouseControl.printAvailableParts();
    cout<<"PP"<<endl;
    WarehouseControl.deleteComponent("SAT",260);
    cout<<"PD"<<endl;
    /*WarehouseControl.deleteComponent("FH",100);
    cout<<"PD"<<endl;
    WarehouseControl.deleteComponent("M",100);
    cout<<"PD"<<endl;*/
    WarehouseControl.printAvailableParts();
    cout<<"PP"<<endl;
    return 0;
}