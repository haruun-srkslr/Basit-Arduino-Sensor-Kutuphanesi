#include "us.h"

nabiz::nabiz(int nabizPin){
  _nabizPin=nabizPin;
}
int nabiz::nabizhesaplama(){
  int value = analogRead(_nabizPin);
  delay(500);
  return value;
}