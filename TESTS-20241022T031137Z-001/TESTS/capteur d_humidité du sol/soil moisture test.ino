int sensor_pin = 36;
int value ;
 
void setup()
{
  Serial.begin(9600);
  Serial.println("Reading");
  delay(2000);
}
 
void loop()
{
 
  value= analogRead(sensor_pin);
  value = map(value,0,4095,100,0);
  if (value>=60){
    Serial.println("plant has enough water");
    Serial.print("Moisture : ");
  Serial.print(value);
  Serial.println("%");
  }
  else {
        Serial.println("water the plant");
  Serial.print("Moisture : ");
  Serial.print(value);
  Serial.println("%");
  }

  delay(2000);
}