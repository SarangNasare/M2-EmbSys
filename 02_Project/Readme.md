# Embedded System(Water Level Indicator)
# Description
 Water level indicator using ultrasonic sensor &arduino is an amazing and very useful project. the
 objective of this project is to notify the user the amount of water that is present in the overhead water
 tank. this project can be further enhanced to control the water level in the tank by turning it on, when the
 water level is low, and turning it off when the water level is high. thus, the arduino water level indicator
 helps in preventing wastage of water in overhead tank.

## Badges
### Code Quality Codacy
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/36eeaf40f26a4eb2acadb2247b3d1e8d)](https://www.codacy.com/gh/SarangNasare/M2-EmbSys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=SarangNasare/M2-EmbSys&amp;utm_campaign=Badge_Grade)

## Folder Description
| Folder Name | Description |
|:-------|:-----------|
| 01_Requirments | Detailed document about high/low level requirments SWOT analysis and 5W&1H |
| 02_Architecture | Structural and flow diagrams of project |
| 03_Implementation | Detailed coding including test,makefile and Simulation |
| 04_TestPlanAndOutput | Simulation Output |
| 05_Report | Details about project |
| 06_ImagesAndVideos | Images of working of project |
| 07_Other | References |

# Requirments
## High Level Requirments
 | --ID | Desciption |
|:------------:|:-----------:|
 | HLR1 | Detecting the water level |
 | HLR2 | Turn off Motor when Water Tank is Full. |
 | HLR3 | Turn On Motor when Water Tank is empty. |

## Low Level Requirments
   | --ID | Desciption |
  |:------------:|:-----------:|
  | LLR1 | It shall detect water level with the Use of ultrasonic sensor. |
  | LLR2 | It shall Turn off Motor when Water Tank is Full. |
  | LLR3 | It shall Turn on Motor when Water Tank is empty. |
  | LLR4 | It shall display the status of motor if it is on or off. |

# SWOT
 ## Strength
  * Very easy to use.
  * Quick installment.
  * Very Reliable.

## Weakness
 * Lack of graphical user interface.
 * If the Ardunio gets reset the system will not work.
 * System is very sensitive we have to handle it with care.

## Opportunity
 * Since now a days water usage is increassing so much it is very important to save the water so this kind of systems are required.

## Threats
 * Better system can be developed or designed using various other technologies.

# 5W and 1H
 ## Who
  * Any persone who is in need automaic system.

 ## What
  * Automatic machine which can which chan turn on or off the motor whenever required.

 ## When
  * Available anytime.

 ## Where 
  * Can be available at various places according to need.

 ## How
  * Design and develope using arduino and programmed using C language to avoid complexity and to keep the system simple and cost effective.

# Block Diagram
![image](https://user-images.githubusercontent.com/98864424/156507846-e314e304-f9b8-42f6-978e-c925ed19bc1d.png)

## Components
### Ultrasonic sensor
 The ultrasonic sensor is a non contact type device which uses the sound waves. There are 2 ports on the front, one port generates 
 the ultrasonic waves like a micro speaker and other port receivers. The ultrasonic waves like a small micro phone. The liquid 
 level is calculated, on the basis of the total time required for the sound to reflect back.

### Arduino
 Arduino is a one type of micro controller circuit ATmega328P. The programme is carried out in the arduino by using the arduino 
 software in the programming languages like C and C++ .

### Water pump(motor)
 Pump is a mechanical device which converts the mechanical energy into the pressure energy. It creates the partial vacuum in the suction side and sucks the liquid which is delivered with high pressure at a required height.

### Power Supply
 It is the main component of the whole system. It suppy power to all the components in the system.

### LED
 Shows the status of motor wether it is on or off.

### Resistors
 to protect LED and complete the circuit.

 
# Flow Diagram
 ![image](https://user-images.githubusercontent.com/98864424/156696478-3d8efbf2-6a88-48b3-81db-5a681a851dc9.png)


# Applications
 * Gauge and Manage water levels in a water tank.
 * Automating the conrol of motor.
 * Save water or any other precious liquid material.

## Testing(Manual Testing)
### High Level Testing
| Test ID | Description of Test case | Input values | Expected Output | Actual Output | Status | Type of test |
|:-----:|:--------------------------:|:--------------:|:-----------------:|:---------------:|:---------:|:-------:|
| H1  | When tank is full| Value from ultasonic sensor | Motor Off | Motor Off |SUCCESS| Manual Test|
| H2  | When tank is empty | Value from ultasonic sensor | Motor ON | Motor ON | SUCCESS | Manual Test|
| H5  | When tank water level is less than 100% | Value from ultasonic sensor | Shown water level with the help of LED's | Shown water level with the help of LED's | SUCCESS | Manual Test|

### Low Level Testing
| Test ID | Description of Test case | Input values | Expected Output | Actual Output | Status | Type of test |
|:-----:|:--------------------------:|:--------------:|:-----------------:|:---------------:|:---------:|:-------:|
| L1  | When tank water level is at 10% | Value from ultasonic sensor | Motor ON | Motor ON |SUCCESS| Manual Test|
| L2  | When tank water level is at 30% | Value from ultasonic sensor | Motor ON | Motor ON | SUCCESS | Manual Test|
| L3  | When tank water level is at 50% | Value from ultasonic sensor | Motor ON | Motor ON | SUCCESS | Manual Test|
| L4  | When tank water level is at 80% | Value from ultasonic sensor | Motor ON | Motor ON |SUCCESS| Manual Test|
| L5  | When tank water level is at 100% | Value from ultasonic sensor | Motor OFF | Motor OFF | SUCCESS | Manual Test|

# Images of simulation
## When tank is full
![off](https://user-images.githubusercontent.com/98864424/156765378-827482b5-b69e-4355-88c5-47cdf2abc677.png)

## When tank is at less than 10% capacity
![10%](https://user-images.githubusercontent.com/98864424/156765479-43e88da5-8e51-4499-8c43-f5c5516cbe93.png)

## When tank is at less than 30% capacity
![30%](https://user-images.githubusercontent.com/98864424/156765701-dc608aba-a97b-4f4a-a738-b196f7695a2b.png)

## When tank is at less than 50% capacity
![50%](https://user-images.githubusercontent.com/98864424/156765887-ab6519a4-33a2-47ec-bea8-1a452431ce13.png)

## When tank is at less than 80% capacity
![80](https://user-images.githubusercontent.com/98864424/156766013-1b069b18-bae9-4c70-9655-b80bf434dae6.png)

## When tank is at less than 100% capacity
![100%](https://user-images.githubusercontent.com/98864424/156766110-e1ed459d-fdcc-4e56-b253-97ad7809a4fc.png)
