#include <blau.h>
#include<Arduino.h>

BluetoothSerial BT;
char lesen;
String befehl;

void blau_setup(){

    Serial.begin(115200);
    BT.begin("ESP32test"); //Name des ESP32
    Serial.println("Der ESP32 ist bereit. Verbinde dich nun über Bluetooth.");

}

String kommunikation(){
    if (Serial.available()) {
    BT.write(Serial.read());
  }
  if (BT.available()) {
    befehl="";
    while (BT.read()!='\n'){
    lesen=BT.read();
    //Serial.print(lesen);
    

    befehl+=lesen;
    


  delay(25);
    }
  }
  return(befehl);
}