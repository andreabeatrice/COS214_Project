#include "StorageFacade.h"

int main()
{
    StorageFacade WarehouseControl;
    WarehouseControl.addPart();
    Engine* m = new Engine("M");
    for (int i = 0; i < 20; i++)
    {
        WarehouseControl.addPart(m);
    }
    WarehouseControl.printAvailableParts();
    return 0;
}