# HAND FOLLOWING ROBOT
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
## Hand following algorithm:</br>
1. The hand following robot algorithm is generally used in automated luggage where you the owner do not have to pull his luggage, he can just show his hand to the luggage and it follows.</br>
2. The requirement of the algorithm is exactly the opposite of the obstacle avoider robot. We want this robot to go and hit the obstacle.</br>
3. When the robot detects the hand, it should move in the forward direction. </br>
4. When the robot does not detect the hand, it should be stopped. </br>

## Algorithm:</br>
_**1. Check if an obstacle is present.**_</br>
_**2. If no obstacle is present, stop and then repeat from step 1.**_</br>
_**3. If an obstacle is present, move forwards and then repeat from step 1**_</br>