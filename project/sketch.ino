#include "DHTesp.h"

const int DHT_PIN = 2;
DHTesp dhtSensor;

void setup() {
  Serial.begin(115200);
  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);
}

void loop() {
  TempAndHumidity data = dhtSensor.getTempAndHumidity();

  Serial.print("Temperature: ");
  Serial.print(data.temperature);
  Serial.print(" °C  Humidity: ");
  Serial.print(data.humidity);
  Serial.println(" %");

  delay(2000);
}
