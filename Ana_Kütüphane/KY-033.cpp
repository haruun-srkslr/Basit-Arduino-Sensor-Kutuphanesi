#include "us.h"


ky033::ky033(int ky033pin){
  int _ky033pin=ky033pin;
  int _ledpin=13;
  
  pinMode(_ky033pin,INPUT);
  pinMode(_ledpin,OUTPUT);
}


void ky033::ky033main(){
  

  if(digitalRead(_ky033pin)==LOW)
  {
    digitalWrite(_ledpin,HIGH);
    delay(200);
    Serial.println("sensör çizgi üzerinde.") ;
  }
  if(digitalRead(_ky033pin)==HIGH)
  {
    digitalWrite(_ledpin,LOW);
    delay(200);
    Serial.println("sensör çizgi üzerinde değil!!!!");
  }
  
 


}