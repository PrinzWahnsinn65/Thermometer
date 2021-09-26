#include <Arduino.h>
#include "blau.h"
#include"wlan.h"

int ergebnis=0;

void setup() {
  // put your setup code here, to run once:

blau_setup();
//wlan_suchen();

}

void loop() {
  // put your main code here, to run repeatedly:

 ergebnis= kommunikation();

 if(ergebnis==1){
   wlan_suchen();
 }
}