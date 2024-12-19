#include "us.h"

ky008::ky008(int ky008pin){
  _ky008pin=ky008pin;
  pinMode(_ky008pin,OUTPUT);
}

void ky008::lazeron(){
  digitalWrite(_ky008pin,HIGH);
}
void ky008::lazeroff(){
  digitalWrite(_ky008pin,LOW);
}
