#ifndef us_h
#define us_h

#include "Arduino.h"
#include "OneWire.h"
class ultrasonic{
  public:
    ultrasonic(int trigpin,int echopin);
    long getDistance();
  private:
    int _trigPin;
    int _echoPin;
};

class buzzer
{
  public:
  buzzer(int buzzerpin);
  void beep(int freq,int duration);
  void stop();
  private:
  int _buzzerpin;

};

class DS18B20
{
  public:
    DS18B20(int tempPin);
    float getTemprature();

  private:
    int _tempPin;
    OneWire _oneWire;

};

class LM35
{
  public:
  LM35(int LM35pin);
  float readTempC();
  private :
  int _LM35pin;


};

class nabiz{
  public:
  int nabizPin;
  nabiz(int nabizPin);
  int nabizhesaplama();
  private:
  int _nabizPin;

};

class ky031{
  public:
  int ky031pin;
  ky031(int ky031pin);
  String titresim();
  private:
  int _ky031pin;
  

};
class ky008{
  public:
  int ky008pin;
  ky008(int ky008pin);
  void lazeron();
  void lazeroff();
  private:
  int _ky008pin;

};

class ky026{
  public:
  int led=13;
  int ky026dpin;
  int ky026apin;
  ky026(int ky026dpin,int ky026apin);
  bool ky026cont();
  void ky026fonk();
  private:
  int _ky026dpin;
  int _ky026apin;
  
};
class dht11{
  public:
  int dht11pin;
  dht11(int dht11pin);
  bool dht11start();
  int readbitdht11();
  byte dht11readbyte();
  private:
  int _dht11pin;
};
class ky002{
  public:
  int ky002pin;
  int ledpin;
  int deger;
  ky002(int ky002pin);
  int ky002deger(int _ky002pin);
  int ky002led(int ky002pin,int ledpin);
  private:
  int _ky002pin;
};

class ky018{
  public:
  int ky018pin;
  int deger=0;
  ky018(int ky018pin);
  void ky018fonk();
  private:
  int _ky018pin;

};

class ky020{
  public:
  int ky020pin;
  int deger=0;
  ky020(int ky020pin);
  void ky020fonk();
  private:
  int _ky020pin;
};

class ky017{
  public:
  int ky017pin;
  int val;
  ky017(int ky017pin);
  void ky017fonk();
  private:
  int _ky017pin;

};
class ky022{
  private:
  int _ky022pin;
  int signal;
  public:
  int ky022pin;
  ky022(int ky022pin);
  int readSignal();
  void captureIR();

};
class ky033{
  private:
  int _ky033pin;
  int _ledpin;
  public:
  int ky033pin;
  
  
  ky033(int ky033pin);
  void ky033main();

};

class ky027{
  private:
  int _ky027pin;
  int _ledpin;
  public:
  int ky027pin;
  int kyled;
  ky027(int ky027pin,int ky027led);
  void ky027main();
};

class ky010{
  private:
  int _ky010pin;
  int _ledpin;
  public:
  int ky010pin;
  int ky010led;
  ky010(int ky010pin, int ky010led);
  void ky010main();
 
};
class ky025{
  private:
  int ky025pind;
  int ky025pina;
  int ky025led;
  public:
  int _ky025pind;
  int _ky025pina;
  int _ledpin;
  ky025(int ky025pind,int ky025pina,int ky025led);
  void ky025main();
  
};

class ky032{
  private:
  int _ky032pin;
  int _ledpin;

  public:
  int ky032pin;
  int ky032led;
  ky032(int ky032pin,int ky032led);
  void ky032main();





};

class ky038{
  private:
  int _ky038pina;
  int _ky038pind;
  int _ledpin;
  public:
  int ky038pina;
  int ky038pind;
  int ky038led=13;

  ky038(int ky038pind,int ky038pina);
  void ky038main();
};

class ky013{
  private:
  int _ky013pin;
  public:
  int ky013pin;
  ky013(int ky013pin);
  void ky013main();
};

class ky021{
  private:
  int _ky021pin;
  int _ledpin;
  public:
  int ky021pin;
  int ky021led;
  ky021(int ky021pin,int ky021led);
  void ky021main();
  
};

class ky040{
  private:
  int _clkpin;
  int _dtpin;
  int _swpin;
  int _clkson;
  
  public:
  int clk_simdi;
  int sayac=0;
  bool yon;
  int clkpin;
  int dtpin;
  int swpin;
  ky040(int clkpin,int dtpin,int swpin );
  void ky040yon();

};








#endif

