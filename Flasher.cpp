
#include "WProgram.h"
#include "Flasher.h"
Flasher::Flasher(int pin, int duration)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
  _d=duration/2;
}
void flasher::flash(int times)
{
  for (int i=0; i < times; i++)
  {
    digitalWrite(_pin,HIGH);
    delay(_d);
    digitalWrite(_pin,LOW);
    delay(_d);
  }
}
