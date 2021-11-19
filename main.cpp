#include "StorageFacade.h"
#include "string"
#include "iostream"

using namespace std;
int main()
{
    StorageFacade WarehouseControl;
    Engine* m = new Engine("M");
    WarehouseControl.addPart(m);
    string s = m->getEngineType();
    cout<<s<<endl;
    for (int i = 0; i < 20; i++)
    {
        cout<<i<<endl;
        WarehouseControl.addPart();
    }
    WarehouseControl.printAvailableParts();
    return 0;
}