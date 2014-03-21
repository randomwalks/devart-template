#include <Servo.h> 

const int analogInPin = A0; 
const int switchPin = 2;    // switch input
const int motor1Pin = 3;    // H-bridge leg 1 (pin 2, 1A)
const int motor2Pin = 4;    // H-bridge leg 2 (pin 7, 2A)
const int enablePin = 9;    // H-bridge enable pin
int sensorValue = 0; 

long counter=0;
long counter2=0;

int led_0 = 11;
int led_1 = 12;

Servo myservo; 


void setup() {
  Serial.begin(9600); 
  // set the switch as an input:
  pinMode(led_0, OUTPUT);
  pinMode(led_1, OUTPUT);    



  myservo.attach(9); 
  // set all the other pins you're using as outputs:
  pinMode(motor1Pin, OUTPUT);
  pinMode(motor2Pin, OUTPUT);
  pinMode(enablePin, OUTPUT);

  // set enablePin high so that motor can turn on:
  //digitalWrite(enablePin, HIGH);
}
void loop() {
  sensorValue = analogRead(analogInPin);
  // if the switch is high, motor will turn on one direction:
  if (sensorValue>300 ) {
    clockwise();
    digitalWrite(led_0, HIGH);
    digitalWrite(led_1, HIGH);
    counter++;
    counter2=0;

    myservo.write(0);              // tell servo to go to position in variable 'pos' 
    //delay(5);                       // waits 15ms for the servo to reach the position 

    if (counter > 300){
      motorStop();
    }
  }
  else{
    counterclockwise();
    digitalWrite(led_0, LOW);
    digitalWrite(led_1, LOW);
    counter=0;
    counter2++;

    myservo.write(100);              // tell servo to go to position in variable 'pos' 
    //delay(5);                       // waits 15ms for the servo to reach the position 

    if (counter2 > 300){
      motorStop();
    }

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





