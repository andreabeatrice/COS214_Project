# COS214_Project
* Compile the program in the terminal using "make"

* Run the program in the terminal using "make run"

* After that, the program will give you further instructions.

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


