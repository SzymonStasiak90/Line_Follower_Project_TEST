#include <Arduino.h>
#include <Movement.h>

void Movement::move_on()
{
    Serial.println("Moving Foward");
}
void Movement::move_backward()
{
    Serial.println("Moving Backward");
}