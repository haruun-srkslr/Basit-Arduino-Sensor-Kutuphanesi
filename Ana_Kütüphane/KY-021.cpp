#include "us.h"




ky021::ky021(int ky021pin,int ky021led){
  _ky021pin=ky021pin;
  _ledpin=ky021led;

  pinMode(_ledpin,OUTPUT);
  pinMode(_ky021pin,INPUT_PULLUP);
  
}


void ky021::ky021main(){

  if(digitalRead(_ky021pin)==LOW){
    digitalWrite(_ledpin,HIGH);

  }
  else{
    digitalWrite(_ledpin,LOW);
  }



}