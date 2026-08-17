# Mechanical Design Specification (MDS)

## 1. Mechanical Requirements

- Display must be removable.
- No permanent glue for major components.
- Speaker must be accessible.
- Cable routing channels must be provided.
- Easy maintenance.
- Rear panel must be removable.
- Components should be mounted with screws whenever possible.

## 2. Mechanical Architecture

### Module A — Display Module

#### Contains

- TFT Display
- Faceplate
- Mounting Frame

This module should be removable independently.

### Module B — User Interface Module

#### Contains

- Front Buttons
- Push Mechanisms
- PCB (future)

### Module C — Main Electronics Module

#### Contains

- ESP32
- DFPlayer
- Voltage Distribution
- Connectors

### Module D — Audio Module

#### Contains

- Speaker
- Acoustic Chamber

### Module E — Rear Service Panel

#### Contains

- USB
- Power
- SD Card Access

## 3. Modifications

### 3.1 Front Buttons

Instead of:

`button → switch`

Use:

`button → spring → guide → microswitch`

This provides:

- Smoother feel
- Consistent travel
- Easier replacement

### 3.2 Cable Routing

- Clear and easily replicable
