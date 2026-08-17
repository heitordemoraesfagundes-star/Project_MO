# Project MO

<p align="center">
  <img src="assets/logo/svg/Project MO_Primary.svg" width="300">
</p>

> An open-source desktop companion designed to explore how embedded
> electronics and engineering can be made approachable, expressive, and fun.

## About

Project MO is an interactive robotic prototype inspired by the character
BMO from *Adventure Time*.

The project combines mechanical design, embedded electronics, software
programming, and human-computer interaction into a single engineering
project.

Rather than focusing only on the final prototype, Project MO documents
the engineering process behind it — from requirements and component
selection to system design, mechanical design, electronics, firmware,
assembly, and testing.

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

- Interactive display
- Physical user interaction
- Audio output
- Expressive animations
- Basic personality and interaction
- Custom-designed enclosure
- Modular and documented hardware
- Expandable firmware

> **Movement is outside the scope of V1.**

## Project Status

**Current stage: V1 — Design & Development**

### Completed

- [x] Project vision and scope
- [x] Design principles
- [x] Product Requirements Document
- [x] Engineering Design Report
- [x] System Design Document
- [x] Hardware Specification Document
- [x] Mechanical Design Specification
- [x] Component database / BOM
- [x] Project identity and naming
- [x] Project MO logo
- [x] Initial repository setup
- [x] Documentation converted to Markdown

### In Progress

- [ ] Final repository organization
- [ ] Mechanical design modifications
- [ ] Final enclosure design
- [ ] Electrical implementation
- [ ] Firmware development
- [ ] Prototype assembly
- [ ] V1 testing

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

Additional documentation, including development logs, design decisions,
assembly documentation, and testing records, will be added as the
project progresses.

## Hardware

Project MO is built around a microcontroller-based architecture with
dedicated systems for visual output, audio, user input, lighting, and
power.

The current component database and Bill of Materials can be found in
the [`BOM/`](BOM/) directory.

Detailed hardware files, including schematics, wiring documentation,
PCB designs, and mechanical files, will be added to the
[`hardware/`](hardware/) directory as development progresses.

## Firmware

The firmware will provide the software layer responsible for processing
user input, controlling Project MO's hardware, managing animations and
audio, and implementing the project's personality system.

Firmware development will be documented in the [`firmware/`](firmware/)
directory.

## Repository Structure

```text
Project_MO/
│
├── BOM/                    # Component database and BOM
│
├── docs/                   # Project documentation
│   ├── 01_Planning/
│   ├── 02_Design/
│   ├── 03_Project_Identity/
│   ├── Development_Log/
│   └── Design_Decisions/
│
├── hardware/               # CAD, schematics, PCB and wiring
├── firmware/               # Project firmware
├── assets/                 # Logos and other project assets
├── media/                  # Photos, videos and screenshots
└── tools/                  # Development and utility tools
