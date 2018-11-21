#ifndef Toggle_h
#define Toggle_h

#include "Arduino.h"

class Toggle
{
  public:
    Toggle(int pin);
    void Doggle();

    private:
      int _pin;
};

#endif

