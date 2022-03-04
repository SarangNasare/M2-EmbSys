/**
 * @file WaterLevelIndicator.ino
 * @author Sarang Nasare (sarang.nasare@gmail.com)
 * @brief code for Water level Indicator Circuit using arduino
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Servo.h>
/**
 * @brief defining 7th pin as trigpin
 * 
 */
#define trigpin 7
/**
 * @brief defining 6th pin as ecopin
 * 
 */
#define echopin 6

int led1 = A0;//defining arduino pin A0 as the led1 output
int led2 = A1;//defining arduino pin A1 as the led2 output
int led3 = A2;//defining arduino pin A2 as the led3 output
int led4 = A3;//defining arduino pin A3 as the led4 output
int led5 = A4;//defining arduino pin A4 as the led5 output

Servo myservo;// Defining servomotor to arduino
/**
 * @brief defining the circuit's initial position.
 * 
 */
void setup()
{
Serial.begin(9600);
pinMode(trigpin, OUTPUT);
pinMode(echopin, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
myservo.attach(9);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
delay(1000);
}
/**
 * @brief putting the circuit in infinite loop in oreder to work continuously
 * 
 */
void loop()
{
int duration, distance;
digitalWrite(trigpin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigpin, LOW);
duration = pulseIn(echopin,HIGH);
distance = ( duration / 2) / 29.1;
Serial.println("cm:");
Serial.println(distance);

if( (distance > 0) && (distance <= 10) )//if water level is less than 10%
{
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led5, HIGH);
myservo.write(90);
} else

if( (distance > 10) && (distance <= 20) )//if water level is less than 30%
{
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led5, HIGH);
myservo.write(90);
} else
if( (distance > 20) && (distance <= 30) )//if water level is less than 50%
{
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led5, HIGH);
myservo.write(90);
} else

if( (distance > 30) && (distance <= 40) )//if water level is less than 60%
{
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH);
digitalWrite(led5, HIGH);
myservo.write(90);
} else

if( (distance > 50) && (distance <= 60) )//if water level is less than 80%
{
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, HIGH);
myservo.write(90);
} else

if( distance > 60 )//if water level is 100%
{
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
myservo.write(180);
}
}
