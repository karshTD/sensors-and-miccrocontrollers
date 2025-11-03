const int irPin = D1;
const int ledPin = D2;

void setup() {
  Serial.begin(115200);
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int irState = digitalRead(irPin);

  if (irState == LOW) { // object detected
    digitalWrite(ledPin, HIGH);
    Serial.println("Object detected");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No object");
  }

  delay(200);
}
