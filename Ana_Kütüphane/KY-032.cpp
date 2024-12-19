#include "us.h"

ky032::ky032(int ky032pin,int ky032led){
  _ky032pin=ky032pin;
  _ledpin=ky032led;
  pinMode(_ky032pin,INPUT);
  pinMode(_ledpin,OUTPUT);

}

void ky032::ky032main(){
  if(digitalRead(_ky032pin)==LOW){
    Serial.println("ENGEL VAR!!!!!!!");
    digitalWrite(_ledpin,HIGH);

  }
  else{
    Serial.println("ENGEL YOK ");
    digitalWrite(_ledpin,LOW);
  }

  delay(150);






}
