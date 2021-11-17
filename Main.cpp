#include "Launch.h"

#include "RocketLauncher.h"
#include "RocketLauncher.cpp"

#include "CommandRoom.h"
#include "CommandRoom.cpp"
#include "RealLaunch.h"
#include "RealLaunch.cpp"
#include "TestLaunch.h"
#include "TestLaunch.cpp"

#include <iostream>
#include <string>
 using namespace std;

int main(){
	//After user enters all the details about the components and creates the batch list
	
	//Ask user to choose type of launch
	string type ="";
	cout<<"Choose launch type r/s"<<endl;
	cin>>type;
	
	//Create Receiver - might have to be in the rocket class - intialse when creating rocket?
	RocketLauncher* r = new RocketLauncher();

	if(type == "r")
	{
		//initialise command
		Launch* rl = new RealLaunch(r);
		
		//The command for each rocket
		CommandRoom* cr = new CommandRoom(rl);
		
		//Place the below code in a for loop/iterate through the rocket list and execute
		cr->blastOff();
	}
	else
	{
		//initialise command
		Launch* tl = new TestLaunch(r);
		
		//The command for each rocket
		CommandRoom* cr = new CommandRoom(tl);
		
		//Place the below code in a for loop/iterate through the rocket list and execute
		cr->blastOff();
	}
	
	//After running the launch calculate the costs using memento, state and post launch classes
	
	return 0;
}