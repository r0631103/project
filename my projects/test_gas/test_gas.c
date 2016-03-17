#include "xcez_lib.h"
#include "xc888.h"
#define gasPin = p2_data_5	 //GAS sensor output pin to Arduino analog A0 pin


void setup()
{
	Serial.begin(9600); //Initialize serial port - 9600 bps
}

void loop()
{
	Serial.println(analogRead(gasPin));
	delay(1000); // Print value every 1 sec.

	}