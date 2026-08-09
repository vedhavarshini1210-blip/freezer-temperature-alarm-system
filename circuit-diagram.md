# Circuit Diagram

## Circuit Diagram
<img width="882" height="832" alt="image" src="https://github.com/user-attachments/assets/3bc70c21-aa84-4ab6-bb23-60a1e63183f9" />

> **Circuit diagram image:**
> Add the actual circuit diagram from the project report here.

```text
[Insert: assets/circuit-diagram.png]
```

## Circuit Overview

The Freezer Temperature Alarm System consists of an **LM35 temperature sensor, Arduino UNO, LM393 comparator, potentiometer, relay module, buzzer, status LEDs, resistors, capacitor, and 5V power supply**.

The Arduino UNO acts as the main control unit. The LM35 senses the temperature and provides an analog signal for monitoring. The LM393 comparator is used for hardware-based threshold detection, while the relay controls the alarm circuit.

## Main Connections

### LM35 Temperature Sensor

The LM35 is used to sense the freezer temperature.

```text
LM35
 ├── VCC → +5V
 ├── GND → GND
 └── OUT → Arduino A0
```

The sensor output is connected to the Arduino's **A0 analog input** for temperature monitoring.

### LM393 Comparator

The LM393 is used as a threshold detector.

```text
LM35 Signal
     ↓
LM393 Comparator
     ↑
Reference Voltage
     ↓
Threshold Detection
```

A **10 kΩ potentiometer** is used to adjust the reference threshold. The comparator output changes state when the temperature-related signal crosses the preset reference level.

### Relay Module

The relay is connected to the comparator output and is used to switch the alarm circuit.

```text
LM393 Output
     ↓
Relay Module
     ↓
Buzzer / Alarm
```

The relay provides an electrically controlled switching mechanism for activating the buzzer when the critical temperature condition is detected.

### Status LEDs

The LEDs provide visual indication of the temperature condition.

```text
Arduino
  ├── Green LED  → Normal
  ├── Yellow LED → Warning
  └── Red LED    → High Temperature
```

The report specifies separate LED indications for normal, warning, and high-temperature conditions.

## Power Supply

The circuit uses a **+5V supply** for the Arduino and associated modules. A common ground is maintained between the connected components to provide a proper electrical reference.

## Circuit Working

```text
Temperature
     ↓
    LM35
     ↓
Arduino A0
     │
     ├──→ Status LEDs
     │
     ↓
LM393 Comparator
     ↓
Relay
     ↓
Buzzer
```

The LM35 senses temperature continuously. The Arduino monitors the sensor signal and provides status indication, while the LM393 compares the signal against the preset threshold. When a critical condition is detected, the relay activates the buzzer to provide an audible warning.

## Circuit Safety

* Maintain correct polarity for all components.
* Use a common ground for the circuit.
* Use suitable current-limiting resistors with LEDs.
* Verify the relay wiring before connecting any external load.
* Keep the sensor properly positioned for accurate temperature measurement.
