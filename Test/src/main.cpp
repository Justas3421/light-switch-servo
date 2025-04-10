#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup()
{
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  pinMode(9, OUTPUT);
}

void loop()
{
  for (size_t i = 0; i < 125; i++)
  {
    analogWrite(9, i);
    delay(100);
  }

  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}