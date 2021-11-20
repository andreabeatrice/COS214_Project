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
    cout<<"AO = Aero"<<endl;
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
    if (s=="AO")
        AO.push_back(100);
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
    string s = e->getEngineType();
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
        while (FH.size()>0)
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
        while (MV.size()>0)
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
    else
    if (s=="AO")
        while (AO.size()>0)
        {
            Rocket* r = AeroCopy->clone(AO.front());
            AO.pop_front();
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

void Storage::RemoveF9(int i)
{
    list<int>::iterator it = F9.begin();
    while (*it!=i)
    {
        advance(it,1);
    }
    F9.erase(it);    
}

void Storage::RemoveFH(int i)
{
    list<int>::iterator it = FH.begin();
    while (*it!=i)
    {
        advance(it,1);
    }
    FH.erase(it);    
}

void Storage::RemoveM(int i)
{
    list<int>::iterator it = M.begin();
    while (*it!=i)
    {
        advance(it,1);
    }
    M.erase(it);    
}

void Storage::RemoveVM(int i)
{
    list<int>::iterator it = MV.begin();
    while (*it!=i)
    {
        advance(it,1);
    }
    MV.erase(it);    
}

void Storage::RemoveEL(int i)
{
    list<int>::iterator it = Elec.begin();
    while (*it!=i)
    {
        advance(it,1);
    }
    Elec.erase(it);    
}

void Storage::RemoveSAT(int i)
{
    list<int>::iterator findIter = find(SL.begin(), SL.end(), i);
        if (findIter!=SL.end())
        {
            SL.erase(findIter);
        }
}

void Storage::RemoveAO(int i)
{
    list<int>::iterator it = AO.begin();
    while (*it!=i)
    {
        advance(it,1);
    }
    AO.erase(it);    
}

void Storage::printHelper(string s)
{
    if (s=="SAT")
    {
        if (SL.size()==0)
            return;
        cout<<"Code: "<<s<<endl;
        for (int r : SL)
        {
            cout<<"weight: "<<r<<endl;
        }
        return;
    }
    if (s=="F9")
    {
        if (F9.size()==0)
            return;
        cout<<"Code: "<<s<<endl;
        for (int r : F9)
        {
            cout<<" HP: "<<r<<endl;
        }
        return;
    }
    if (s=="FH")
    {
        if (FH.size()==0)
            return;
        cout<<"Code: "<<s<<endl;
        for (int r : FH)
        {
            cout<<"HP: "<<r<<endl;
        }
        return;
    }
    if (s=="AO")
    {
        if (AO.size()==0)
            return;
        cout<<"Code: "<<s<<endl;
        for (int r : AO)
        {
            cout<<"HP: "<<r<<endl;
        }
        return;
    }
    if (s=="EL")
    {
        if (Elec.size()==0)
            return;
        cout<<"Code: "<<s<<endl;
        for (int r : Elec)
        {
            cout<<"HP: "<<r<<endl;
        }
        return;
    }
    if (s=="M")
    {
        if (M.size()==0)
            return;
        cout<<"Code: "<<s<<endl;
        for (int r : M)
        {
            cout<<"HP: "<<r<<endl;
        }
        return;
    }
    if (s=="VM")
    {
        if (MV.size()==0)
            return;
        cout<<"Code: "<<s<<endl;
        for (int r : MV)
        {
            cout<<"HP: "<<r<<endl;
        }
        return;
    }
}