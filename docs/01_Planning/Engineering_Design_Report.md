# Engineering Design Record (EDR)

## 1. Defining Mechanical Modules

The project enclosure and internal mechanical organization are divided into functional modules. Each module has a specific purpose, component set, and design goals.

### 1.1 Face Assembly Module

**Purpose:**  
Contains everything related to the robot's "face."

**Contains:**

- TFT display
- Display mount
- Faceplate
- Protective bezel

**Design Goals:**

- Easy replacement
- Perfect alignment
- No visible glue

### 1.2 Control Interface Module

**Purpose:**  
Allow user interaction.

**Contains:**

- Printed buttons
- Microswitches
- Springs (possibly)
- Internal support

**Design Goals:**

- Good tactile feedback
- Reliable actuation
- Easy maintenance

### 1.3 Main Electronic Bay Module

**Purpose:**  
Serve as the central electronics bay.

**Contains:**

- ESP32
- DFPlayer
- Wiring
- Connectors

**Design Goals:**

- Easy cable routing
- Accessible USB port
- Expandability

### 1.4 Audio System Module

**Purpose:**  
Provide audio communication/output.

**Contains:**

- Speaker
- Speaker mount
- Acoustic vents

**Design Goals:**

- Clear sound
- No rattling
- Replaceable components

### 1.5 Rear Service Panel Module

**Purpose:**  
Provide a removable panel for maintenance and future modifications.

**Accessible Components/Connections:**

- USB
- SD card
- Wiring
- Reset button

**Design Goal:**

- Provide easy accessibility for future modifications
