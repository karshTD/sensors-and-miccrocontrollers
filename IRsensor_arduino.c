int IR_sensor = 9;
int ledPin = 13;

void setup(){
  Serial.begin(115200);
  Serial.println("serial working...");

PinMode( IR_sensor , INPUT);
PinMode( ledPin , OUTPUT);
}

void loop(){
  int IRsensorRead = digitalRead(IR_sensor);
if ( digitalRead == 1){
   digitalWrite( ledPin, HIGH);
    Serial.println("motion detected);
      }
else {
digitalWrite(ledPin, LOW);
   Serial.println("no motion detected);
     }
  delay(200)
     }
