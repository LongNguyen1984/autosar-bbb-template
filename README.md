# AUTOSAR BBB Template

This is a lightweight AUTOSAR-style C project for BeagleBone Black.  
Includes App, RTE, BSW layers, and a simple scheduler loop.

## Structure
- `App/` – Application logic
- `RTE/` – Runtime Environment
- `BSW/` – Basic Software (Drivers/Scheduler)
- `Config/` – Config headers
- `build/` – Output directory

## Build
```bash
make
./build/autosar_bbb.out

