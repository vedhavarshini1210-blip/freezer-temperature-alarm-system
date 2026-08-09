# Working Principle

## Overview

The Freezer Temperature Alarm System continuously monitors the freezer temperature using an **LM35 temperature sensor**. The sensed temperature is processed by the Arduino Uno and compared against a preset threshold using the LM393 comparator.

When the temperature remains within the safe range, the system indicates the normal condition through the status LEDs. When the temperature rises beyond the preset limit, the comparator detects the threshold crossing and activates the alarm through the relay and buzzer.

## Working Flow

```text id="7w3h8y"
Freezer Temperature
        ↓
    LM35 Sensor
        ↓
 Analog Temperature Signal
        ↓
    Arduino UNO
        ↓
 Temperature Monitoring
        │
        ├──────────────→ Status LED
        │
        ↓
   LM393 Comparator
        ↓
 Threshold Detection
        ↓
   Relay Module
        ↓
      Buzzer
        ↓
  Audible Warning
```

## Step 1 – Temperature Sensing

The **LM35 temperature sensor** senses the temperature inside the freezer and generates an analog output corresponding to the measured temperature. The sensor output is connected to the Arduino's analog input for monitoring.

## Step 2 – Arduino Monitoring

The **Arduino Uno** receives the sensor signal and processes the temperature information. It determines the appropriate status indication and also monitors the comparator signal.

## Step 3 – Temperature Status Indication

The system provides visual indication using LEDs:

* 🟢 **Green LED** – Normal temperature
* 🟡 **Yellow LED** – Warning condition
* 🔴 **Red LED** – High temperature

This allows the user to identify the temperature condition without depending only on the serial output.

## Step 4 – Threshold Detection

The temperature-related signal is compared with the preset threshold using the **LM393 comparator**. The comparator provides hardware-based detection when the temperature crosses the specified safe limit.

## Step 5 – Alarm Activation

When the temperature reaches the critical condition, the comparator output activates the relay. The relay then controls the alarm circuit and the **buzzer turns ON**, providing an audible warning to the user.

## Step 6 – Continuous Monitoring

The system continuously monitors the freezer temperature. When the temperature changes, the sensor output changes accordingly, allowing the Arduino and comparator circuit to respond to the new condition.

## Working Conditions

| Temperature Condition | LED Indication | Alarm |
| --------------------- | -------------- | ----- |
| Normal                | Green          | OFF   |
| Warning               | Yellow         | OFF   |
| High / Critical       | Red            | ON    |

## Result of Operation

During testing, the sensor responded to temperature changes and produced a measurable signal. When the temperature remained within the normal range, the comparator output remained stable and the buzzer and warning LED stayed OFF. When the temperature increased beyond the preset threshold, the comparator detected the crossing and triggered the alarm.

## Summary

The complete working principle can be summarized as:

```text id="e9jh6x"
Sense → Process → Compare → Detect → Alert
```

The combination of **LM35 sensing, Arduino monitoring, LM393 threshold detection, relay switching, LED indication, and buzzer alert** provides an immediate warning when an unsafe freezer temperature condition occurs.
