#include "us.h"


ultrasonic::ultrasonic(int trigpin, int echopin)
{
  _trigPin = trigpin;
  _echoPin = echopin;
  pinMode(_trigPin,OUTPUT);
  pinMode(_echoPin,INPUT);
}

long ultrasonic::getDistance()
{
  digitalWrite(_trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(_trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin,LOW);

  long duration = pulseIn(_echoPin,HIGH);

  long distance = duration*0.034/2;
  return distance;

}