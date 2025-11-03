#include <DHT.h>
#define DHTPIN 2;
#define DHTTYPE DHT11;
#define BUZZER 8;
#define LED 13;


DHT dht( DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
  pinMode(BUZZER , OUTPUT);
  pinMode(LED , OUTPUT);
  dht.begin();

}

void loop(){
  float temperature = dht.readtemperature();
  float humidity = dht.readhumidity();

if( isnan(humidity)|| isnan(temperature)){    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // alert condition
  if (temperature > 30 || humidity > 70) {
    digitalWrite(BUZZER, HIGH);
    digitalWrite(LEDPIN, HIGH);
    Serial.println("ALERT: High Temperature/Humidity!");
  } else {
    digitalWrite(BUZZER, LOW);
    digitalWrite(LEDPIN, LOW);
  }

  delay(2000);
}

  
