#include "us.h"

buzzer::buzzer(int buzzerpin){
  _buzzerpin=buzzerpin;
  pinMode(_buzzerpin,OUTPUT);
  
}

void buzzer::beep(int freq,int duration){
  tone(_buzzerpin,freq,duration);
}
void buzzer::stop(){
  noTone(_buzzerpin);
}
