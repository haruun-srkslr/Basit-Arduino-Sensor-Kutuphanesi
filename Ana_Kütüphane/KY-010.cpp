#include "us.h"


ky010::ky010(int ky010pin,int ky010led){
  _ky010pin=ky010pin;
  _ledpin=ky010led;
  pinMode(_ky010pin,INPUT_PULLUP);
  pinMode(_ledpin,OUTPUT);


}

void ky010::ky010main(){
  if(digitalRead(_ky010pin)==HIGH){
    digitalWrite(_ledpin,HIGH);
  }
  else{
    digitalWrite(_ledpin,LOW);
  }


}
