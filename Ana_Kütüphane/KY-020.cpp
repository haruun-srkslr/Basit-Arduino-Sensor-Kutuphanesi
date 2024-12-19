#include "us.h"

ky020::ky020(int ky020pin){
  _ky020pin=ky020pin;
  pinMode(_ky020pin,INPUT_PULLUP);
}


void ky020::ky020fonk(){
  deger=digitalRead(_ky020pin);
  Serial.println(deger);
  delay(400);
}