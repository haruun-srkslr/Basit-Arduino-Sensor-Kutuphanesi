#include "us.h"


ky038::ky038(int ky038pind,int ky038pina){
  _ky038pind=ky038pind;
  _ky038pina=ky038pina;
  _ledpin=ky038led;

  pinMode(_ledpin,OUTPUT);
  pinMode(_ky038pind,INPUT);
  pinMode(_ky038pina,INPUT);
  
}


void ky038::ky038main(){
  if (digitalRead(_ky038pind)==HIGH){
    Serial.print("SES VAR !!");
    digitalWrite(_ledpin,HIGH);
  }
  else{
    Serial.print("SES YOK");
    digitalWrite(_ledpin,LOW);
  }
  Serial.print("| Analog değer : ");
  Serial.println(analogRead(_ky038pina));
  delay(100);
}





















