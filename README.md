# Freezer Temperature Alarm System

An Arduino-based temperature monitoring and alarm system designed to detect unsafe freezer temperature conditions and provide immediate visual and audible alerts.

![Arduino](https://img.shields.io/badge/Arduino-UNO-blue)
![Sensor](https://img.shields.io/badge/Sensor-LM35-green)
![Comparator](https://img.shields.io/badge/Comparator-LM393-orange)
![Project Status](https://img.shields.io/badge/Status-Completed-brightgreen)

---

## Overview

The **Freezer Temperature Alarm System** is designed to continuously monitor freezer temperature and detect abnormal cooling conditions. An **LM35 temperature sensor** measures the temperature and sends the analog signal to the Arduino Uno for monitoring and decision-making.

An **LM393 comparator** acts as a hardware threshold detector. When the measured temperature crosses the preset threshold, the comparator activates a relay connected to a buzzer, providing an audible warning. Status LEDs provide visual indication of the temperature condition.

---

## Features

* Continuous freezer temperature monitoring
* LM35-based temperature sensing
* Hardware threshold detection using LM393
* Adjustable temperature threshold using a 10 kΩ potentiometer
* Audible alarm using a buzzer
* Relay-based alarm activation
* Visual temperature-status indication using LEDs
* Arduino-based monitoring and control
* Common 5V supply and ground reference
* Low-cost and practical temperature safety system

---

## Components / Technologies

| Component                   | Purpose                                      |
| --------------------------- | -------------------------------------------- |
| **Arduino Uno**             | Main control and monitoring unit             |
| **LM35 Temperature Sensor** | Measures freezer temperature                 |
| **LM393 Comparator**        | Detects temperature threshold conditions     |
| **10 kΩ Potentiometer**     | Sets the reference threshold                 |
| **Relay Module**            | Controls the alarm circuit                   |
| **Buzzer**                  | Provides audible warning                     |
| **Status LEDs**             | Provides visual temperature indication       |
| **220 Ω Resistors**         | Limits LED current                           |
| **IC 555 Timer**            | Provides timing/oscillation functionality    |
| **Capacitor**               | Used for filtering, stabilization and timing |
| **5V Supply**               | Powers the circuit                           |

## The report specifically describes the LM35, LM393, relay, buzzer, LEDs, IC 555 timer, capacitors, and supporting components as part of the system.

## How It Works

```text
LM35 Temperature Sensor
          │
          ▼
     Arduino Uno
          │
          ├──────────► Status LEDs
          │
          ▼
     LM393 Comparator
          │
          ▼
      Relay Module
          │
          ▼
        Buzzer
```

The **LM35** continuously measures the freezer temperature. Its analog output is connected to Arduino's **A0** pin. The same sensor output is also provided to the **LM393 comparator**, where it is compared with an adjustable reference voltage.

When the temperature crosses the preset threshold, the comparator changes its output state and activates the relay. The relay then switches the buzzer to provide an audible alarm. The Arduino simultaneously controls the status LEDs to indicate the temperature condition.

---

## Applications

* Freezer temperature monitoring
* Cold-storage monitoring
* Temperature-sensitive storage systems
* Refrigeration safety systems
* Low-cost temperature alarm systems
* Automated temperature-warning applications

---

## Advantages

* Continuous temperature monitoring
* Immediate visual and audible alerts
* Hardware-based threshold detection
* Simple and low-cost implementation
* Easy-to-understand status indication
* Helps detect unsafe freezer conditions quickly
* Arduino provides scope for future expansion
* Comparator provides an additional hardware protection mechanism

---

## Future Scope

The system can be further developed for:

* Remote temperature monitoring
* IoT-based alerts
* Mobile notification systems
* Cloud-based temperature logging
* Digital display integration
* Data logging and historical analysis
* Additional temperature sensors
* Automated cooling-system control

> These are proposed future enhancements; they are not described as currently implemented features in the report.

---

## Author

**Project Team**

* Vedha Varshini SR
* Sujitha M
* Tanusri
