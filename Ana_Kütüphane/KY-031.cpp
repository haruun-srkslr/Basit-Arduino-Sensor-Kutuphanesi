#include "us.h"

ky031::ky031(int ky031pin){
  _ky031pin=ky031pin;
  
}

String ky031::titresim(){
  int sensorValue=digitalRead(_ky031pin);
  if (sensorValue==HIGH){
    return "Titresim Algılandi";
  }
  else{
    return "titresim yok ";
  }

  delay(100);
  
}