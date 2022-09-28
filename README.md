# rain-detector-system
In this project i have used rain sensor along with its control board, Rain Sensor plates has two copper tracks on it. These tracks are not connected. When water falls on the plate, resistance between tracks changes. This resistance is measured by the opamp.
control board has two pins at one side which are connected to rain sensor plate and has four pins at other side.
GND pin connects to GND pin of arduino uno
VCC pin connects to 5V of arduino uno
A0 pin connects to A0 pin of arduino uno ; this pin gives the analog output between 5V to 0V.
D0 pin connects to pin 2 of arduino uno ; digital output pin gives the digital output of internal comparator.
led connects to pin 4 of arduino uno 

when its raining digital output gives 1/HIGH then Led will glow if there is no rain digial output pin remains 0/LOW.
