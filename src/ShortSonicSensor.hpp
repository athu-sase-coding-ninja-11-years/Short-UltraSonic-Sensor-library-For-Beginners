#pragma once
#include<Arduino.h>
void sonicBegin(const int trig,const int echo)
{
    Serial.begin(9600);
    pinMode(trig,OUTPUT);
     pinMode(echo,INPUT);
}
void sonicStartRead(const int trig,const int echo)
{
    digitalWrite(trig,LOW);
    delayMicroseconds(2);
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig,LOW);
    long duration=pulseIn(echo,HIGH);
    int distance=duration*0.034 /2;
    Serial.print("distance:");
    Serial.print(distance);
    Serial.print(" cm");
    delay(500);
}