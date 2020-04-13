#include "Arduino.h"
#include <RZV_Blinking.h>

void setup_RZV_Blink(){
	pinMode(LED_BUILTIN,OUTPUT);
}


void RZV_Blink(int durata){
	digitalWrite(LED_BUILTIN,HIGH);
	delay(durata);
	digitalWrite(LED_BUILTIN,LOW);
	delay(durata);
}