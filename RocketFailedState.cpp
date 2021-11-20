#include "RocketFailedState.h"

RocketFailedState::RocketFailedState(RocketContext* r) {
    con = r;
}

void RocketFailedState::changeState() {

    con->changeRocketState(new RocketFailedState(con));      //changeTyres sets the 'tyres' private property of RacingCar to the passed parameter
                                    
    cout << "Rocket is now in a failed state." << endl;
    
}

string RocketFailedState::getRocketState() {
    return "Failed State";
}
