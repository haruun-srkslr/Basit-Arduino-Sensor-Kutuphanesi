#include "Print.h"
#include "us.h"

ky026::ky026(int ky026dpin,int ky026apin){
  _ky026dpin=ky026dpin;
  _ky026apin=ky026apin;
  pinMode(_ky026dpin,INPUT);
  pinMode(_ky026apin,INPUT);
  pinMode(led,OUTPUT);


}
// bool ky026::ky026cont(){
//   if (digitalRead(_ky026dpin)==1){
//     return true;
//   }
//   else{
//     return false;
//   }




// }
void ky026::ky026fonk(){
  // bool cont=ky026cont();
  Serial.print("Yangın : ");
  if (digitalRead(_ky026dpin)==1){
    Serial.println("VAR !");
    digitalWrite(led,HIGH);
  }
  else{
    Serial.println("yok");
    digitalWrite(led,LOW);
  }
  

}
