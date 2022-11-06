<h1>Arduino Basics</h1>
<p>This repository contains the basics of Arduino Programming and working of ultrasonic sensor, LED, RGB LED and cooling fan of a CPU</p>
<h2>
Arduino and Arduino IDE
</h2>
<p>Arduino is an open-source electronics platform based on easy-to-use hardware and software. It's intended for anyone making interactive projects. Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online. You can tell your board what to do by sending a set of instructions to the microcontroller on the board. To do so you use the Arduino programming language (based on Wiring), and the Arduino Software (IDE), based on Processing. </p>
<img src="https://docs.arduino.cc/static/d0c28c5bd0894792476c6052dea5fa63/29114/board-anatomy.png">
<p>fig: Arduino UNO Board</p>

<h3>
    Blinker
</h3>
<p>
    Blinker is a simple program that blinks an LED on and off. It is a good starting point for beginners to learn how to use the Arduino IDE and the Arduino programming language. The program is written in C++ and is compiled by the Arduino IDE. The Arduino IDE is a free software that can be downloaded from the Arduino website. The Arduino IDE is available for Windows, Mac OS X, and Linux. </p>
<img src = "https://upload.wikimedia.org/wikipedia/commons/thumb/e/e8/LEDs.jpg/1200px-LEDs.jpg" height = 300px width = 400px>
<p>fig:  LED lights</p>
<img src = "https://content.instructables.com/ORIG/FBM/0TXC/JSAOS6I6/FBM0TXCJSAOS6I6.jpg?auto=webp" height = 300px width = 300px>
<p>fig:  LED lights configuration</p>

<h3>
    Ultrasonic Sensor
</h3>
<p>
    Ultrasonic sensors are used to measure the distance of an object from the sensor. The sensor emits ultrasonic waves and measures the time taken for the waves to bounce back. The time taken for the waves to bounce back is proportional to the distance of the object from the sensor. The sensor is connected to the Arduino board and the Arduino board is connected to the computer. The Arduino IDE is used to write the program and the program is uploaded to the Arduino board. </p>
    <p>
    In the part ultrasonic, i used a ultrasonic sensor, a LED and a buzzer. The ultrasonic sensor is connected to the Arduino board and the LED and buzzer are connected to the Arduino board. When the distance measured by an ultrasonic sensor is less than 5 cm the LED light turns on and the buzzer buzzes with the sound of 2000 kHZ</p>

<img src = "https://lastminuteengineers.b-cdn.net/wp-content/uploads/arduino/HC-SR04-Ultrasonic-Distance-Sensor-Pinout.png" height = 300px width = 300px>
<p>fig:  Ultrasonic sensor </p>
<img src = "https://lastminuteengineers.b-cdn.net/wp-content/uploads/arduino/Arduino-Wiring-Fritzing-Normal-Mode-Connections-with-HC-SR04-Ultrasonic-Sensor.png" height = 300px width = 400px>
<p>fig:  Ultrasonic sensor configuration</p>

<h3>Fan Speed</h3>
<p>
    In this part I used a cooling fan of a CPU and an ultrasonic sensor. The fan is connected to the Arduino board and the ultrasonic sensor is connected to the Arduino board. When the distance measured by an ultrasonic sensor is less than 5 cm the fan speed increases to maximum and when the distance measured by an ultrasonic sensor is greater than 5 cm and less than or equal to 10cm then the fan speed is medium with the blinking of a LED </p>
</p>
<img src = "https://static-01.daraz.com.np/p/b5ccdb209ee5320cc33098aed81e16c3.jpg" height = 300px width = 300px>
<p>fig:  Cooling fan of a CPU</p>

<h3>RGB led</h3>
<p>In this part i learnt about RGB LED and control its colors. RGB LED is advance version of a LED that can be glowed in any colour according to the need with the help of RGB color codes. </p>

<img src = "https://robiz.net/image/cache/data/lcdtft/led/rgbled/rgbledanot_01-500x500.jpg" height = 300px width = 300px>
<p>fig:  RGB LED</p>
<img src = "https://makeabilitylab.github.io/physcomp/arduino/assets/images/ArduinoUno_RgbLEDCommonAnode_WiringDiagram.png" height = 300px width = 500px>
<p>fig:  RGB LED configuration</p>
