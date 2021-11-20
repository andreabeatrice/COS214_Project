#include <string>
#include <iostream>
#include "PostLaunchStrategy.h"
#include "SuccessfulRocketStrategy.h"

using namespace std;

SuccessfulRocketStrategy::SuccessfulRocketStrategy(){

}

string SuccessfulRocketStrategy::launchCost(){

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



	return "This test run cost ";
}