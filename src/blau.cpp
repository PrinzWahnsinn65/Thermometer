#include <blau.h>

BluetoothSerial BT;
char lesen;
void blau_setup(){

    Serial.begin(115200);
    BT.begin("ESP32test"); //Name des ESP32
    Serial.println("Der ESP32 ist bereit. Verbinde dich nun über Bluetooth.");

}

char kommunikation(){
    if (Serial.available()) {
    BT.write(Serial.read());
  }
  if (BT.available()) {
    lesen=BT.read();
    Serial.write(lesen);
    
  delay(25);
  return(lesen);
  }
}