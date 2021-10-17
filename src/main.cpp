#include"globalvars.h"

#include <Arduino.h>
#include "blau.h"
#include "wlan.h"
#include "speicher.h"




void setup() {
  // put your setup code here, to run once:

blau_setup();
//wlan_suchen();

}

void loop() {
  // put your main code here, to run repeatedly:

ergebnis = kommunikation();

if (ergebnis==122){Serial.println("Bluetootkommunikation beendet");
/*
switch ( str2int(ergebnis) )
{
case str2int("scan"): {wlan_suchen();ergebnis='0';break;};

default:{;break;};
}
*/
}
}