#include "us.h"

ky018::ky018(int ky018pin){
  _ky018pin=ky018pin;

}

void ky018::ky018fonk(){
  deger=analogRead(_ky018pin);
  Serial.println(deger,DEC);
  delay(200);
}