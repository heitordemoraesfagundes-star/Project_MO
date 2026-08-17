# Hardware Selection Document (HSD)

## 1. Hardware Philosophy

### Design Goals

- Low cost
- High reliability
- Easy to program
- Easy to replace
- Modular design
- Expandable for future versions

## 2. System Overview

The robot can be divided into six main hardware systems:

- Power system
- Main controller
- Input
- Output
- Communication
- Mechanical structure

## 3. Main Controller — ESP32 DevKit V1

### Pros

- Cheap
- Wi-Fi and Bluetooth connection
- Dual-core processor
- Plenty of GPIO pins
- Large community
- Compatible with Arduino IDE
- Lower power consumption
- Easy to replace or upgrade

### Cons

- Unable to run AI models

## 4. Display System — 2.4-inch TFT LCD

### Pros

- Color
- Larger animations
- Better face expression and visual appeal

### Cons

- Slightly more expensive than other options (R$50–60)

## 5. Audio System — DFPlayer Mini + Speaker

### Pros

- Plays MP3 files
- Easy to program
- Excellent sound
- SD card storage
- Very common

### Cons

- Requires audio files to be recorded beforehand

## 6. Input System

### Buttons

- Start
- Menu
- Confirm
- Personality
- Games (future addition)

### Sensors

#### Ultrasonic Sensor — HC-SR04

- Detect user approaching
- Eye tracking (possible future addition)

#### Touch Sensor

- For future additions

#### Light Sensor

- Detect the difference between lights on and off
- Not essential

#### Microphone

- For future versions

## 7. Lighting

### WS2812B RGB LEDs

- Programmable
- Colorful
- Enhances personality
- Low cost

### Possible Uses

- Charging animation
- Mood
- Startup animation

## 8. Power

### USB-C (V1–V2)

- Simple
- Reliable
- Easy debugging

### Battery (V2–V3)

- Makes the robot more portable

## 9. Mechanical Components

- M3 screws
- Brass heat-set inserts
- Magnets / hidden screws (for easy maintenance)
- Small standoffs / spacers
- Cable ties or adhesive clips for cable management

## 10. Debug Mode

- Add a debug mode to check connections
