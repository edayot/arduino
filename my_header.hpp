#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <Arduino.h>

contexpr int RedPin = 9;
contexpr int GreenPin = 10;
contexpr int BluePin = 11;

void red ()
{
    analogWrite(RedPin, 100);
    analogWrite(GreenPin, 0);
    analogWrite(BluePin, 0);
}
void orange()
{
    analogWrite(RedPin, 100);
    analogWrite(GreenPin, 50);
    analogWrite(BluePin, 0);
}
void yellow()
{
    analogWrite(RedPin, 100);
    analogWrite(GreenPin, 100);
    analogWrite(BluePin, 0);
}
void green()
{
    analogWrite(RedPin, 0);
    analogWrite(GreenPin, 100);
    analogWrite(BluePin, 0);
}
void cyan()
{
    analogWrite(RedPin, 0);
    analogWrite(GreenPin, 100);
    analogWrite(BluePin, 100);
}
void blue()
{
    analogWrite(RedPin, 0);
    analogWrite(GreenPin, 0);
    analogWrite(BluePin, 100);
}
void magenta()
{
    analogWrite(RedPin, 100);
    analogWrite(GreenPin, 0);
    analogWrite(BluePin, 100);
}
void custom(int red, int green, int blue)
{
    analogWrite(RedPin, red);
    analogWrite(GreenPin, green);
    analogWrite(BluePin, blue);
}



#endif