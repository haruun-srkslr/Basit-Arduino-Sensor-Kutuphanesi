#include "us.h"



ky025::ky025(int ky025pind,int ky025pina,int ky025led){
  _ky025pind=ky025pind;
  _ky025pina=ky025pina;
  _ledpin=ky025led;

  pinMode(_ky025pind,INPUT);
  pinMode(_ky025pina,INPUT);
  pinMode(_ledpin,OUTPUT);



}


void ky025::ky025main(){
  Serial.print("Mıknatıs ");
  if (digitalRead(_ky025pind)==HIGH){
    Serial.print("VAR !");
    digitalWrite(_ledpin,HIGH);
  }
  else{
    Serial.print("yok");
    digitalWrite(_ledpin,LOW);
  }
  Serial.print("| Analog Değer : ");
  Serial.println(analogRead(_ky025pina));
  delay(250);





}