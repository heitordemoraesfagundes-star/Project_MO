# System Design Document (SDD)

## 1. System Overview

### Purpose

The purpose of this system is to develop an interactive robotic prototype inspired by the BMO character from *Adventure Time*.

The system integrates mechanical design, embedded electronics, and software programming to create a device capable of interacting with users through visual, audio, and physical interfaces.

## 2. System Architecture

The robot is divided into five major subsystems:

```text
                 USER
                   |
                   v
          Interaction Interface
        -------------------------
        |          |            |
        v          v            v
     Buttons    Sensors     Microphone
        |          |            |
        -----------|------------
                   |
                   v
             ESP32 Controller
        -------------------------
        |          |            |
        v          v            v
     Display      Audio      Lighting
```

## 3. Hardware Architecture

### 3.1 Main Controller

**Component:** ESP32 Microcontroller

#### Functions and Responsibilities

The main controller will:

- Process user inputs.
- Control outputs.
- Manage communication between components.
- Execute the robot's personality logic.

#### Reasons for Selection

The ESP32 was selected because it provides:

- Sufficient processing power.
- Low cost.
- Integrated Wi-Fi and Bluetooth.
- Compatibility with many sensors and modules.

### 3.2 Visual Interface System

#### Possible Components

- OLED display
- LCD display
- LED indicators

#### Functions and Responsibilities

- Facial expressions
- Animations
- Status indications

### 3.3 Audio System

#### Possible Components

- Speaker
- Audio module

#### Functions and Responsibilities

- Programmed responses
- Sound effects
- Notifications

### 3.4 Input System

#### Possible Components

- Physical buttons
- Distance sensor
- Microphone

#### Functions and Responsibilities

- Menu selections
- Trigger responses
- User-presence detection
- Voice interaction

### 3.5 Power System

The initial design considers battery-powered and USB-powered operation.

#### USB Power

USB power is preferred for the initial prototype because it provides:

- Easier debugging
- A simpler implementation
- A more straightforward power solution

## 4. Software Architecture

### 4.1 Input Processing

The software receives and processes:

- Button presses
- Sensor data

### 4.2 Personality Engine

The personality engine maps situations to responses.

**Examples:**

- Single button press → happy expression
- Repeated button presses → angry or annoyed expression

### 4.3 Output Control

The software controls:

- Display
- Audio
- LEDs

## 5. Personality Design

### 5.1 Happy

**Visual:**

- Smiling face

**Audio:**

- Cheerful response

### 5.2 Curious

**Visual:**

- Thinking expression

**Audio:**

- Question or comment
- Fun trivia or information

### 5.3 Angry

**Visual:**

- Angry expression

**Audio:**

- Irritated or annoyed voice

### 5.4 Sleep Mode

**Visual:**

- Closed eyes

**Audio:**

- No audio or a snoring sound

## 6. Possible Future Improvements

Potential future additions include:

- Voice recognition
- AI integration
- Autonomous behavior
- Wireless communication
- Custom PCB
