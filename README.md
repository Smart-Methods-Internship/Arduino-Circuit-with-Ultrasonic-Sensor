# Arduino-Circuit-with-Ultrasonic-Sensor

The circuit was simulated in TinkerCad.
This circuit can be used along with robot wheels so that they robots can change directions automatically if they face an obstacle.
The circuit components are 2 Arduino Uno, 6 servo motors, 1 ultrasonic sensor, a breadboard, and a 9V battery.

1) The ultrasonic sensor was connected in the breadboard. The ground pin and the power pin of the sensor were connected with the ground pin and the positive pin of the breadboard respectively.
2) The echo pin of the ultrasonic sensor was connected to the D8 pin of the first Arduino. The trigger pin was connected to D9 pin of the first Arduino.
3) The power pins and the ground pins of the 6 servo motors were connected with the positive and ground pins of the breadboard.
4) The signal pins of the 6 servo motors were connected with D2 to D7 pins of the first Arduino.
5) D0 pin of the first Arduino was connected to D1 pin of the second Arduino.
6) D1 pin of the first Arduino was connected to D0 pin of the second Arduino.
7) 5V pins of the 2 Arduino were connected to the positive pins in the breadboard. The GND pins of the 2 Arduino were connected to the ground pins of the breadboard.
8) A 9V battery was connected to the breadboard.

The coding is done in a way that turns the servos to an angle of 90 degrees and when an object comes closer to the ultrasonic sensor. 
The program is set up such that it will turn 90 degrees in the beginning. 
This is due to the arduino reading a signal similar to that of an object in a close range.
