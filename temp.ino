#include <dht.h>

dht DHT;

#define DHT11_PIN 3
const int motor = 5;

void setup(){
  Serial.begin(9600);
  pinMode(motor, OUTPUT);
}

void loop(){
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  if (DHT.humidity > 55 or DHT.temperature > 25) {
    digitalWrite(motor, HIGH);
  }
  else {
    digitalWrite(motor, LOW);
  }
  delay(1000);
}