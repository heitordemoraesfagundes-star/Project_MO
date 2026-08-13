# Project MO

> An open-source desktop companion designed to explore how embedded
> electronics and engineering can be made approachable, expressive, and fun.

<p align="center">
  <img src="assets/logo/svg/Project MO_Primary.svg" width="300">
</p>

## About

Project MO is a small desktop companion built as a personal engineering
project. It combines embedded electronics, hardware design, software,
mechanical design, and human-computer interaction into a single system.

The project was inspired by the idea of creating a small electronic
companion with a simple and expressive personality, while keeping the
engineering behind it understandable and approachable.

Rather than focusing only on the final device, Project MO documents the
entire engineering process — from requirements and component selection
to mechanical design, electronics, firmware, assembly, and testing.

## Project Goals

- Build a functional and interactive desktop companion.
- Explore embedded systems and electronics through a practical project.
- Develop and document a complete hardware and software system.
- Keep the engineering process approachable and understandable.
- Create a well-documented open-source project that can be expanded over time.

## V1

The first version of Project MO focuses on creating a functional,
stationary desktop companion.

V1 prioritizes:

- Interactive display
- Audio input and output
- Physical user interaction
- Expressive animations
- A simple and approachable personality
- A custom-designed enclosure
- Modular and documented hardware
- Expandable firmware architecture

Movement is intentionally outside the scope of V1. The goal is to first
establish a solid hardware, software, and interaction foundation before
considering larger expansions.

## Project Status

**Current stage: V1 — Design & Development**

### Completed

- [x] Project vision and scope
- [x] Design principles
- [x] Product Requirements Document
- [x] Engineering Design Report
- [x] System Design Documentation
- [x] Hardware Specification Document
- [x] Mechanical Design Specification
- [x] Component database / BOM
- [x] Project identity and naming
- [x] Project MO logo

### In Progress

- [ ] Repository organization
- [ ] Mechanical design modifications
- [ ] Final enclosure design
- [ ] Electrical implementation
- [ ] Firmware development
- [ ] Prototype assembly
- [ ] V1 testing

## Documentation

Project documentation is organized according to the development process.

### Planning

- [Product Requirements Document](docs/01_Planning/Product_Requirements_Document.docx)
- [Engineering Design Report](docs/01_Planning/Engineering_Design_Report.docx)

### Design

- [System Design Document](docs/02_Design/System_Design_Document.md)
- [Hardware Specification Document](docs/02_Design/Hardware_Specification_Document.docx)
- [Mechanical Design Specification](docs/02_Design/Mechanical_Design_Specification.docx)
- [Project Brand Specification](docs/02_Design/Project_Brand_Specification.docx)

Additional documentation, development logs, design decisions, assembly
instructions, and testing documentation will be added as development
progresses.

## Hardware

Project MO uses a microcontroller-based architecture with dedicated
components for display, audio, user input, power, and other system
functions.

The complete component list and current BOM can be found in the
[`BOM/`](BOM/) directory.

Detailed hardware files, including schematics, wiring documentation,
PCB designs, and enclosure files, will be added to the
[`hardware/`](hardware/) directory as development progresses.

## Firmware

The firmware will control Project MO's hardware and provide the software
layer responsible for interaction, display behavior, audio, animations,
and personality.

Firmware development will be documented in the
[`firmware/`](firmware/) directory.

## Repository Structure

```text
Project_MO/
│
├── BOM/            # Component database and BOM files
├── docs/           # Project documentation
├── hardware/       # CAD, schematics, PCB and wiring
├── firmware/       # Project firmware
├── assets/         # Logos and other project assets
├── media/          # Project photos, videos and screenshots
└── tools/          # Development and utility tools
