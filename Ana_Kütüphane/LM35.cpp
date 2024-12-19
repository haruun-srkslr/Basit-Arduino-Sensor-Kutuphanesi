#include "us.h"


LM35::LM35(int LM35pin)
{
  _LM35pin=LM35pin;

}
float LM35::readTempC()
{
  int sensordegeri=0;
  float voltage,temperature=0;
  sensordegeri = analogRead(_LM35pin);
  voltage=sensordegeri * (5.0/1023.0);
  temperature=voltage * 10.0;
  return temperature;
  Serial.print(sensordegeri);
  Serial.println("sensordegeri");
  Serial.print(voltage);
  Serial.println(" volt");
  

}