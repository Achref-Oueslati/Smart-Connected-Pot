#include "DHT.h"
#include <LiquidCrystal_I2C.h>

#define DHT11PIN 16

DHT dht(DHT11PIN, DHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

byte degree_symbol[8] = 
              {
                0b00111,
                0b00101,
                0b00111,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000
              };
void setup()
{
  /* Start the DHT11 Sensor */
  dht.begin();
  lcd.begin();
  lcd.backlight();
  lcd.createChar(0, degree_symbol);
  lcd.setCursor(0,0);
  lcd.print("  DHT11   with ");
  lcd.setCursor(0,1);
  lcd.print("  ESP32 DevKit ");
  delay(2000);
  lcd.clear();
}

void loop()
{
  int humi = dht.readHumidity();
  float temp = dht.readTemperature();
  lcd.setCursor(0,0);
  lcd.print("Temp = ");
  lcd.print(temp);
  lcd.write(0);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Humidity = ");
  lcd.print(humi);
  lcd.print("%");
  delay(1000);
}