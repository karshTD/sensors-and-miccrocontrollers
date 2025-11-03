#define TRIG 9;
#define ECHO 10;
#define LED 13;
#define BUZZER 8;

void setup(){
Serial.begin(9600);
pinMode(TRIG, OUTPUT)
pinMode( ECHO, INPUT);
pinMode( BUZZER, OUTPUT);
pinMode( LED , OUTPUT);

serial.println("ultrasonic sensor is working...");

}

void loop(){
  long duration;
  float distance;

digitalWrite( TRIG , LOW);
delaymicroseconds(2);
digitalWrite( TRIG, HIGH);
delaymicroseconds(10);
digitalWrite( TRIG, LOW);

duration = pulseIn( ECHO, INPUT);
distance = duration * 0.034/2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");


if (distance > 0 && distance < 15){
 digitalWrite( BUZZER , HIGH);
 digitalWrite( LED , HIGH);
}

else{
digitalWrite( BUZZER , HIGH);
digitalWrite( LED , HIGH);
}

delay(500)
  }
