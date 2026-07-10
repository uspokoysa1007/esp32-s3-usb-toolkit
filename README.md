# ESP32-S3 BSOD Proof-of-Concept

A research project demonstrating system stability issues via custom USB HID interaction on ESP32-S3.

## Description
This project implements a custom firmware for the ESP32-S3 microcontroller. It exploits specific behaviors in the USB HID (Human Interface Device) protocol handling to trigger a Blue Screen of Death (BSOD) on Windows systems.

## Educational Purpose
This repository is created for educational and security research purposes only. The goal is to analyze how operating systems handle malformed USB descriptors and to understand the importance of robust driver input validation.

## Disclaimer
Use this code only on hardware that you own. The author is not responsible for any damage, data loss, or system instability resulting from the use of this software. By using this code, you agree to take full responsibility for your actions.

## Getting Started

### Prerequisites
* ESP32-S3 development board.
* [PlatformIO](https://platformio.org/) installed in VS Code.

### Compilation & Flashing
1. Clone this repository.
2. Open the folder in VS Code with the PlatformIO extension.
3. Build the project using the PlatformIO "Build" task.
4. Connect your ESP32-S3 and flash the firmware using the "Upload" task.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
