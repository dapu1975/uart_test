#include <Arduino.h>
#include <Servo.h>

void setup()
{
  Serial.begin(9600);
  Serial.println("*** Serial Test Tool ***");
}

Servo myservo;

void loop()
{
  int incomingByte = 0;
  myservo.attach(12);
  while (1)
  {
    if (Serial.available() > 0)
    {
      incomingByte = Serial.read();
      Serial.print((char)incomingByte);
    }
    myservo.write(5);
    
    delay(500);
    myservo.write(15);
    delay(500);
  }
}