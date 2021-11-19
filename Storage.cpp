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


void Storage::addPart(Aero* a)
{
    AO.push_back(a->getHealth());
    delete a;
}

void Storage::addPart(RocketBody* r)
{
    if (r->getBodyType()=="F9")
        F9.push_back(r->getHealth());
    else
        FH.push_back(r->getHealth());
        delete r;
}

void Storage::addPart(Engine* e)
{
    if (e->getEngineType()=="M")
        M.push_back(e->getHealth());
    else
        MV.push_back(e->getHealth());
    delete e;
}

void Storage::addPart(Electronic* e)
{
    Elec.push_back(e->getHealth());
    delete e;
}

void Storage::addPart(Cargo* s)
{
    SL.push_back(s->weight);
    delete s;
}

list<Rocket*> Storage::getComponents(string s)
{
    list<Rocket*> n;
    if (s=="F9")
        while (F9.size()>0)
        {
            Rocket* r = Falcon9Copy->clone(F9.front());
            F9.pop_front();
            n.push_back(r);
        }
    else
    if (s=="FH")
        while (F9.size()>0)
        {
            Rocket* r = Falcon9Copy->clone(FH.front());
            FH.pop_front();
            n.push_back(r);
        }
    else
    if (s=="M")
        while (M.size()>0)
        {
            Rocket* r = MerlinCopy->clone(M.front());
            M.pop_front();
            n.push_back(r);
        }
    else
    if (s=="VM")
        while (F9.size()>0)
        {
            Rocket* r = MerlinVacuumCopy->clone(MV.front());
            MV.pop_front();
            n.push_back(r);
        }
    else
    if (s=="EL")
        while (Elec.size()>0)
        {
            Rocket* r = ElectronicCopy->clone(Elec.front());
            Elec.pop_front();
            n.push_back(r);
        }
    return n;
}

list<Cargo*> Storage::getSatellites()
{
    list<Cargo*> n;
    while (SL.size()>0)
        {
            Cargo* r = SatelliteCopy->clone(SL.front());
            SL.pop_front();
            n.push_back(r);
        }
    return n;
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