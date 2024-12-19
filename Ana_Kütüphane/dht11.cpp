#include "us.h"

dht11::dht11(int dht11pin){
  _dht11pin=dht11pin;
}
bool dht11::dht11start(){
  pinMode(_dht11pin,OUTPUT);
  digitalWrite(_dht11pin,LOW);
  delay(18);
  digitalWrite(_dht11pin,HIGH);
  delayMicroseconds(20);

  pinMode(_dht11pin,INPUT);
  delayMicroseconds(40);

  if(digitalRead(_dht11pin)==LOW){
    delayMicroseconds(80);
    if(digitalRead(_dht11pin)==HIGH){
      delayMicroseconds(80);
      return true;
    }
    return false;
  }

}
int dht11::readbitdht11(){
  while(digitalRead(_dht11pin)==LOW);
    delayMicroseconds(35);
    if(digitalRead(_dht11pin)==HIGH){
      while(digitalRead(_dht11pin)==HIGH);
      return 1;
    }
    return 0;

}
byte dht11::dht11readbyte(){
  byte data=0;
  for(int i=0;i<8;i++){
    data<<=1;
    data|=readbitdht11();
  }
  return data;
}

