# Burglar Detection Alarm with PIR Sensor and Arduino Uno

This project uses an Arduino Uno to build a burglar detection alarm system with a PIR sensor. The system triggers an alarm when motion is detected, signaling with an LED and a piezo buzzer.

## Description

This code controls a burglar detection alarm system that uses a PIR sensor to detect motion. When motion is detected, an LED lights up, and a piezo buzzer sounds an alert. The system helps in detecting unauthorized movement by triggering a visual and auditory alarm.

PIR (Passive Infrared), is a sensor that measures infrared radiation from an object. PIR works passively, therefore PIR only receives radiation and does not emit radiation. If this PIR sensor is connected to an Arduino, this sensor can be used as a thief detector.

## Key Features

- **Motion Detection**: Utilizes a PIR sensor to detect movement.
- **Alarm Activation**: Lights up an LED and sounds a piezo buzzer when motion is detected.
- **Serial Output**: Initializes serial communication for debugging purposes.

## Required Components

- Arduino Uno = 1 piece;
- BreadBoard = 1 piece;
- PIR Sensor = 1 piece;
- LED = 1 piece;
- Piezo Buzzer = 1 piece;
- Resistors 220 ohm = 1 piece;
- Jumper wires = 10 piece.

## How It Works

1. **Initialization**:

   - Sets up pin modes for the LED, PIR sensor, and piezo buzzer.
   - Begins serial communication with a baud rate of 9600.
   - Delays for 5 seconds to ensure stable start-up.

2. **Motion Detection**:
   - Continuously reads data from the PIR sensor.
   - If motion is detected (sensor output is HIGH):
     - Turns on the LED.
     - Activates the piezo buzzer with a short tone.
     - Turns off the LED and buzzer after a short delay.
   - If no motion is detected, both LED and buzzer remain off.

## How to Use

1. Connect the PIR sensor, LED, and piezo buzzer to the Arduino as per the pin definitions in the code.
2. Upload the code to the Arduino Uno.
3. The system will start monitoring for motion. The LED and buzzer will activate when motion is detected.

## Example Behavior

When motion is detected:

- The LED lights up.
- The piezo buzzer emits a short tone.
- After a brief period, both the LED and buzzer turn off.

## Notes

- Ensure that the PIR sensor is correctly positioned to detect movement in the desired area.
- Adjust the resistor values and buzzer tone as needed for your specific setup.

## Conclusion :

- In this project the PIR sensor is used as a thief detector. How it works, if someone enters a room that has a PIR sensor, the PIR sensor will provide an output which will be read by the Arduino then the Arduino will turn on the LED and Buzzer.
