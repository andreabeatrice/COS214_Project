#include "RocketSuccessState.h"

RocketSuccessState::RocketSuccessState(RocketContext* r) {
    con = r;
}

void RocketSuccessState::changeState() {

    con->changeRocketState(new RocketSuccessState(con));      //changeTyres sets the 'tyres' private property of RacingCar to the passed parameter
                                    
    cout << "Rocket is in a successful state." << endl;
    
}

string RocketSuccessState::getRocketState() {
    return "Successful State";
}
