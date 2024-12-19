#include "us.h"

ky040::ky040(int clkpin,int dtpin,int swpin){
  _clkpin=clkpin;
  _dtpin=dtpin;
  _swpin=swpin;

  pinMode(_clkpin,INPUT_PULLUP);
  pinMode(_dtpin, INPUT_PULLUP);
  pinMode(_swpin, INPUT_PULLUP);

  _clkson=digitalRead(_clkpin);
}

void ky040::ky040yon(){
  clk_simdi=digitalRead(_clkpin);
  if (clk_simdi != _clkson){
    if(digitalRead(_dtpin)==clk_simdi){
      sayac++;  
      yon=true;
    }
    else{
      sayac--;
      yon=false;
    }
    Serial.print("Sayaç : ");
    Serial.print(sayac);
    Serial.print("| Yön : ");
    if(yon==true){
      Serial.println("->");
    }
    else{
      Serial.println("<-");
    }
  }


  _clkson=clk_simdi;
  if(digitalRead(_swpin)==LOW && sayac != 0 ){
    sayac=0;
    Serial.println("sayac sıfırlandı");
  }


}