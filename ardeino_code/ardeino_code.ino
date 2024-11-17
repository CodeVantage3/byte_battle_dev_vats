#include "DHT.h"
#define DHTPIN A1
#define relay 7
#define hpin 11
#define DHTTYPE DHT11 // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
Serial.begin(9600);
Serial.println("init..");
pinMode(hpin,OUTPUT);
pinMode(relay,OUTPUT);
dht.begin();
}

void loop() {
digitalWrite(hpin, HIGH); 
delay(2000);
float t = dht.readTemperature();
Serial.print(t);
Serial.println(" *C ");
if(t<10){
  digitalWrite(relay, HIGH);  
}
else{
  digitalWrite(relay, LOW); 
}
delay(2000);
}