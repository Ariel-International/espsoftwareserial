
#include <SoftwareSerial.h>

SoftwareSerial swSer;     //create global object

void setup() {
  byte rxPin = 14;
  byte txPin = 12;
  swSer.attach(rxPin, txPin, false, 256);
  Serial.begin(115200);
  swSer.begin(115200);

  Serial.println("\nSoftware serial test started");

  for (char ch = ' '; ch <= 'z'; ch++) {
    swSer.write(ch);
  }
  swSer.println("");

}

void loop() {
  while (swSer.available() > 0) {
    Serial.write(swSer.read());
  }
  while (Serial.available() > 0) {
    swSer.write(Serial.read());
  }

}
