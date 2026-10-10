# Project MO V1 — GPIO, Wiring, and Cable-Routing Map

**Document status:** Electrical assignment approved; physical cable routing provisional  
**Revision:** 1.0  
**Date:** 2026-09-09  
**Controller:** DOIT ESP32 ESP-WROOM-32 DevKit V1, 30-pin

## 1. Purpose and validation status

This document records the planned GPIO assignments, wire types, wire colors, and cable-routing strategy for Project MO V1. The electrical pin allocation has been checked against the selected 30-pin ESP32 DevKit V1. Exact cable lengths and final routing must be confirmed after the real components are installed.

The future camera opening is reserved mechanically for V2. No camera GPIO pins are reserved in V1.

## 2. Final GPIO assignments

| Subsystem | Signal or control | Component pin | ESP32 pin | Direction at ESP32 |
| --- | --- | --- | --- | --- |
| Nextion display | Display data to ESP32 | TX | GPIO16 / RX2 | Input |
| Nextion display | ESP32 data to display | RX | GPIO17 / TX2 | Output |
| Shared I²S | Bit clock | INMP441 SCK + MAX98357A BCLK | GPIO26 | Output |
| Shared I²S | Word select | INMP441 WS + MAX98357A LRC | GPIO25 | Output |
| Audio output | Amplifier data | MAX98357A DIN | GPIO22 | Output |
| Audio input | Microphone data | INMP441 SD | GPIO34 | Input |
| D-pad | Up | Switch | GPIO13 | Input with internal pull-up |
| D-pad | Down | Switch | GPIO14 | Input with internal pull-up |
| D-pad | Left | Switch | GPIO18 | Input with internal pull-up |
| D-pad | Right | Switch | GPIO19 | Input with internal pull-up |
| Face controls | A / Confirm | Large circular switch | GPIO21 | Input with internal pull-up |
| Face controls | B / Cancel/Back | Triangular switch | GPIO23 | Input with internal pull-up |
| Face controls | Select | Small circular switch | GPIO27 | Input with internal pull-up |
| Optional indicator | Status LED | LED through series resistor | GPIO32 | Output |
| Reserved | Spare V1 GPIO | — | GPIO33 | Unassigned |

### Pins intentionally avoided

- GPIO0, GPIO2, GPIO5, GPIO12, and GPIO15: boot-strapping concerns.
- GPIO1 and GPIO3: USB programming and serial debugging.
- GPIO6–GPIO11: connected to module flash memory.
- GPIO35, GPIO36, and GPIO39: input-only pins without internal pull resistors; not needed in the current design.
- EN: reset input, not a general-purpose signal.

## 3. Power wiring

| From | To | Wire specification | Color |
| --- | --- | --- | --- |
| YG003 5 V output | Main 5 V distribution point | 20 AWG stranded silicone wire | Red |
| YG003 ground | Main ground distribution point | 20 AWG stranded silicone wire | Black |
| 5 V distribution | ESP32 VIN/5V | 22 AWG stranded silicone wire | Red |
| 5 V distribution | Nextion 5V | 22 AWG stranded silicone wire | Red |
| 5 V distribution | MAX98357A VIN | 22 AWG stranded silicone wire | Red |
| Ground distribution | ESP32, Nextion, and MAX98357A grounds | 22 AWG stranded silicone wire | Black |
| ESP32 3V3 | INMP441 VDD | 26 AWG stranded silicone wire | Red |
| Common ground | INMP441 GND | 26 AWG stranded silicone wire | Black |

Use a protected star-style distribution point near the YG003 instead of stacking several wires directly on one small breakout-board pad. All modules must share a common ground.

**Critical:** Connect the INMP441 to 3.3 V, never to the 5 V rail.

## 4. INMP441 microphone wiring

| INMP441 pin | Destination | Wire color |
| --- | --- | --- |
| VDD | ESP32 3V3 | Red |
| GND | Common ground | Black |
| SCK | GPIO26 / shared I²S BCLK | Yellow |
| WS | GPIO25 / shared I²S word select | Blue |
| SD | GPIO34 / microphone data input | Green |
| L/R | Local connection to GND | Short black jumper |

Planned route:

- Run the microphone bundle from the holder below the display toward the nearest display edge.
- Continue toward the ESP32 on the side opposite the speaker and amplifier wiring where practical.
- Keep the five main conductors grouped and approximately 10–15 cm long.
- Leave a small service loop so the microphone can slide out of its C-shaped holder.
- Keep the acoustic opening, gasket center, and MEMS sound port unobstructed.

## 5. MAX98357A amplifier and speaker wiring

