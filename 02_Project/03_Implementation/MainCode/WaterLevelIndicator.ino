#include <NewPing.h>
#include <Servo.h>
#define trigPin 12
#define ecoPin 13
#define maxdistance 50
NewPing sonar (trigPin,ecoPin,maxdistance);
int LEDijau=3,LEDmerah=2;
Servo myservo;

void setup(){
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(ecoPin, INPUT);
  pinMode(LEDmerah, OUTPUT);
  pinMode(LEDijau, OUTPUT);
  myservo.attach(9);
}
void loop(){
int duration,jarak,posisi=0,i;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration=pulseIn(ecoPin, HIGH);
jarak=(duration/2);
 Serial.print(jarak);
 Serial.println(" cm");

if(jarak<=5)
  {
    digitalWrite(LEDmerah, LOW);
    digitalWrite(LEDijau, HIGH);
    myservo.write(180);
  }
else{
  digitalWrite(LEDijau, LOW);
  digitalWrite(LEDmerah, HIGH);
  myservo.write(90);
  }
delay(450);  
}
