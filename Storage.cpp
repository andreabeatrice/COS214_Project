#include "Storage.h"

Storage::Storage()
{
    AeroCopy = new Aero();
    Falcon9Copy = new RocketBody("Falcon9");
    FalconHCopy = new RocketBody("Falcon Heavy");
    MerlinCopy = new Engine("Merlin");
    MerlinVacuumCopy = new Engine("Merlin Vacuum");
    ElectronicCopy = new Electronic();
    SatelliteCopy = new Cargo(260);
}

void Storage::addPart()
{
    cout<<"What should be added?"<<endl;
    cout<<"F9 = Falcon9"<<endl;
    cout<<"FH = Falcon Heavy"<<endl;
    cout<<"M = Merlin Engine"<<endl;
    cout<<"VM = Vacuum Merlin"<<endl;
    cout<<"El = Electronics"<<endl;
    cout<<"SAT = Satellite"<<endl;
    string s;
    cin>>s;
    if (s=="F9")
        F9.push_back(100);
    else
    if (s=="FH")
        FH.push_back(100);
    else
    if (s=="M")
        M.push_back(100);
    else
    if (s=="VM")
        MV.push_back(100);
    else
    if (s=="EL")
        Elec.push_back(100);
    else
    if (s=="SAT")
        SL.push_back(260);
    else
    {
        cout<<"Enter a valid code"<<endl;
        addPart();
    }
    
}

Storage::~Storage()
{
    delete AeroCopy;
    delete Falcon9Copy;
    delete FalconHCopy;
    delete MerlinCopy;
    delete MerlinVacuumCopy;
    delete ElectronicCopy;
    delete SatelliteCopy;
}