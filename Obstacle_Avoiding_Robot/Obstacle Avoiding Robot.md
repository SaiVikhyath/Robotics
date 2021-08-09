# OBSTACLE AVOIDING ROBOT
## Requirements:</br>
* _**Chassis with motors and wheels attached.**_</br>
* _**Boltduino.**_</br>
* _**Ardubricks motor driver board.**_</br>
* _**Proximity sensor.**_</br>
* _**Three Female to Female wires.**_</br>
* _**DC power supply**_</br>
* _**Micro USB Cable**_</br>
</br></br>
## Assembly of components:</br>
1. Stick the proximity sensor to the chassis, at the front of the chassis making sure that the sensor is facing the front of the chassis.</br>
2. Connect the GND of sensor to GND of Ardubricks, Output of the sensor to O0 pin of the Ardubricks, 5V of sensor to 5V of Ardubricks respectively. All connections to O0 of the Ardubricks using Female to Female wires.</br>
</br></br>
## Obstacle avoiding algorithm:</br>
1. The obstacle avoider robot configuration is generally used in robots such as computer operated cars, or in vacuum cleaners.</br>
2. The requirement of the algorithm is to ensure that the robot does not hit the obstacle. So when the robot does not detect and obstacle it is necessary for the robot to be moving.</br>
3. When the robot detects an obstacle, it can do 1 of 2 things.</br>
	_**1. Stop it's motion completely.**_</br>
	_**2. Move in a manner that it does not hit the obstacle.**_</br>
4. What our robot should do is the 2nd type of motion.
5. For this, a possible algorithm is the make the robot take a turn left or right when it detects the obstacle. But not all obstacles are of the same size. More over if the robot has come to a corner, then turning will not be an option.
6. The better algorithm is where the robot moves in reverse for some time, and then takes a turn. This way, it can avoid hitting the walls of a corner.

## Algorithm:</br>
_**1. Check if an obstacle is present.**_</br>
_**2. If no obstacle is present, move forward, and then repeat from step 1.**_</br>
_**3. If an obstacle is present, first move in reverse for some time, then take a left turn and then repeat from step 1**_</br>