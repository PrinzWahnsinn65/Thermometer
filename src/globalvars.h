#include <Arduino.h>
#include <Preferences.h>

int ergebnis=0;
int auswahl;

Preferences einstellungen;
String AktSSID="";
String AktPWD="";
String AktIP="";
String AktSub="";
String AktGateway="";
String AktDNS="";
bool dhcpC = true;
