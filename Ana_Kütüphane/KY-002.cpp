#include "us.h"

ky002::ky002(int ky002pin){
  int _ky002pin=ky002pin;
  pinMode(_ky002pin,INPUT);
}

int ky002::ky002deger(int _ky002pin){

  deger=digitalRead(_ky002pin);
  return deger;
}

int ky002::ky002led(int ky002pin,int ledpin){
  // eğer sensöre led taktıysanız bu fonksiyonu kullanınız !
  pinMode(ledpin,OUTPUT);
  deger=digitalRead(ky002pin);
  
  if(deger == HIGH){
    digitalWrite(ledpin,LOW);
  }
  else{
    digitalWrite(ledpin,HIGH);
  }
  return deger;
}