# WALL FOLLOWING ROBOT
</br></br>
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
1. Stick the sensor to chassis, at the front of the chassis making sure that the sensor is facing the right side of the chassis, and the pins of the sensor are pointing to the left of the chassis.</br>
2. Connect the GND of sensor to GND of Ardubricks, Output of the sensor to O0 pin of the Ardubricks, 5V of sensor to 5V of Ardubricks respectively. All connections to O0 of the Ardubricks using Female to Female wires.</br>
</br></br>
## Wall following algorithm:</br>
1. The robot moves in parallel to the wall maintaining a safe distance from the wall.
2. The wall following robot configuration is generally used in robots such as terrain mapping drone or sea floor mapping UAV's. In such a configuration, you need the sensors pointing to the surface that you want to map.</br>
3. The requirement of the algorithm is to ensure that the robot keeps moving forward, and also stays within a certain distance of the wall, without touching the wall.</br>
4. This can be achieved by using several different algorithms. One of the most common of which is the following.</br>
	_**a. Move forward and towards the wall when the wall is not detected.**_</br>
	_**b. Move forward and away from the wall when the wall is detected.**_</br>
4. In our case, since the sensor is mounted facing the right, the algorithm that we will use is as follows.
	_**a. Use the right-forward motion when the wall is not detected.**_</br>
	_**b. Use the left-forward motion when the wall is detected.**_</br>

## Algorithm:</br>
	_**1. Use the right-forward motion when the wall is not detected.**_</br>
	_**2. Use the left-forward motion when the wall is detected.**_</br>