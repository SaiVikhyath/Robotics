# PLANT MONITORING ROBOT
## Requirements:</br>
* _**Chassis with motors and wheels attached.**_</br>
* _**Boltduino.**_</br>
* _**Ardubricks motor driver board.**_</br>
* _**Bolt IoT module.**_</br>
* _**LDR sensor.**_</br>
* _**Three Female to Female wires.**_</br>
* _**DC power supply**_</br>
* _**Micro USB Cable**_</br>
</br></br>
## Assembly of components:</br>
1. Stick the light sensor at the front of the chassis making sure that the sensor is facing the sealing and the pins of the sensor are pointing to the ground.</br>
2. Connect the GND of sensor to GND of Ardubricks, LDR pin of the sensor to I0 pin of the Ardubricks, VCC pin of sensor to 5V of Ardubricks respectively. All connections to I0 of the Ardubricks using Female to Female wires.</br>
</br></br>
## Plant monitoring algorithm:</br>
1. The robot's primary job is to move around the garden, collecting light intensity values.</br>
2. While collecting data using the A0 pin of the Bolt WiFi module was pretty easy, we can't just use the same system here. There are three reasons for this:</br>
	_**a. There is no way to tell the Bolt WiFi module when a certain location is reached.**_</br>
	_**b. The data collection is triggered by the Bolt Cloud. This can happen at any time, even when the sensor is not in the right position to collect the data.**_</br>
	_**c. The A0 pin will only allow you to log data to 1 storage variable in the Bolt Cloud.**_</br>
3. To solve this problem, we have to do the following four things: </br>
	_**a. The data should be collected by the Boltduino, as it will know whether the robot has reached the right location for data collection.**_</br>
	_**b. The Robot will move in a fixed path moving to different location. We have done this when we built our first robot.**_</br>
	_**c. The Boltduino will have to take data readings from different locations and store them in local variables. This will allow the Boltduino to send the data to the Bolt WiFi module, even if the Boltduino is not in the right location to collect the data.**_</br>
	_**d. If the Bolt Cloud asks for data when the robot, is moving from 1 location to another, the robot will have to be able to answer. Since the robot is not able to do anything when the delay function is called, we cannot use the delay function as we used earlier.**_</br>
4. The Boltduino has its own internal clock, a lot like the wall clock, which tells the Boltduino exactly how much time has passed since the last time it was reset. We will use this clock to keep track of how far the Botlduino has moved, and accordingly make it move to different locations. </br>
## Note: _**Before mounting Bolt IoT module on Boltduino, always dump the code to Boltduino and then mount the Bolt IoT module to the Boltduino. This is performed in order to ensure that Bolt IoT module doesn't interfere in the program dump process.**_</br>
## Algorithm:</br>
_**1. Initialize next_motion_time to zero and next_motion_number to -1.**_</br>
_**2. When next_motion_number is odd, collect data, turn right for 500ms and increment the next_motion_number.**_</br>
_**3. When next_motion_number is even, move the robot in forward direction for 1000ms.**_</br>
_**4. When data has been collected from all the four corners, set the variables to initial values and wait for five minutes.**_</br>