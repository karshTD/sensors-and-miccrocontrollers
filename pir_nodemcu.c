const int pirPin = D1;   // GPIO5
const int ledPin = D2;   // GPIO4

void setup() {
  Serial.begin(115200);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.println("PIR Sensor warming up...");
}

void loop() {
  int pirState = digitalRead(pirPin);

  if (pirState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No motion");
  }

  delay(500);
}
