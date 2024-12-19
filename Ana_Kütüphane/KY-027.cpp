#include "us.h"


ky027::ky027(int ky027pin,int ky027led){
  _ky027pin=ky027pin;
  _ledpin=ky027led;
  pinMode(_ky027pin,INPUT_PULLUP);
  pinMode(_ledpin,OUTPUT);
}

 void ky027::ky027main(){
  while(true){
  if(digitalRead(_ky027pin)==LOW){
    digitalWrite(_ledpin,HIGH);
  }
  else{
    digitalWrite(_ledpin,LOW);
  }
  } 

}

