#include "wlan.h"
#include <WiFi.h>


void wlan_suchen(){

WiFi.disconnect();


}

void wlan_starten(char* ssid, char* pwd){

WiFi.mode(WIFI_STA);

WiFi.begin(ssid,pwd);


}