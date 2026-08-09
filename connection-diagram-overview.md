# Connection Diagram Overview

## Connection Overview

The Freezer Temperature Alarm System connects the **LM35 temperature sensor, Arduino UNO, LM393 comparator, potentiometer, relay, buzzer, status LEDs, and supporting components** to monitor temperature and provide an alarm when the preset threshold is crossed.

## Component Connections

| Component               | Connection                            | Purpose                     |
| ----------------------- | ------------------------------------- | --------------------------- |
| **LM35**                | Output → Arduino A0                   | Temperature sensing         |
| **LM35**                | VCC → +5V                             | Sensor power                |
| **LM35**                | GND → Common GND                      | Electrical reference        |
| **LM393 Comparator**    | Temperature signal input              | Threshold detection         |
| **10 kΩ Potentiometer** | Comparator reference input            | Threshold adjustment        |
| **LM393 Comparator**    | Output → Relay control path           | Alarm triggering            |
| **Relay Module**        | Control input from comparator circuit | Switching alarm             |
| **Buzzer**              | Relay-controlled output               | Audible warning             |
| **Green LED**           | Arduino-controlled                    | Normal condition            |
| **Yellow LED**          | Arduino-controlled                    | Warning condition           |
| **Red LED**             | Arduino-controlled                    | High-temperature condition  |
| **Resistors**           | LED circuits                          | Current limiting            |
| **Capacitor**           | Power/timing section                  | Circuit support             |
| **5V Supply**           | VCC connections                       | Power supply                |
| **Common GND**          | Connected modules                     | Common electrical reference |

The report specifically identifies the LM35 output as connected to **Arduino A0**, and describes the comparator, relay, LEDs, buzzer, potentiometer, +5V and common-ground connections.

## Signal Flow

```text
LM35
 │
 │ Analog Temperature Signal
 ▼
Arduino UNO ───────────► Status LEDs
 │
 │ Temperature / Threshold Signal
 ▼
LM393 Comparator
 │
 ▼
Relay Module
 │
 ▼
Buzzer
```

## Power Connections

The system uses a **+5V supply** for the Arduino and connected circuit components. A common ground is maintained across the circuit for proper operation.

## Important Connection Notes

* The **LM35 output is connected to Arduino A0** for analog temperature monitoring.
* The **10 kΩ potentiometer** is used to adjust the comparator reference threshold.
* The **LM393 output** is used in the alarm-triggering path.
* The **relay** provides switching control for the buzzer.
* The **LEDs** provide visual indication of temperature conditions.
* All relevant modules share a **common ground**.
* The report does not provide enough extracted information to reliably state exact Arduino digital pin numbers for every LED/relay connection, so those pin numbers should be copied directly from the original circuit diagram/code rather than guessed.
