#include "Arduino.h"
#include "Toggle.h"

Toggle::Toggle(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}


void Toggle::Doggle()
{
  int x = digitalRead (_pin);
  
  if (x == LOW){
  digitalWrite(_pin, HIGH);
  } else{
    digitalWrite(_pin, LOW);
  }
    
  }
  

