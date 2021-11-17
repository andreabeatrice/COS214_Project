#include "RocketLauncher.h"

RocketLauncher::RocketLauncher()
{}

void RocketLauncher::RealCountdown()
{
	//This function would actually launch the rocket 
	//Below are some statements that could be shown at various stages.
	//These couts will be called depending on if the observer sees any changes/failure of components?
	
	cout<<"Preparing rocket and launch pad."<<endl;
	
	cout<<"Static fire test innitiated."<<endl;
	cout<<"Static fire test failed."<<endl;
	cout<<"Static fire test successful. Moving to launch stage."<<endl;
	
	cout<<"Rocket has been launched."<<endl;
	cout<<"Malfunction in rocket component xxx during stage1. Stage 1 components detaching to ocean pad."<<endl;
	cout<<"Rocket has reached stage 1. Detaching stage 1 parts. STage 1 parts succesfully landed on ocean pad"<<endl;
	
	cout<<"Malfunction in rocket component xxx during stage2. Rocket has been destroyed."<<endl;
	cout<<"Rocket has reached stage 2. Detaching final parts."<<endl;
	
	cout<<"Rocket reached/travelling to its destination succesfully."<<endl;
	cout<<"Rocket failed to reach its destination."<<endl;
}

void RocketLauncher::TestCountdown()
{
	string answer = "";
	//This function would test launch the rocket 
	//Below are some statements that could be shown at various stages. Since it is a simulation test we can have
	//prompts in between?
	//These couts will be called depending on if the observer sees any changes/failure of components?
	
	cout<<"Preparing rocket and launch pad."<<endl;
	
	cout<<"Static fire test innitiated."<<endl;
	cout<<"Static fire test failed."<<endl;
		cout<<"Remove rocket?"<<endl;
		cin>>answer;//"y/n 
		//if yes remove rocket from list and leave current execution and go to next rocket."
		//if no leave current execution and go to next rocket."
	cout<<"Static fire test successful. Moving to launch stage."<<endl;
		cout<<"Proceed?"<<endl;
		cin>>answer;//"y/n"
		//if no leave current execution and go to next rocket?"
	
	cout<<"Rocket has been launched."<<endl;
	cout<<"Malfunction in rocket component xxx during stage1. Stage 1 components detaching to ocean pad. Main rocket lost."<<endl;
		cout<<"Remove rocket?"<<endl;
		cin>>answer;//"y/n 
		//if yes remove rocket from list and leave current execution and go to next rocket."
		//if no leave current execution and go to next rocket."
	cout<<"Rocket has reached stage 1. Detaching stage 1 parts. Stage 1 parts succesfully landed on ocean pad."<<endl;
	
	cout<<"Malfunction in rocket component xxx during stage2. Rocket has been destroyed."<<endl;
		cout<<"Remove rocket?"<<endl;
		cin>>answer;//"y/n 
		//if yes remove rocket from list and leave current execution and go to next rocket."
		//if no leave current execution and go to next rocket."
	cout<<"Rocket has reached stage 2. Detaching final parts."<<endl;
	
	cout<<"Rocket reached/travelling to its destination succesfully."<<endl;
	cout<<"Rocket failed to reach its destination."<<endl;
		cout<<"Remove rocket?"<<endl;
		cin>>answer;//"y/n 
		//if yes remove rocket from list and leave current execution and go to next rocket."
		//if no leave current execution and go to next rocket."
}