#include <Servo.h> 

const int analogInPin = A0; 
const int switchPin = 2;    // switch input
const int motor1Pin = 3;    // H-bridge leg 1 (pin 2, 1A)
const int motor2Pin = 4;    // H-bridge leg 2 (pin 7, 2A)
const int enablePin = 9;    // H-bridge enable pin
int sensorValue = 0; 


void setup() {
  Serial.begin(9600); 
  pinMode(motor1Pin, OUTPUT);
  pinMode(motor2Pin, OUTPUT);
  pinMode(enablePin, OUTPUT);

  //digitalWrite(enablePin, HIGH);
}
void loop() {
  sensorValue = analogRead(analogInPin);
  // if the switch is high, motor will turn on one direction:
  if (sensorValue>300 ) {
    clockwise();
  }
  else{
    counterclockwise();
    counter=0;
  }
  Serial.print("sensor = " );                       
  Serial.print(sensorValue);      
  Serial.print("\t counter = " );                       
  Serial.print(counter);      
  Serial.print("\t counter2 = ");      
  Serial.println(counter2); 

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





