#include <DHT.h>
DHT dht(2, DHT11);
int led = 7;
int buzzer = 8;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();

  if (temp > 30) {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(2000);
}
