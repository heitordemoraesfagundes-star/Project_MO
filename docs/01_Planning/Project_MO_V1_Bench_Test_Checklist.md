# Project MO V1 — Component Arrival and Bench-Test Checklist

## Purpose

This checklist defines the inspection and bench-testing procedure for Project MO V1. Its purpose is to identify damaged, incorrect, or improperly wired components before they are installed in the enclosure.

## Safety and test rules

- Disconnect the power adapter before changing any wiring.
- Verify polarity before connecting a module.
- Do not allow exposed power conductors to touch the enclosure hardware or each other.
- Prefer an inline USB power meter when measuring total current.
- Stop testing if a component becomes unusually hot, repeatedly resets, or produces an unusual smell.
- Use eye protection and responsible adult supervision when soldering or cutting board material.
- Record every measurement and unexpected result in the test notes.

## Required test equipment

- Digital multimeter
- USB cable and verified 5 V power adapter
- Inline USB voltage/current meter, if available
- Breadboard or temporary test leads
- Computer with the ESP32 development environment
- Known-good audio and display test files
- microSD card and USB card reader

## 1. Component arrival inspection

- [ ] Confirm that every delivered component matches the BOM description and model.
- [ ] Photograph the front and back of each component.
- [ ] Check for cracked boards, damaged connectors, loose parts, bent pins, and solder bridges.
- [ ] Confirm that supplied headers and terminals are present.
- [ ] Measure the component's actual width, length, height, and mounting features.
- [ ] Compare the measurements with the corresponding Fusion 360 reference model.
- [ ] Record any dimensional difference that could affect mounting or cable clearance.

## 2. Unpowered electrical inspection

- [ ] Identify and label every power, ground, and signal connection.
- [ ] Confirm continuity through each required wire and connector.
- [ ] Verify that the `+5V` and `GND` buses are not shorted.
- [ ] Inspect solder joints for accidental bridges.
- [ ] Test the main power switch with a multimeter:
  - [ ] OFF position: open circuit.
  - [ ] ON position: continuity with very low resistance.
- [ ] Recheck polarity before applying power.

## 3. Power-input test

- [ ] Connect only the verified adapter and USB-C input module.
- [ ] Measure the USB-C module output voltage.
- [ ] Confirm an expected reading of approximately 5 V.
- [ ] Disconnect power and add the main switch to the positive supply line.
- [ ] Confirm that output voltage is absent when the switch is OFF.
- [ ] Confirm that approximately 5 V is present when the switch is ON.
- [ ] Verify correct voltage and polarity at the power-distribution board.
- [ ] Record the no-load voltage and current.

## 4. Individual component tests

### ESP32

- [ ] Inspect the ESP32 and verify its pin labels.
- [ ] Connect it by USB and confirm that the computer detects it.
- [ ] Upload a basic test program.
- [ ] Confirm stable startup and serial communication.
- [ ] Record its idle current.

### Nextion display

- [ ] Verify the display supply voltage and connector polarity.
- [ ] Power the display independently.
- [ ] Confirm that it starts without flickering or repeated resets.
- [ ] Test UART communication with the ESP32.
- [ ] Display a simple Project MO test screen.
- [ ] Record the display current at typical brightness.

### Face buttons and D-pad

- [ ] Test D-pad Up.
- [ ] Test D-pad Down.
- [ ] Test D-pad Left.
- [ ] Test D-pad Right.
- [ ] Test A / Confirm.
- [ ] Test B / Cancel.
- [ ] Test Select.
- [ ] Confirm that each input changes state only when pressed.
- [ ] Check for unintended simultaneous inputs.

### INMP441 microphone

- [ ] Confirm the microphone pinout before wiring.
- [ ] Verify the supply voltage and ground connection.
- [ ] Confirm I2S clock, word-select, and data connections.
- [ ] Capture a short test recording or level measurement.
- [ ] Check for excessive noise when the display and amplifier are operating.

### MAX98357A amplifier and speaker

- [ ] Verify amplifier polarity and I2S connections.
- [ ] Confirm the speaker impedance is appropriate for the amplifier.
- [ ] Begin testing at low volume.
- [ ] Play a short test tone or audio sample.
- [ ] Check for distortion, resets, or excessive heating.
- [ ] Record current during typical playback.

### microSD card and USB reader

- [ ] Inspect the microSD card and reader.
- [ ] Confirm that a computer recognizes the card.
- [ ] Format the card using the filesystem selected for Project MO.
- [ ] Copy a test file to the card and read it back.
- [ ] Confirm that the required project files can be stored and retrieved.

### Power-distribution board

- [ ] Inspect all input and output connections.
- [ ] Confirm continuity along the `+5V` bus.
- [ ] Confirm continuity along the `GND` bus.
- [ ] Verify that the two buses are isolated from each other.
- [ ] Confirm that solder joints cannot contact the enclosure.
- [ ] Verify the board fits inside the reserved 20 × 20 × 15 mm CAD envelope.

## 5. Integration sequence

Add and test one subsystem at a time in this order:

1. [ ] Power input, switch, and distribution board
2. [ ] ESP32
3. [ ] Nextion display
4. [ ] Face buttons and D-pad
5. [ ] INMP441 microphone
6. [ ] MAX98357A amplifier and speaker
7. [ ] microSD functions

After adding each subsystem:

- [ ] Measure supply voltage.
- [ ] Record startup and steady-state current.
- [ ] Confirm that previously tested functions still operate.
- [ ] Check for resets, audio noise, display instability, or unusual heating.
- [ ] Record the result as Pass, Fail, or Retest Required.

## 6. Final pre-installation verification

- [ ] Confirm that all modules pass their individual tests.
- [ ] Confirm that the complete assembly remains within the 5 V / 3 A supply limit.
- [ ] Determine the final protection-device choice from measured current data.
- [ ] Confirm that the main power wires use the approved gauge and color convention.
- [ ] Confirm that signal wiring is separated from speaker and high-current power wiring where practical.
- [ ] Verify that all connectors remain accessible for maintenance.
- [ ] Perform a final continuity and polarity check before enclosure installation.
- [ ] Save test measurements, photographs, and observed issues in the project documentation.

## Test record

| Date | Component or subsystem | Test | Expected result | Measured result | Status | Notes |
|---|---|---|---|---|---|---|
|  |  |  |  |  |  |  |
|  |  |  |  |  |  |  |
|  |  |  |  |  |  |  |

## Current provisional design notes

- The main power switch is provisionally specified as a two-terminal, latching rocker switch rated for 12 V DC and 10 A. Mechanical dimensions are pending supplier confirmation.
- The power-distribution board has a reserved CAD envelope of 20 × 20 × 15 mm.
- The distribution-board location is the rear-right internal area beside the USB-C input.
- The modeled clearance between the distribution-board envelope and USB-C mounting is 2 mm.
- The final fuse or resettable-protection component remains pending measured startup and steady-state current.
