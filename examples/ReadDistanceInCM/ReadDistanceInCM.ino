//this is your ultrasonic example code//set your serial baund to 9600
//founder:coding ninja 11 years(atharva sase)
#include<ShortSonicSensor.hpp>
//here we include library name
void setup() {
  // put your setup code here, to run once:
sonicBegin();
//here on the left side of the bracket will be your tig pin,on right side,echo pin 
//example:sonicBegin(9,8);
//9=your trig pin,8=your echo pin
}

void loop() {
  // put your main code here, to run repeatedly:
sonic.StartRead();
//here on the left side of the bracket will be your tig pin,on right side,echo pin 
//example:sonic.StarRead(9,8);
//9=your trig pin,8=your echo pin
//it reads in cm
}
