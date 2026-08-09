# System Architecture

## Block Diagram
<img width="682" height="595" alt="image" src="https://github.com/user-attachments/assets/854e4884-e3b2-4dce-85b6-0bfcb9310e40" />

```text
                +----------------------+
                |   LM35 Temperature   |
                |       Sensor         |
                +----------+-----------+
                           |
                           | Analog Signal
                           v
                +----------------------+
                |      Arduino UNO     |
                |   Main Control Unit  |
                +----------+-----------+
                           |
              +------------+------------+
              |                         |
              v                         v
    +-------------------+      +-------------------+
    |   Status LEDs     |      |  LM393 Comparator |
    | Green / Yellow /  |      +---------+---------+
    | Red               |                |
    +-------------------+                v
                              +-------------------+
                              |   Relay Module    |
                              +---------+---------+
                                        |
                                        v
                              +-------------------+
                              | Buzzer / Alarm    |
                              +-------------------+
```

## Architecture Overview

The **Freezer Temperature Alarm System** combines temperature sensing, microcontroller-based monitoring, hardware threshold detection, and alarm indication.

The **LM35 temperature sensor** measures the freezer temperature and provides an analog signal to the Arduino Uno. The Arduino acts as the main control unit and processes the temperature information.

The system also uses an **LM393 comparator** for hardware-based threshold detection. When the temperature crosses the preset safe limit, the comparator output changes state and activates the relay.

The **relay module** controls the alarm path, allowing the buzzer to provide an audible warning. The Arduino also controls the status LEDs to provide visual indication of the temperature condition.

## Main Architecture Blocks

### 1. Temperature Sensing

The **LM35** continuously senses the freezer temperature and provides an analog output signal to the control circuit.

### 2. Processing and Monitoring

The **Arduino Uno** acts as the main control unit. It receives the temperature information from the LM35 and determines the appropriate LED indication. It also monitors the comparator signal.

### 3. Threshold Detection

The **LM393 comparator** compares the temperature-related signal with the preset threshold. This provides hardware-based detection of an unsafe temperature condition.

### 4. Alarm Control

When the threshold condition is detected, the comparator output activates the relay. The relay then controls the buzzer to provide an audible warning.

### 5. Visual Indication

The status LEDs indicate the temperature condition. The working model describes:

* **Green** – Normal temperature
* **Yellow** – Warning condition
* **Red** – High temperature

When the temperature reaches a critical level, the buzzer is activated.

## Power and Common Ground

All components share a common ground for proper reference and stable operation. The report also identifies the **+5V supply**, ground, sensor/comparator signal lines, and LED control lines in the circuit wiring.

## Overall System Flow

```text
Temperature
     ↓
   LM35
     ↓
Arduino UNO
     │
     ├──────→ Status LEDs
     │
     ↓
LM393 Comparator
     ↓
Relay Module
     ↓
Buzzer Alarm
```

This architecture combines **analog temperature sensing, hardware threshold detection, Arduino monitoring, and visual/audible alerts** to provide a low-cost freezer temperature alarm system.
