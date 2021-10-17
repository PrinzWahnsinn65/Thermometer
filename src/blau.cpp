#include <blau.h>
#include"wlan.h"

BluetoothSerial BT;
int lesen;

void blau_setup(){

    Serial.begin(115200);
    BT.begin("ESP32test"); //Name des ESP32
    Serial.println("Der ESP32 ist bereit. Verbinde dich nun über Bluetooth.");

}

int kommunikation(){

while(lesen!=122){

  lesen=0;
  if (BT.available()) {
    lesen=BT.read();

  delay(25);
    }
  switch (lesen)
  {
    case 49: {wlan_suchen();break;}
    case 50: {Serial.println("2 gesendet");break;}
    case 122: {exit;break;}

  default: {lesen=0;break;}

  }
  return(lesen);
}
}