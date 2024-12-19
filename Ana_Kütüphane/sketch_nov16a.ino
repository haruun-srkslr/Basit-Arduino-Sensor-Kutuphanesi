#include "us.h"


// ultrasonic ses modülü için kodlar
ultrasonic ultrasonic(9,10);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  long distance = ultrasonic.getDistance();
  Serial.print("distance : ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}



// buzzer için kodlar


// buzzer buzzer(7);
// void setup(){
//   Serial.begin(9600);
// }
// void loop()
// {
//   buzzer.beep(1200,200);
//   delay(200);
//   buzzer.stop();
//   delay(200);

// }

// DS18B20
// int ds18b20Pin= 8;
// DS18B20 sensor(ds18b20Pin);

// void setup(){
//   Serial.begin(9600);
  
// }


// void loop(){
//   float temp = sensor.getTemprature();
//   if(isnan(temp)){
//     Serial.println("Sicaklik okunamadi ! ");
//   }
//   else{
//     Serial.print("sicaklik : ");
//     Serial.print(temp);
//     Serial.println( " °C");

//   }
//   delay(100);

// }

// LM35
// LM35 LM35(A0);
// void setup()
// {
//   Serial.begin(9600);
// } 

// void loop()
// {
//   float temperature=LM35.readTempC();
//   Serial.print("Sıcaklık : ");
//   Serial.print(temperature);
//   Serial.println(" °C");

//   delay(1000);


// }



// nabiz sensörü
// void setup()
// {
//   Serial.begin(9600);
// }

// void loop(){
//   nabiz nabiz(A1);
//   int value=nabiz.nabizhesaplama();
//   Serial.println(value/10);
//   delay(1000);
  

// }


// ky-031
// void setup(){
//   Serial.begin(9600);
// }
// void loop(){
//   ky031 ky031(3);
//   String value=ky031.titresim();
//   Serial.println(value);



// }

// KY-008
// void setup(){
  
// }
// void loop(){
//   ky008 ky008(3);
//   ky008.lazeron();
//   delay(500);
//   ky008.lazeroff();
//   delay(500);
//   ky008.lazeron();
//   delay(500);
// }




// ky026 mysens(3,A0);

// void setup() {
//   Serial.begin(9600);
 
            
// }
  
// void loop() {
  
//   mysens.ky026fonk();
  
// }



// DHT-11
// dht11 mysens(4);
// void setup() 
// {
//   Serial.begin(9600);
//   Serial.println("okuma başlıyor...");
  
// }

// void loop() 
// {
//   if(mysens.dht11start()){
//     byte humidity_integer = mysens.dht11readbyte();
//     byte humidity_decimal = mysens.dht11readbyte();
//     byte temp_integer = mysens.dht11readbyte();
//     byte temp_decimal = mysens.dht11readbyte();
//     byte checksum=mysens.dht11readbyte();
  

//   if(checksum==(humidity_integer+humidity_decimal+temp_integer+temp_decimal)){
//     Serial.print("Nem: ");
//     Serial.print(humidity_integer);
//     Serial.print(".");
//     Serial.print(humidity_decimal);
//     Serial.println("%");
//     Serial.print("Sıcaklık: ");
//     Serial.print(temp_integer);
//     Serial.print(".");
//     Serial.print(temp_decimal);
//     Serial.println("°C");
    
//   }else{
//     Serial.println("veri okunmuyor");
//   } 
//     }else{
//       Serial.println("DHT-11 yanıt vermiyor.");
//     }
// }
 

// titresim sensörü KY-002
// ky002 mysens(2);
// void setup () {
  
//   Serial.begin(9600);
// } 

// void loop () {
//   int deger=mysens.ky002led(2,12);
//   Serial.println(deger);
// }



// KY-018
// ky018 mysens(A2); 
// void setup() {
//   Serial.begin(9600);
// } 


// void loop() {
//   mysens.ky018fonk();
// }


// KY-020
// ky020 mysens(4);

// void setup(){
//   Serial.begin(9600);

// }
// void loop(){
//   mysens.ky020fonk();

// }


// KY-017
// ky017 mysens(3);

// void setup()
// {
// 	Serial.begin(9600);
// }

// void loop()
// {
// 	mysens.ky017fonk();
// }



// ky022 mysens(2);
// void setup(){
//   Serial.begin(9600);
//   Serial.println("test başladı");

// }

// void loop(){
//   int signal = mysens.readSignal();
//   if (signal==HIGH){
//     Serial.println("sinyal algılandı!");

//   }
//   delay(100);
//   mysens.captureIR();

// }


// ky033 ky033(2);
 
// void setup ()
// {
  

//   Serial.begin(9600);
//   // Serial.println("sensrr testi basladi !");
                  
// }
 
// void loop (){
//   String mesaj;
//   mesaj=ky033.ky033main();
//   delay(300);
//   Serial.println(mesaj);       
// }



// int led = 13 ;   // Arduino'nun Dahili LED'i
// int sensor = 2 ; // Civalı anahtar bağlantısı
//                  // - pinini Arduino üzerinde GND'ye bağlamalıyız
//                  // (Modüldeki LED'i kullanacaksak L pini ve Arduino çıkışı arasına
//                  // 220 Ohm civarı bir koruma direnci bağlamalıyız)
 
// void setup() {
//   pinMode(led, OUTPUT) ;            // LED'i çıkış olarak ayarlıyoruz
//   pinMode(sensor, INPUT_PULLUP) ;   // Sensör bağlantısını giriş olarak ayarlıyoruz
// }
  
// void loop() {
//   if (digitalRead(sensor) == LOW) { // Sensör sallandığında dijital çıkış LOW olur
//     digitalWrite(led, HIGH);        // Sallantı hissedildiğine göre LED'i yakalım
//   }
//   else {
//     digitalWrite(led, LOW);         // Sensör sallanmamış, o zaman LED'i söndürelim
//   }
// }


// ky027 mysens(2,13);
// void setup(){
//   Serial.begin(9600);

// }

// void loop(){
//   mysens.ky027main();

// }



// ky010 mysens(2,13);
// void setup(){
//   Serial.begin(9600);


// }

// void loop(){
//   mysens.ky010main();

// }




// ky025 mysens(2,A0,13);

// void setup(){
//   Serial.begin(9600);

// }

// void loop(){
//   mysens.ky025main();


// }


// ky032 mysens(2,13);
// void setup(){
//   Serial.begin(9600);


// }

// void loop(){

//   mysens.ky032main();

// }


// ky038 mysens(2,A0);
// void setup(){
//   Serial.begin(9600);
// }
// void loop(){
//   mysens.ky038main();
// }







// ky013 mysens(A0);
// void setup(){
//   Serial.begin(9600);
// }
// void loop(){
//   mysens.ky013main();

// }



// ky021 mysens(2,13);

// void setup() {
//   Serial.begin(9600);

// }
  
// void loop() {
//   mysens.ky021main();
// }




// ky040 mysens(3,4,5);
 
// void setup() {
//   Serial.begin(9600);
//  }

 
// void loop() {
//   mysens.ky040yon();
//  }






