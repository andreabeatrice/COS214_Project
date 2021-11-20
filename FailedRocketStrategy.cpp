#include <string>
#include <iostream>
#include "PostLaunchStrategy.h"
#include "FailedRocketStrategy.h"

using namespace std;

FailedRocketStrategy::FailedRocketStrategy(){

}

string FailedRocketStrategy::launchCost(){

	 int lc = 0;

    /*
        foreach (rocket in container){
            //get memento of rockets & get price
            lc = lc + this->getCaretaker()->getMemento->getCost();

            if (this->getCaretaker()->getMemento->getHealth() <= 0){
                //rocket can't be resued; discard
            }
            else {
                //return rocket to storage
            }
        }
    */

	//Cost of each components that cannot be reused + cost of fuel + cost of launchpad + cost of repairs to reusable pieces

	//Put reusable pieces back into storage?

	//Cost per launch	

    //FALCON9 COST PER LAUNCH: New: US$62 million (2020), (https://spacenews.com/spacex-targeting-24-hour-turnaround-in-2019-full-reusability-still-in-the-works/)
    //FALCON9 COST PER LAUNCH: Reused: US$50 million (2019)


    //FALCON HEAVY COST PER LAUNCH: Reusable: US$90 million[1]
    //FALCON HEAVY COST PER LAUNCH: Expendable: US$150 million[2]


    //cost of fueling a Falcon 9 is in the region of $200,000 (for LOX plus RP-1),
    //a Falcon Heavy would be 2.5 times that, or $0.5 million. 

    //LOX costs in the region of $0.20/kg, so (using the $200k figure above) RP-1 would then be $1,20/kg. 

    string returnStr =  "This launch run cost $" + to_string(lc);

	return returnStr;
}