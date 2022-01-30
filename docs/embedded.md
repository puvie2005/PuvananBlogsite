---
layout: default
---

# Embedded Programming
Embedded programming is basically programming embedded systems. Embedded systems refers to a computer system. A combination of a computer processor, computer memory, and input/output peripheral devices—that has a dedicated function within a larger mechanical or electronic system.

## Introduction to Arduino
For this module, we will be using Arduino Uno/Nano for our embedded programming sessions. Using a microcontroller and coding it to achieve our desired output is the gist of this page. I will be talking about the basics of the microcontroller and the code in this page.

## Arduino
![](images/arduino.jpg)
* Arduino is a microcontroller. A microcontroller is basically a small computer that takes in a programming code to achieve input/output.
* I will talk about the common Arduino microcontroller which is the Arduino Uno.
* There are more than 1 coding languages used to program this Uno. For example, C++ and Python.

### Hardware
* The Arduino UNO operates at 5V. This is called as the operating voltage. This is important as the UNO can only poweer devices within this voltage threshold.
* It can be powered by batteries(eg. 9V ) or via the USB. The usb can be connect via a computer that is used to program the UNO or a seperate USB power source.
* There is a reset button on the UNO. This is used to restart the program from it's first line of sketch.
* There are pins 5v and 3.3V. This is the supply voltage Pins
* The GRND pins are known as ground. In electronics, ground is known as the referance( starting) point for voltage. Supply and GRND pins are important to power up the components on a breadboard.

### Analog Input
There are certain pins on the Arduino UNO that helps to recieve analog signals from electronic components. These components can be sensors such as Temperature and Humidity sensor. These analog signals from these components are transmitted to the Arduino Uno via pins laballed as A0 to A5( 6 Pins ). The Arduino Uno then converts these analog signals to digital signals to achieve a certain ouput. Analog pins are important as they help the microcontroller communicate with alot more components.

### Digital I/O
Digital pins serve a similiar purpose as the Analog input pins. However, the UNO does not need to convert these digital signals to anything. These I/O pins are used to transmit or recieve digital signals from/to various components. Components such as LEDs and micro-servos. This is achieved by the pins, 2 to 13,  on the Arduino UNO.

### Input/Output devices
![](images/arduino2.png)
