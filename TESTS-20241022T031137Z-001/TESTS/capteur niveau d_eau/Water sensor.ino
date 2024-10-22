/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-water-sensor
 */

#define SIGNAL_PIN 32 

int value = 0; // variable to store the sensor value

void setup() {
  Serial.begin(9600);

}

void loop() {
  delay(10);                      // wait 10 milliseconds
  value = analogRead(SIGNAL_PIN); // read the analog value from sensor
  Serial.print("The water sensor value: ");
  Serial.println(value);

  delay(1000);
}
