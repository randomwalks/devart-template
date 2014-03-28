### post_05: hardware prototyping and miscellaneous issues

(updated 2014-03-27)

#### joystick with 2 DC motor control

![2DC motor test](https://raw.github.com/randomwalks/devart-template/master/project_images/hardwarePrototyping_000.jpg "2DC motor control test")

1. arduino : computing control - sending / receiving data for a free draw
2 . joystick : interface for DC motor -user control of a lucky draw picker
3. DC motor + H-bridge : controlling a picker position

[![2DC motor test](http://img.youtube.com/vi/UFISVXR65ws/0.jpg)](https://www.youtube.com/watch?v=UFISVXR65ws)

```
#code sample : motor control
sensorValue = analogRead(analogInPin);
  // if the switch is high, motor will turn on one direction:
  if (sensorValue>0 && sensorValue<=200) {
	motorStop();
  }
  // if the switch is low, motor will turn in the other direction:
  else if(sensorValue > 200 && sensorValue <=500){
	clockwise();
  }
  else if (sensorValue > 500){
	counterclockwise();
  }
  Serial.println(sensorValue);  
}

void clockwise()
{
  digitalWrite(motor1Pin, LOW);   // set leg 1 of the H-bridge low
  digitalWrite(motor2Pin, HIGH);  // set leg 2 of the H-bridge high
}
void counterclockwise()
{
  digitalWrite(motor1Pin, HIGH);   // set leg 1 of the H-bridge low
  digitalWrite(motor2Pin, LOW);  // set leg 2 of the H-bridge high
}
void motorStop()
{
  digitalWrite(motor1Pin, LOW);   // set leg 1 of the H-bridge low
  digitalWrite(motor2Pin, LOW);  // set leg 2 of the H-bridge high
}
```

#### color detecting system test
![color sensor test](https://raw.github.com/randomwalks/devart-template/master/project_images/hardware_colorSensingTEST.jpg "color sensor test")

1. ADJD S311 color sensor : detecting items
2. arduino : sending data

```
#code sample : color detection test
#include <ADJDS311.h>
#include <Wire.h>
int sensorLed_pin = 2; //LED on the ADJDS-311
ADJDS311 colorSensor(sensorLed_pin);
void loop(){
  RGBC color = colorSensor.read(); //read the color
 
  Serial.print(color.red);
  Serial.print(" | ");
  Serial.print(color.green);
  Serial.print(" | ");
  Serial.print(color.blue);
  Serial.print(" | ");
  Serial.println(color.clear);
 
  lightLED(color); //send color to the LED
 
  delay(200); //just here to slow down the serial output
}

```
#### RFID sensing structure test
We have tested mockup RFID (stickers and readers) process through a lucky draw machine’s internal pathway. We found multi reader setting with multi stickers on the gifts will deliver positive results of detecting item kinds.

1st step : RFID sticker marks on gifts

![RFID STICKER MARKS](https://raw.github.com/randomwalks/devart-template/master/project_images/rfid_ball_01.jpg "RFID sticker marks")

2nd step: RFID reader spots on a lucky draw machine internal structure (ball slider)

![RFID reader spots](https://raw.github.com/randomwalks/devart-template/master/project_images/rfid_ball_02.jpg "RFID reader spots")

3rd step: test of high possibility spots of ball slider

![test of possibility](https://raw.github.com/randomwalks/devart-template/master/project_images/rfid_ball_03.jpg "test of possibility")

After testing 3 different balls with 3 different colors, we found that each ball leaves at least one positive mark on rectangular areas on the slope (ball slider). Therefore, if one gift has 3~4 RFID stickers on its surface, readers on the slope can detect it successfully.
