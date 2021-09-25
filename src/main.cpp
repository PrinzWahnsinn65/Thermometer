#include <Arduino.h>
#include "blau.h"
#include"wlan.h"



void setup() {
  // put your setup code here, to run once:

blau_setup();

}

void loop() {
  // put your main code here, to run repeatedly:

  kommunikation();
}