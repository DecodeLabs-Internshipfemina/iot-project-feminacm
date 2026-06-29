const int sensorPin = 34;
const int relayPin = 2;

int threshold = 2000;

void setup() {
  Serial.begin(115200);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  int moisture = analogRead(sensorPin);

  Serial.print("Moisture: ");
  Serial.println(moisture);

  if (moisture < threshold) {
    digitalWrite(relayPin, HIGH);
    Serial.println("Pump ON");
  } else {
    digitalWrite(relayPin, LOW);
    Serial.println("Pump OFF");
  }

  delay(1000);
}
