# COS214_Project
Useful Information

The ISS, Hubble space telescope and Starlink satellites are all in low earth orbit or LEO. There is also GTO or geo geostationary orbit that is much further away from earth than LEO is.

### Falcon 9:
- Has two stages
  - stage 1 = Falcon 9 core + 9*Merlin Engines
  - stage 2 = Vacuum Merlin Engine
  - payload to LEO = 22,800 kg
  - payload to GTO = 8,300 kg

### Falcon Heavy:
- Has two stages
  - stage 1 = 3*Falcon 9 core + 27*Merlin Engines
  - stage 2 = Vacuum Merlin Engine
  - payload to LEO = 63,800 kg
  - payload to GTO = 26,700 kg

## General Idea for the project 24/10/21

Only the first stage of both the Falcon 9 and Falcon Heavy are reusable. For the sake of the project the first stage of both rockets will consist of:
	
1. Aerodynamic Parts (wings, etc.)
2. The engines
3. A fuel tank
4. Electronic components (gps system, control system, etc.)

Each component on the first stage of the rocket will have an initial health percentage of 99%. Each time the rocket is launched, all of the components will receive a random damage amount between 10% and 99%. The health percentage of the rocket will be the average of all of the components currently attached to it. If the first stage of the rocket is landed safely and recovered, the components can only be repaired to at most x-10% health where x is the health percentage of the component when the rocket was launched. The cost of repairing a component will depend on the percentage of health added to the component. A new component can be added for the cost of 99% health.

The lower the health percentage, the higher the chance of the components failing. If a component fails during launch, the entire rocket, spacecraft and cargo are lost. If a component fails during landing, only the first stage of the rocket is lost. A component is twice as likely to fail during a landing than a launch. The static fire test and actual launch have the same likelihood for a component to fail, but the static fire test will not add any damage to the components on the rocket.

### Launch Scenario Setup

- There will be a store of components that can be used to build rockets.
- The user should be able to manually add and remove components to represent the real world components they have available. 
- The amounts used are only for the sake of demonstration. The store of components will need to be created by the user of the system.

#### For example:

- SpaceX component storage:
  - 30* Merlin Engines: 99% Health
  - 15* Merlin Engines: 50% Health
  - 10* Falcon 9 Cores: 99% Health
  - 4* Falcon Heavy Fuel Tanks: 99% Health
  - 6* Falcon 9 Electronic Components: 99% Health
  - 2* Falcon Heavy Aero Parts: 30% Health
  - 1* Dragon Spacecraft: 99% Health
	

- The user of the system will be able to create a “launch scenario”. 
- The user will enter the mass and the type of the cargo that needs to be launched. 
- The system will then create a list of all the viable combinations of components from storage that will suit the needs specified by the the user.

#### For example:

- Cargo: Supplies
- Mass: 5 000 kg

  - viable option 1:
    - 1* Dragon Spacecraft : 99%
    - 9* Merline Engines: 99% Health
    - 1* Falcon 9 core: 99% Health

  - viable option 2:
    - etc...

- The user will select one of the viable options from the generated list. 
- The components will be removed from storage and a new “launch scenario” rocket will be added to the “launch list”. 
- The “launch list” is a list of all of the currently assembled rockets with their cargo and components specified.

- When a user is ready to simulate or test a launch, they can create a “launch batch”. 
- The number of rockets in the batch will be between 1 and n rockets where n is the number of rockets in the launch list.

- Each rocket will have a setup time to assemble the rocket, prepare the launch pad and fuel the rocket. 
- The cost of launching the rocket will be determined by the components used, the amount of fuel needed and the setup time. 
- The repair work done to the components on the first stage will be added to the cost of launching the rocket.

- The user will be able to specify the cost associated with preparing the launch pad, the cost of fuel per litre and the cost of each component.

### Launch

- The user of the system will be able to specify if the launch batch will be a test or an actual launch. If it is a test, the launch batch can be paused at any time to remove rockets from the batch, rearrange the batch, or add a new rocket to the batch. ~~They will be able to swap the components on individual rockets?~~

- Each rocket launch will consist of:
  - Prepare the rocket and launch pad
  - Static Fire test
  - Launch
  - Flight and stage separation
  - Landing of the first stage
  - Landing of the spacecraft

- The final cost of the launch batch will be determined by the damage done to the components used and the preparation and setup time.
- The components have a random chance of failing depending on their health percentage and the stage of the launch they are currently at. 
- A component failing will affect the cost of the launch.

### Test Launch

- When you launch a test batch you don’t have to consider the components you have stored.
- Store with custom health %


#### Storage of components
- input from the user
- Creating a rocket from the components in storage
- display viable options to the user

#### Create a launch batch
- use the rockets in the launch list
- setup of the rocket
- getting variables( fuel cost, labour cost, cost each component)
- be able to make alterations to the batch
	
#### Launches
- launch of each rocket
- random chance of components failing

#### Test Launces, any componets
- Reuse of components, and total cost of launch, failure of components
- Central Interface


