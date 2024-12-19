#include "us.h"

ky017::ky017(int ky017pin){
  _ky017pin=ky017pin;
  pinMode(_ky017pin,INPUT);
}

void ky017::ky017fonk(){
  val=digitalRead(_ky017pin);
  if(val==HIGH){
    val=1;
  }
  else{
    val=0;
  }
  Serial.println(val);


}


