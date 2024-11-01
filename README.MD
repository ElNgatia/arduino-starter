# Arduino Starter Projects

Welcome to my Arduino Starter Projects repository! This collection includes beginner-friendly projects to explore various components and sensors with Arduino, perfect for building foundational electronics and programming skills. Each project is structured to be self-contained and easy to follow, demonstrating different functionalities and use cases for components like LCD screens, temperature and humidity sensors, and buzzers.

## Projects Overview

### 1. Temperature and Humidity Sensor
   - **Description**: This project reads the surrounding temperature and humidity using a DHT11 sensor (or compatible sensor) and displays the values on the Serial Monitor.
   - **Components**:
     - DHT11 Sensor
     - Arduino Board
   - **Features**:
     - Reads real-time temperature and humidity levels.
     - Displays sensor data on the Serial Monitor for easy monitoring.
   - **Usage**:
     - Connect the sensor’s output to an analog pin on the Arduino.
     - Run the code to see the readings displayed in the Serial Monitor.

### 2. Jumpman LCD Game
   - **Description**: This is a simple running game displayed on an LCD screen where a character (the "jumpman") must avoid obstacles by jumping.
   - **Components**:
     - 16x2 I2C LCD Display
     - Arduino Board
     - Button for jump controls
     - Buzzer (optional) for sound effects
   - **Features**:
     - LCD displays a scrolling terrain and jumpman character.
     - Button allows the player to control jumps and avoid obstacles.
     - Optional beep sound for jump actions or collisions.
   - **Usage**:
     - Connect the LCD via I2C and a button to an input pin.
     - Use the button to jump and dodge obstacles as they appear.

### 3. Buzzer Music Player
   - **Description**: This project uses a passive buzzer to play simple tunes by generating sound frequencies. The music player can be programmed with various melodies.
   - **Components**:
     - Passive Buzzer
     - Arduino Board
   - **Features**:
     - Plays short melodies using tone functions.
     - Demonstrates frequency manipulation for music creation.
   - **Usage**:
     - Connect the buzzer to a digital output pin.
     - Run the code to hear the buzzer play a melody, with options to adjust frequencies for different notes.

## Getting Started

1. **Setup**:
   - Make sure you have the [Arduino IDE](https://www.arduino.cc/en/software) installed.
   - Clone or download this repository to your local machine.
   - Open each project file in the Arduino IDE and connect your Arduino board via USB.

2. **Upload & Run**:
   - Select your Arduino board model and COM port in the Arduino IDE.
   - Upload the code to the board and monitor results using the Serial Monitor or connected components (LCD, buzzer).

3. **Customization**:
   - Each project has opportunities for customization, such as:
     - Changing display formats or adding new characters to the Jumpman Game.
     - Modifying the tune in the Music Player.
     - Adjusting sensor read intervals for the Temperature and Humidity Sensor.

## Future Additions
This repository is designed to grow as new projects are added. Each project will be briefly introduced with a high-level overview, focusing on the unique components and functionality introduced.

---

Feel free to clone this repository, experiment with the projects, and explore Arduino programming!
