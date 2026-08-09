## Output Overview

The Freezer Temperature Alarm System was tested under different temperature conditions to verify sensor response, LED indication, comparator operation, relay switching, and buzzer activation.

> **Note:** Add the actual output images/screenshots from the project report in the corresponding sections below.

---

## 1. Arduino IDE / Serial Monitor Output

**Screenshot:**

```text id="f9a1xe"
[Insert: Serial Monitor screenshot here]
```

The Arduino Serial Monitor is used to observe the temperature sensor readings in real time and verify the response of the system during testing. It also helps in debugging and threshold adjustment.

---

## 2. Normal Temperature Condition

**Screenshot:**

```text id="k4r8cu"
[Insert: Normal temperature output screenshot here]
```

When the freezer temperature is within the normal range, the **Green LED** indicates the normal condition and the alarm remains OFF.

---

## 3. Warning Temperature Condition

**Screenshot:**

```text id="w9y3ma"
[Insert: Warning condition screenshot here]
```

When the temperature moves towards the preset limit, the **Yellow LED** indicates a warning condition. This provides an early visual indication before the critical alarm condition.

---

## 4. High / Critical Temperature Condition

**Screenshot:**

```text id="a2p7ks"
[Insert: High-temperature output screenshot here]
```

When the temperature crosses the preset threshold, the **Red LED** indicates a high-temperature condition. The comparator detects the threshold crossing and the alarm path is activated.

---

## 5. Buzzer Alarm Output

**Screenshot:**

```text id="r6z2qp"
[Insert: Buzzer ON output screenshot here]
```

During a critical temperature condition, the relay activates the buzzer and provides an audible warning to alert the user.

---

## 6. Temperature Response Testing

**Screenshot:**

```text id="p8x5nd"
[Insert: Temperature response/testing screenshot here]
```

During testing, the LM35 responded to temperature changes and produced corresponding sensor readings. The system was verified under different temperature conditions to check the expected LED and alarm responses.

---

## Output Summary

| Condition       | LED Status | Buzzer |
| --------------- | ---------- | ------ |
| Normal          | Green ON   | OFF    |
| Warning         | Yellow ON  | OFF    |
| High / Critical | Red ON     | ON     |

The testing demonstrates that the system can detect temperature changes and provide visual and audible alerts when the freezer temperature reaches an unsafe level.
