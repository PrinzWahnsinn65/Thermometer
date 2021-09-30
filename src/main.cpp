#include <Arduino.h>
#include "blau.h"
#include"wlan.h"

char ergebnis='0';

void setup() {
  // put your setup code here, to run once:

blau_setup();
//wlan_suchen();

}

void loop() {
  // put your main code here, to run repeatedly:

ergebnis = kommunikation();

switch (ergebnis)
{
case 97: {wlan_suchen();ergebnis='0';break;};

default:{;break;};
}
}