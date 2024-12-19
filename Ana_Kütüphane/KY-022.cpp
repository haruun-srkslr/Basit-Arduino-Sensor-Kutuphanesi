#include "us.h"

// ky022(int ky022pin);
// int readSignal();
// void captureIR();


ky022::ky022(int ky022pin) {
  _ky022pin = ky022pin;
  pinMode(_ky022pin, INPUT);
}


int ky022::readSignal() {
  return digitalRead(_ky022pin);
}


void ky022::captureIR(){
  Serial.println("IR okuma başlatılıyor.");

  for(int i=0;i<=100;i++){
    int signal=digitalRead(_ky022pin);
    Serial.println(signal);
    delay(50);

  }
  Serial.println("okuma başarıyla tamamlandı.");

}