#include <blau.h>

BluetoothSerial BT;
void blau_setup(){

    Serial.begin(115200);
    BT.begin("ESP32test"); //Name des ESP32
    Serial.println("Der ESP32 ist bereit. Verbinde dich nun über Bluetooth.");

}

void kommunikation(){
    if (Serial.available()) {
    BT.write(Serial.read());
  }
  if (BT.available()) {
    Serial.write(BT.read());
  }
  delay(25);
}