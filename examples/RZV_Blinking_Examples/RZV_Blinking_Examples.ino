#include<RZV_Blinking.h>

// .ino

void setup(){
setup_RZV_Blink();

}

void loop(){
RZV_Blink(250);
RZV_Blink(1000);
RZV_Blink(250);
RZV_Blink(1000);
}