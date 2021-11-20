#ifndef POSTLAUNCHSTRATEGY_H
#define POSTLAUNCHSTRATEGY_H

#include <string>
//#include "Caretaker.h"
//#include "Storage.h"

using namespace std;

class PostLaunchStrategy{
	private:
		//Caretaker* c;

	public:
		PostLaunchStrategy();

		//PostLaunchStrategy(Caretaker* _c);

		virtual string launchCost()=0;

		//Caretaker* getCaretaker();
};

#endif