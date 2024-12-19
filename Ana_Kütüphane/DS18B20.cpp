#include "us.h"

DS18B20::DS18B20(int tempPin) : _oneWire(tempPin)
{
  _tempPin=tempPin;
}

float DS18B20::getTemprature(){
  byte data[9];
  byte addr[8];

  if(!_oneWire.search(addr)){
    _oneWire.reset_search();
    return NAN;
  }
  if(OneWire::crc8(addr,7) != addr[7] ){
    return NAN;
  }
  _oneWire.reset();
  _oneWire.select(addr);
  _oneWire.write(0x44);

  delay(750);

  _oneWire.reset();
  _oneWire.select(addr);
  _oneWire.write(0xBE);

  for (int i = 0; i < 9 ; i++)
  {
    data[i]=_oneWire.read();
  }

  int16_t rawtemp = (data[1]<<8) | data[0];
  return (float)rawtemp/16;

}