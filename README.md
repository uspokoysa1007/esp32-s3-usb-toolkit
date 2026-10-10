# ⚡ ESP32-S3 BSOD Proof-of-Concept

> **Security Research & USB HID Protocol Input Validation Proof-of-Concept for ESP32-S3**

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Platform: ESP32-S3](https://img.shields.io/badge/Platform-ESP32--S3-red.svg)](https://www.espressif.com/)
[![Framework: PlatformIO](https://img.shields.io/badge/Framework-Arduino%20%2F%20PlatformIO-orange.svg)](https://platformio.org/)
[![Purpose: Research](https://img.shields.io/badge/Purpose-Educational%20%2F%20Research-critical.svg)](#-educational-purpose--disclaimer)

---

## 📌 Description / Описание

This project implements experimental custom firmware for the **ESP32-S3** microcontroller with native USB OTG. It investigates edge-case behaviors in host USB HID (Human Interface Device) descriptor parsing and packet handling to evaluate OS driver stability and error resilience against malformed descriptors.

> [!WARNING]
> ### ⚠️ Educational Purpose & Disclaimer
> This repository is published strictly for **educational, academic, and authorized security research purposes**. The goal is to analyze driver input validation routines in operating systems.
> - Only deploy on test hardware and virtualized lab environments you own or are explicitly authorized to test.
> - The author accepts no liability for system crashes, data loss, or damages resulting from the misuse of this code.

---

## 📁 Project Structure

```text
├── include/            # Header includes
├── lib/                # Custom library dependencies
├── src/
│   └── main.cpp        # Firmware source code (USB HID routines)
├── test/               # Unit / hardware test cases
├── .gitignore          # Build & environment ignore rules
├── LICENSE             # MIT License
├── platformio.ini      # PlatformIO environment specification
└── README.md           # Documentation
```

---

## 🛠️ Getting Started

### Prerequisites
* **Hardware:** ESP32-S3 development board with native USB port (e.g., ESP32-S3-DevKitC-1).
* **Toolchain:** [VS Code](https://code.visualstudio.com/) with the [PlatformIO IDE](https://platformio.org/) extension installed, or CLI `platformio`.

### Compilation & Flashing

1. **Clone the repository:**
   ```bash
   git clone https://github.com/uspokoysa/badusb-esp32-s3-bsod.git
   cd badusb-esp32-s3-bsod
   ```

2. **Build via PlatformIO CLI:**
   ```bash
   pio run
   ```

3. **Upload to target board:**
   ```bash
   pio run --target upload
   ```

---

## 📦 Releases

Pre-packaged release archives and source distributions are available on the [Releases](https://github.com/uspokoysa/badusb-esp32-s3-bsod/releases) page.

---

## 📄 License

Distributed under the [MIT License](LICENSE).
