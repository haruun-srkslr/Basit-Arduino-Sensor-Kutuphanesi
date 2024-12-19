#include "us.h"



ky013::ky013(int ky013pin){
  _ky013pin=ky013pin;
}

void ky013::ky013main(){
  int AD = analogRead(_ky013pin);
  double Temp;
  Temp = log(10000.0*((1024.0/AD-1))); 
  Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
  Temp = Temp - 273.15;
  Serial.print("Sıcaklık : ");
  Serial.println(Temp);
}
