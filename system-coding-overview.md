# System Coding

## Arduino Program

The Freezer Temperature Alarm System is programmed using the **Arduino IDE**. The Arduino program reads the temperature from the LM35 sensor, processes the measured value, and controls the status LEDs, buzzer, and relay according to the temperature condition. The Serial Monitor is used for real-time monitoring, testing, debugging, and threshold adjustment.

### Main Software Functions

```text
LM35 Temperature Sensor
          ↓
     Arduino UNO
          ↓
   Read Temperature
          ↓
   Process Temperature
          ↓
 ┌────────┼─────────┐
 ↓        ↓         ↓
LED      Relay     Buzzer
Status   Control   Alert
```

### Temperature Monitoring

The LM35 provides an analog temperature signal to the Arduino. The sensor output is connected to the Arduino's **A0 analog input**, allowing the controller to read real-time temperature values.

### Status Indication

The Arduino controls status LEDs to indicate the detected temperature condition. The report describes different LED indications for temperature states, providing immediate visual feedback to the user.

### Alarm Control

When the temperature crosses the preset threshold, the system activates the alarm path. The LM393 comparator detects the threshold crossing and its output is routed to the relay, which activates the buzzer to provide an audible warning.

### Serial Monitoring

The Arduino IDE Serial Monitor is used to observe sensor values in real time, debug the program, and fine-tune the temperature threshold during testing.

> **Note:** The report contains the Arduino coding as **Figure 4.12 – Coding**, but the actual source-code text is not available in the extracted report content. Therefore, the original Arduino code should be pasted here from the actual `.ino` file or the coding screenshot rather than creating an assumed version.
