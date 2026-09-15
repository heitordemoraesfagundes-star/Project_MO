# Project MO

<p align="center">
  <img src="assets/logo/svg/Project MO_Primary.svg" width="300">
</p>

> An open-source desktop companion designed to explore how embedded
> electronics and engineering can be made approachable, expressive, and fun.

## About

Project MO is an interactive robotic prototype inspired by the character
BMO from *Adventure Time*.

The project combines mechanical design, embedded electronics, firmware,
and human-computer interaction into a single engineering project.

Rather than focusing only on the final prototype, Project MO documents
the engineering process behind it - from requirements and component
selection to system design, mechanical design, electronics, firmware,
assembly, manufacturing, and testing.

## Project Goals

- Build a functional and interactive desktop companion.
- Explore embedded systems and electronics through a practical project.
- Develop and document a complete hardware and software system.
- Keep the engineering process approachable and understandable.
- Create a modular foundation that can be expanded in future versions.

## V1

The first version of Project MO focuses on creating a functional,
stationary desktop companion.

V1 establishes the project's core hardware, software, mechanical design,
and interaction systems before larger expansions are considered.

### Planned V1 Features

- Interactive 5-inch display
- Physical button and D-pad input
- Audio output through a 40 mm speaker
- Expressive animations
- Basic personality and interaction
- Custom parametric enclosure
- Modular and documented hardware
- Expandable ESP32 firmware

> **Movement is outside the scope of V1.**

## Project Status

**Current stage: V1 - Manufacturing Preparation & Physical Validation**

The V1 mechanical design has reached a manufacturing release candidate.
The current work focuses on validating real component dimensions, printing
fit-test coupons, selecting a Brazilian 3D-printing supplier, and preparing
for physical assembly.

### Completed

- [x] Project vision, scope, and design principles
- [x] Product Requirements Document
- [x] Engineering Design Report
- [x] System Design Document
- [x] Hardware Specification Document
- [x] Mechanical Design Specification
- [x] Component database and Bill of Materials
- [x] Project identity, naming, and logo
- [x] Initial repository organization
- [x] Documentation converted to Markdown
- [x] Parametric V1 body and faceplate design
- [x] Button, D-pad, switch, and external-opening geometry
- [x] Leg and arm design with removable interfaces
- [x] Internal display shelves, guides, and retainer
- [x] ESP32, amplifier, speaker, microphone, USB-C, and perfboard mounting concepts
- [x] Switch and removable perfboard-retention system
- [x] Full-assembly interference checks in Fusion 360
- [x] V1 manufacturing release-candidate files exported
- [x] Exported models re-imported and checked in PrusaSlicer
- [x] Eight dimensional fit-test coupon designs completed
- [x] Physical fit-test plan completed
- [x] Portuguese supplier package completed
- [x] Initial Brazilian suppliers contacted for quotations
- [x] First physical electronic component received: ESP32

### In Progress

- [ ] Compare supplier quotations and select a print supplier
- [ ] Print and inspect the eight fit-test coupon designs
- [ ] Measure the physical ESP32 with a digital caliper
- [ ] Validate PCB, connector, pin, and mounting-hole clearances
- [ ] Apply any required CAD tolerance revisions
- [ ] Print the final V1 enclosure and mechanical parts
- [ ] Complete electrical implementation and wiring
- [ ] Develop and integrate the firmware
- [ ] Assemble the complete V1 prototype
- [ ] Perform system-level V1 testing

## Latest Engineering Milestone

The mechanical design is no longer in the initial concept stage. A complete
set of printable V1 parts has been prepared, and critical interfaces now have
dedicated fit-test coupons for:

- M2 and M3 fasteners
- 20 mm panel switch
- Arm and leg peg/socket interfaces
- Dedicated USB-C opening and guides
- Microphone cradle and acoustic opening
- ESP32 board mount and USB opening
- MAX98357A amplifier guide
- 40 mm speaker cradle

These coupons will be printed before the complete enclosure so that tolerance
changes can be isolated, documented, and retested at lower cost.

## V1 Hardware

The current architecture is based on:

- ESP32 microcontroller
- 5-inch Nextion HMI display
- MAX98357A I2S audio amplifier
- 40 mm speaker
- Seven functional tactile switches plus spare switches
- Custom button and D-pad mechanisms
- Perfboard-based electrical assembly
- USB-C access and internal cable routing
- Resettable fuse, silicone wiring, and rubber feet

The component database and Bill of Materials can be found in the
[`BOM/`](BOM/) directory.

## Mechanical Design and Manufacturing

The V1 enclosure was redesigned as a simplified parametric model in Fusion 360
after the original reference mesh proved unsuitable for reliable modification.
The current design separates the main body, faceplate, limbs, buttons, internal
retainers, and other printable elements into controlled manufacturing files.

Mechanical files are organized under the [`hardware/`](hardware/) directory.
The manufacturing workflow uses editable Fusion archives as source files and
3MF exports for slicing. G-code is intentionally generated only after the
printer, material, and supplier profile are confirmed.

## Testing Strategy

Testing is divided into two stages:

1. **Interface validation** - print the fit-test coupons, inspect print quality,
   test each real component, and record pass/fail results.
2. **System validation** - print and assemble the complete enclosure, integrate
   the electronics and firmware, and test the full V1 system.

A physical fit-test plan and supplier package have been prepared. Coupon tests
have not yet been completed, so the current manufacturing files remain subject
to dimension-based revisions.

## Documentation

Project documentation is organized according to the different areas of
the project.

### Planning

- [Product Requirements Document](docs/01_Planning/Product_Requirements_Document.md)
- [Engineering Design Report](docs/01_Planning/Engineering_Design_Report.md)

### Engineering Design

- [System Design Document](docs/02_Design/System_Design_Document.md)
- [Hardware Specification Document](docs/02_Design/Hardware_Specification_Document.md)
- [Mechanical Design Specification](docs/02_Design/Mechanical_Design_Specification.md)

### Project Identity

- [Project Brand Specification](docs/03_Project_Identity/Project_Brand_Specification.md)

### Engineering Record

- [Development Logs](docs/Development_Log/)
- [Design Decisions](docs/Design_Decisions/)

Additional assembly instructions, test results, electrical documentation, and
firmware documentation will be added as the project progresses.

## Firmware

The firmware will process user input, control Project MO's hardware, manage
display animations and audio, and implement the project's personality system.

Firmware development will be documented in the [`firmware/`](firmware/)
directory.

## Repository Structure

```text
Project_MO/
|
|-- BOM/                    # Component database and BOM
|
|-- docs/                   # Project documentation
|   |-- 01_Planning/
|   |-- 02_Design/
|   |-- 03_Project_Identity/
|   |-- Development_Log/
|   `-- Design_Decisions/
|
|-- hardware/               # CAD, manufacturing, schematics and wiring
|-- firmware/               # Project firmware
|-- assets/                 # Logos and other project assets
|-- media/                  # Photos, videos and screenshots
`-- tools/                  # Development and utility tools
```

## Current Next Steps

1. Receive and compare supplier quotations.
2. Print the dimensional fit-test coupons.
3. Measure and physically test the received components.
4. Update only the CAD interfaces that fail validation.
5. Release the corrected enclosure for final printing.
6. Continue with electrical assembly and firmware integration.

