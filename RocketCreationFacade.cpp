#include "RocketCreationFacade.h"

RocketCreationFacade::RocketCreationFacade()
    {
        ViableRocketFactory = new CreateViableRocket();
        TestRocketFactory = new CreateTestRocket();
    }

RocketCreationFacade::~RocketCreationFacade()
    {
        delete ViableRocketFactory;
        delete TestRocketFactory;
    }

Rocket* RocketCreationFacade::makeTestRocket()
    {
        return TestRocketFactory->produceProduct();
    }

Rocket* RocketCreationFacade::makeViableRocket()
    {
        return ViableRocketFactory->produceProduct();
    }