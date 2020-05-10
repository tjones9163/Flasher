// LED flashing library

#include "WProgram.h"
class Flasher
{
public:
Flasher(int pin, int duration);
void  flash(int times);
private:
int_pin;
int_d;
};