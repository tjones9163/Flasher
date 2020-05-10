#include <Flasher.h>

int ledPin=13;
int slowDuration=300;
int fastDuration=100;
Flasher slowFlasher(ledPin, slowDuration);
Flasher fastFlasher(ledPin,fastDuration);
void setup(){}
void loop()
{
  slowFasher.flash(5);
  delay(1000);
  fastFlasher.flash(10);
  delay(2000);
}
