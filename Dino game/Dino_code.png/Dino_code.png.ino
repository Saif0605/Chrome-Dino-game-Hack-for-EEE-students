#include <Servo.h>

Servo myServo;

int ldrPin = A0;
int servoPin = 5;

int threshold = 500;  // adjust this!

void setup() {
  myServo.attach(servoPin);
  myServo.write(0);   // resting position
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(ldrPin);
  Serial.println(sensorValue);

  if (sensorValue < threshold) {
    jump();
  }

  delay(50);
}

void jump() {
  myServo.write(40);  // press key
  delay(150);
  myServo.write(0);   // release
}