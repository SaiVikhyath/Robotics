# LIGHT INTENSITY MONITORING SYSTEM
## Hardware Requirements:</br>
* _**Bolt IoT module**_</br>
* _**LDR sensor.**_</br>
* _**10k Ohm resistor.**_</br>
* _**Micro USB Cable**_</br>
</br></br>
## Principle: _**The resistance of an LDR varies inversely with light, i.e., the resistance decreases as the intensity of light falling on the LDR increases.**_</br>
## Hardware Connections:</br>
1. Insert one lead of the LDR into the Bolt Module's 3v3 Pin.</br>
2. Insert other lead of the LDR into the A0 pin.</br>
3. Insert one leg of the 10k Ohm resistor into the GND pin.</br>
4. Insert the other leg of the resistor also into the A0 pin. </br>
## Note: _**Make sure that at no point do the 3.3V (or even 5V) and GND pins or wires coming out of them touch each other. If you short power to Ground without a resistor even accidentally, the current drawn might be high enough to destroy the Bolt module.**_</br>
## Product Configuration:</br>
1. Devices connected to Bolt must be set to Input devices.</br>
2. Data collection must be set to GPIO.</br>
3. Set data collection rate as per requirement. </br>
4. Configure the analog A0 pin.</br>