# LIGHT FOLLOWING ROBOT
## Requirements:</br>
* _**Chassis with motors and wheels attached.**_</br>
* _**Boltduino.**_</br>
* _**Ardubricks motor driver board.**_</br>
* _**Two LDR sensors.**_</br>
* _**Six Female to Female wires.**_</br>
* _**DC power supply**_</br>
* _**Micro USB Cable**_</br>
</br></br>
## Assembly of components:</br>
1. Stick one light sensor on the left front of the chassis making sure that the sensor is facing the towards the front of the chassis, and the pins of the sensor are pointing to the Boltduino.</br>
2. Similarly stick the other light sensor to the front right of the robot.</br>
3. Connect the GND of the sensors to the GND of the I0 and I1 respectively.</br> 
4. Connect VCC  of the sensors to the 5V of the I0 and I1 respectively.</br>
5. Connect the LDR pins of the sensors to the I0 and I1 respectively.</br>
</br></br>
## Light following algorithm:</br>
1. The robot will continuously seek out areas with higher brightness levels, and try to stay there.</br>
2. The robot will compare the analog values reported by each sensor, and move toward the sensor with higher brightness.</br>
3. The steps involved in achieving this would be as follows:</br>
	_**a. Find out which of the 2 sensors is detecting higher brightness.**_</br>
	_**b. Move towards the sensor detecting higher brightness.**_</br>
	_**c. If both the sensors detect the same intensity, the robot will stop. However, this is rather a very rare scenario.**_</br>
## Algorithm:</br>
_**1. If the left sensor is detecting higher brightness, use the left forward motion.**_</br>
_**2. If the right sensor is detecting higher brightness, use the right forward motion.**_</br>
_**3. If both sensor have the same brightness level, stop.**_</br>