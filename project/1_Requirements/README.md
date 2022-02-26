# Description

## Introduction

Knowing the level of water in an overhead tank is a tedious task which usually leads to climbing up the stairs to 
the tank and checking the level manually or allowing the water overflowing from the top. But electronic water 
level indicators can fix this issue. Most of the available systems use dipped electrodes or float switches, which 
may not perform well in the long run. This project provides a different approach to knowing the water level using 
an Ultrasonic module with Arduino and with LEDs. This method is contactless, so issues like corrosion of the 
electrodes won’t affect this system. The initial electric water controllers in the early 1990’s helped professionals 
to track water levels in chemical industries, and also in agricultural and irrigation projects. They were initially 
used in tracking liquid levels in irrigation lakes, water tanks, boilers etc. However, the initial designs proved to 
be imperfect and a long-term solution were attempted with solid state electronics. These new solid-state 
electronics along with integrated electronics offer greater performance with low cost as well efficient along with 
easy installation. Also monitoring with the help of LEDs can make the operators have an advantage to visually 
scan the issue in order to perform suitable operation.
Water level sensors indicators are devices which can manage the levels of water on a variety of applications such 
as water tubs, pumps, pools etc. their main function is to monitor the flow of water and optimize the system 
performance.

the facility requirements in many industries, farms, hostels, hotels, offices include an overhead 
tank for water, which is usually fed through an electric pump that is switched off when the tank is filled 
up and switched on when it is empty. so, the most common way of knowing when the tank is filled is by 
observing when it overflows the brim. depending on the type of liquid being handled, overfilling of such 
a tank could lead to a great liquid material losses ranging in the order of thousands of naira per week 
depending on the extent of such application. these losses can be prevented if the tank is monitored 
automatically by incorporating a feedback. 
 water level indicator using ultrasonic sensor &arduino is an amazing and very useful project. the 
objective of this project is to notify the user the amount of water that is present in the overhead water 
tank. this project can be further enhanced to control the water level in the tank by turning it on, when the 
water level is low, and turning it off when the water level is high. thus, the arduino water level indicator 
helps in preventing wastage of water in overhead tank. 
 a transmitter circuit and a receiver circuit. the transmitter circuit makes use of an 
ultrasonic sensor to measure the water level in terms of distance. this data is sent to the receiver circuit 
using rf communication.

## Features

 1) Save Power: In an era of energy conservation, these devices are very beneficial to save energy. Hence 
electrical power wastage can be reduced. These sensor control water levels and minimize the usage of 
electricity
2) Automatically works: These sensors can work automatically when connected to timer devices.
3) These are low cost and easy to install devices
4) The design is compact and with low maintenance and cam clearly indicate the water levels in the overhead 
tank
5) AS they can be fully automatic, they save time and avoid seepage of roofs and walls due to overflowing tanks.
6) These sensors take less energy and can be used for continuous operation

## Components

Hardware required: 
 * Arduino UNO
 * Water level sensor
 * Connecting wires
 * Personal computer 
 * LED lights
 * Servo-motor
 * potentiometer
 * resistors
 
## Block diagram

![Blank diagram (1)](https://user-images.githubusercontent.com/98872208/155832144-91d243e5-b589-4469-88f5-b14950d40e6a.png)


## Requirements

## High Level Requirements
|ID	 | Description                                            |	
|:--:|:------------------------------------------------------:|
|HLR1|	Circuit should have to work 24 hour's | 
|HLR2|	It should detect the water level accurately               | 
|HLR3|	Led should glow properly.            |
|HLR4|	Sensor should sense the water level.             |
|HLR5|	Servo-motor should ON/OFF properly.
   
                          
## Low Level Requirements
_______________________________________________________________________________________
| ID |    Description                                                                                                                      |
|:--:|:-----------------------------------------------------------------------------------------------------------------------------------:|
|LLR1|  Motor valve should be open when water is less.                                                                                           .|
|LLR2|  Aurdino will sense the signal properly.                                                       |                                                                       
|LLR3|  Sensor send the signal to aurdino.                                                                            |                                                  
|LLR4|  Motor valve should be close when water is full.                                                                                            
|LLR5|  Led should glow green when valve is open
|     |   led should glow red when valve is close

## SWOT
  * Strength
    * It can detect the water level accurately
   
  * Weakneses
    * It cannot be used everywhere

  * Oppourtunities
    * Rapidly growing adoption of smart applications.

  * Threats
   * The circuit can be protected protected from water and moisture. 
     


## 4W's and 1H's

  * Who:
    * Everyone can use this circuit
   
  * What:
    * It measure the water level
   
  * When:
   * It can be used when we want to

  * Where:
   * Industry,home,offices etc
 
  * How:
    * it can detecting by using ultrasonic sensor 
 
 
## Applications

 *  Hotels and restaurants, residential as well commercial complexes, factories, drainage etc can use these 
water level indicators. They can be fixed for any motor as they can be easily amalgamated into any circuit.

 * These sensors can be used as fuel level indicators in vehicles and as liquid level indicators in chemical 
industries.