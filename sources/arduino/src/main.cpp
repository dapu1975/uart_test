#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  Serial.println("*** Serial Test Tool ***");
}

void loop()
{
  int incomingByte = 0;
  while (1)
  {
    if (Serial.available() > 0)
    {
      incomingByte = Serial.read();
      Serial.print((char)incomingByte);
    }
  }
}