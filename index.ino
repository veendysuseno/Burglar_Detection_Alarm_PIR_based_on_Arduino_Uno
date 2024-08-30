/*
  Design and Build a Burglar Detection Alarm with a PIR Sensor and Arduino Uno
*/

int ledPin = 3; // Pin OUTPUT --> LED
int piezoBuzzerPin = 4;
int pirSensorPin = 2;
int motionDetected = LOW;

void setup() { 
  pinMode(ledPin, OUTPUT);
  pinMode(pirSensorPin, INPUT);
  pinMode(piezoBuzzerPin, OUTPUT);
  Serial.begin(9600);
  delay(5000);
}

void loop() { 
  motionDetected = digitalRead(pirSensorPin); //Reading --> sensor PIR
  if (motionDetected == HIGH) //when motion is detected
  {
    digitalWrite(ledPin, HIGH);
    analogWrite(piezoBuzzerPin, 200);
    delay(100);
    analogWrite(ledPin, LOW);
    analogWrite(piezoBuzzerPin, 25);
    delay(100);
  }
  digitalWrite(ledPin, LOW);
  digitalWrite(piezoBuzzerPin, LOW);
}
