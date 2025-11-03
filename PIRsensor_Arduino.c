const int pirPin = 7;
const int ledPin = 13;

void setup(){

serial.begin(9600);
serial.println("arduino is warming up...");
  pinMode( pirPin, INPUT);
  pinMode ( ledPin, OUTPUT);
}

void loop(){
int pirstate = digitalRead(pirPin);

if (pirstate == HIGH) {
    digitalWrite( ledPin, HIGH);
    Serial.println("motion detected");
}

else {
 digitalWrite(ledPin, LOW);
 Serial.println("no motion detected);

   }
   delay(500);
}
