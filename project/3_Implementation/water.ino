#include <NewPing.h>
#include <Servo.h>
#define trigPin 12
#define echoPin 13
#define MAX_DISTANCE 50
NewPing sonar (trigPin, echoPin, MAX_DISTANCE);

Servo myservo;
int LEDgreen = 3;
int LEDred = 2;

void setup() {
  Serial.begin (115200);
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);
  pinMode (LEDgreen, OUTPUT);
  pinMode (LEDred, OUTPUT);
  myservo.attach (9);
}

void loop() {
  int duration ,length, location=0,i;
  digitalWrite (trigPin,LOW);
  delayMicroseconds (2);
  digitalWrite (trigPin,HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin,LOW);
  duration = pulseIn (echoPin,HIGH);
  length = (duration/2) / 29.1;
  Serial.print (length);
  Serial.println (" cm");
  if (length <= 5) {
    digitalWrite (LEDred,LOW);
    digitalWrite (LEDgreen,HIGH);
    myservo.write (180);
  }
  else {
    digitalWrite (LEDgreen,LOW);
    digitalWrite (LEDred,HIGH);
    myservo.write (90);
  }
  delay (450);
}