| MAX98357A connection | Destination | Wire specification | Color |
| --- | --- | --- | --- |
| BCLK | GPIO26 / shared I²S BCLK | 26 AWG | Yellow |
| LRC | GPIO25 / shared I²S word select | 26 AWG | Blue |
| DIN | GPIO22 | 26 AWG | White |
| VIN | 5 V distribution | 22 AWG | Red |
| GND | Common ground | 22 AWG | Black |
| Speaker + | Speaker positive | 22 AWG | Yellow |
| Speaker − | Speaker negative | 22 AWG | Blue |

Create insulated BCLK and WS branch points near the ESP32 so both the INMP441 and MAX98357A receive the same clock signals. Protect direct-soldered branches with heat-shrink.

Gently twist the speaker-positive and speaker-negative wires together. Keep this pair separated from the microphone bundle to reduce coupled noise.

The microphone and amplifier may share BCLK and WS when their I²S clock and frame configurations match. Initial V1 firmware should avoid listening for commands while the speaker is producing loud audio; simultaneous operation can be evaluated later.

## 6. Nextion display wiring

| Nextion pin | Destination | Wire specification | Color/label |
| --- | --- | --- | --- |
| TX | ESP32 GPIO16 / RX2 | 26 AWG | Green, labelled `N-TX` |
| RX | ESP32 GPIO17 / TX2 | 26 AWG | White, labelled `N-RX` |
| 5V | 5 V distribution | 22 AWG | Red |
| GND | Common ground | 22 AWG | Black |

Route the four display wires together along one display support and then toward the ESP32. Leave enough service slack to reposition the display without pulling its connector.

Green and white are reused because the Nextion cable is physically separate from the I²S bundles. Label both ends to prevent confusion.

## 7. Button ribbon cable

The button assembly uses one 26 AWG eight-conductor ribbon: seven signals and one shared ground.

| Conductor number | Function | ESP32 pin |
| --- | --- | --- |
| 1 | D-pad Up | GPIO13 |
| 2 | D-pad Down | GPIO14 |
| 3 | D-pad Left | GPIO18 |
| 4 | D-pad Right | GPIO19 |
| 5 | A / Confirm | GPIO21 |
| 6 | B / Cancel/Back | GPIO23 |
| 7 | Select | GPIO27 |
| 8 | Common button ground | GND |

Use the cable's real color sequence after it arrives, but preserve this conductor order. Mark conductor 1 at both ends. Configure every button GPIO as `INPUT_PULLUP`: released is HIGH and pressed is LOW.

Planned route:

- Run the ribbon from the button perfboard toward the enclosure floor.
- Cross the open central region toward the ESP32.
- Use a gentle fold rather than a sharp crease.
- Keep it separated from the amplifier and speaker output pair.

## 8. Optional status LED

If included, connect the LED anode to GPIO32 through an appropriate series resistor and connect its cathode to ground. GPIO32 remains unused if the indicator is omitted.

## 9. General routing rules

- Keep microphone and speaker wiring on different routes where practical.
- Keep wires and conductive parts away from the ESP32 antenna end.
- Run associated power and ground conductors together.
- Keep I²S signal wires short and grouped.
- Insulate every soldered joint and branch with heat-shrink.
- Provide approximately 20–30 mm of service slack without creating large coils.
- Anchor cable bundles to the enclosure body, not to components that must be removed.
- Do not overtighten cable ties around silicone insulation.
- Do not permanently glue or bind the final routes before subsystem testing.
- Ensure the corner retainers do not cover ESP32 pins or solder joints.

## 10. Pending physical validation

Complete these checks after the components arrive:

- [ ] Measure the ESP32's total installed height, including its downward header pins.
- [ ] Confirm clearance beneath the ESP32 headers and around solder joints/connectors.
- [ ] Verify that USB insertion and removal do not lift the ESP32 from its guides.
- [ ] Confirm actual cable lengths with the faceplate and display installed.
- [ ] Check that the microphone can be removed without stressing its wires.
- [ ] Confirm that no cable crosses the microphone acoustic path or blocks ventilation.
- [ ] Continuity-test every wire before powering the system.
- [ ] Test the 5 V rail before connecting the INMP441.
- [ ] Bench-test the Nextion UART, microphone input, amplifier output, and buttons separately.
- [ ] Test microphone noise and voice recognition while the speaker is operating.
- [ ] Secure the cable routes only after all subsystem tests pass.

## 11. BOM implication

The multicolored 26 AWG wire entry should specify at least six colors: red, black, yellow, blue, green, and white. The selected six-color Mercado Livre kit satisfies this requirement. Exact consumed lengths remain pending physical routing verification.

## 12. Technical references

- Espressif ESP32 GPIO documentation: <https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-reference/peripherals/gpio.html>
- Espressif ESP32 I²S documentation: <https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-reference/peripherals/i2s.html>

