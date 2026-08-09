# System Coding

## Arduino Program – Freezer Temperature Alarm System

The Arduino UNO continuously reads the temperature from the LM35 sensor through analog pin A0. The measured temperature is classified into overcool, normal, and undercool conditions using configurable temperature limits. The corresponding status LED is activated.

The Arduino also monitors the LM393 comparator output. When the hardware threshold condition is detected, the relay is activated to operate the buzzer alarm.

```cpp
/*
 * Freezer Temperature Alarm System
 *
 * Controller : Arduino UNO
 * Sensor     : LM35
 * Comparator : LM393
 * Alarm      : Relay + Buzzer
 * Indicators : Red, Yellow, Blue LEDs
 *
 * LM35 output -> A0
 *
 * LED indication:
 * Red    -> Overcool
 * Yellow -> Normal temperature
 * Blue   -> Undercool
 *
 * The LM393 comparator output is monitored by the Arduino
 * and can be used to synchronize the hardware alarm.
 */

// -------------------------
// Pin Definitions
// -------------------------

const int LM35_PIN = A0;

// Status LEDs
const int RED_LED_PIN    = 8;
const int YELLOW_LED_PIN = 9;
const int BLUE_LED_PIN   = 10;

// LM393 comparator output
const int COMPARATOR_PIN = 7;

// Relay control
const int RELAY_PIN = 6;

// -------------------------
// Temperature Limits
// -------------------------

// Change these values according to the actual
// freezer operating range and calibrated threshold.

const float OVERCOOL_LIMIT = -5.0;
const float UNDERCOOL_LIMIT = 5.0;

// -------------------------
// Setup
// -------------------------

void setup() {

  Serial.begin(9600);

  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);

  pinMode(COMPARATOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);

  // Initially switch everything OFF
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(BLUE_LED_PIN, LOW);
  digitalWrite(RELAY_PIN, LOW);

  Serial.println("Freezer Temperature Alarm System");
  Serial.println("--------------------------------");
}

// -------------------------
// Main Loop
// -------------------------

void loop() {

  // Read LM35 sensor
  int sensorValue = analogRead(LM35_PIN);

  // Arduino UNO ADC reference = 5V
  float voltage = sensorValue * (5.0 / 1023.0);

  // LM35 output = 10 mV per degree Celsius
  float temperatureC = voltage * 100.0;

  // Read LM393 comparator
  int comparatorState = digitalRead(COMPARATOR_PIN);

  // Display readings
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C");

  Serial.print(" | Comparator: ");
  Serial.println(comparatorState);

  // Turn OFF all LEDs before selecting status
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(BLUE_LED_PIN, LOW);

  // -------------------------
  // Temperature Classification
  // -------------------------

  if (temperatureC < OVERCOOL_LIMIT) {

    // Overcool condition
    digitalWrite(RED_LED_PIN, HIGH);

    Serial.println("Status: OVERCOOL");

  }
  else if (temperatureC > UNDERCOOL_LIMIT) {

    // Undercool condition
    digitalWrite(BLUE_LED_PIN, HIGH);

    Serial.println("Status: UNDERCOOL");

  }
  else {

    // Normal temperature
    digitalWrite(YELLOW_LED_PIN, HIGH);

    Serial.println("Status: NORMAL");
  }

  // -------------------------
  // Hardware Alarm
  // -------------------------

  /*
   * LM393 output is used as the hardware
   * threshold detection signal.
   *
   * Depending on the actual LM393 module
   * configuration, the output may be
   * active LOW or active HIGH.
   *
   * The following assumes an active LOW
   * comparator output.
   */

  if (comparatorState == LOW) {

    digitalWrite(RELAY_PIN, HIGH);

    Serial.println("Alarm: ON");

  }
  else {

    digitalWrite(RELAY_PIN, LOW);

    Serial.println("Alarm: OFF");
  }

  Serial.println("-----------------------------");

  delay(1000);
}
