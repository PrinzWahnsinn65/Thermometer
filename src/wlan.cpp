#include "wlan.h"
#include <WiFi.h>
void wlan_suchen(){

WiFi.disconnect();

//Gerüst

int n = WiFi.scanNetworks();
  Serial.println("Scan beendet");
  if (n == 0) {
      Serial.println("keine Netzwerke gefunden");
  } else {
    Serial.print(n);
    Serial.println(" Netzwerke gefunden");
    for (int i = 0; i < n; ++i) {
      // Print SSID and RSSI for each network found
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" (");
      Serial.print(WiFi.RSSI(i));
      Serial.print(")");
      Serial.println((WiFi.encryptionType(i) == WIFI_AUTH_OPEN)?" ":"*");
      delay(10);
    }
//Ende Gerüst

// int anz_wlan = WiFi.scanNetworks();


}
}

void wlan_starten(char* ssid, char* pwd){

WiFi.mode(WIFI_STA);

WiFi.begin(ssid,pwd);


}