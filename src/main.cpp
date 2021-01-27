#include <Arduino.h>
#include "movement.h"

Movement *my_movement;

void setup() 
{
  Serial.begin(9600);
  delay(1000);

}

void loop() 
{
  my_movement->move_on();
}