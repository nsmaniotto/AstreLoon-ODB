#include "Sensor.h"

#define ODB_DEBUG

void setup() {
  /*#ifdef ODB_DEBUG
    Serial.begin(9600);
  #endif*/

  // Open serial communications and wait for port to open
  Serial.begin(9600);
  
  while (!Serial) {
    ; // Wait for serial port to connect. Needed for native USB port only
  }
  
  // TODO
}

void loop() {
  // TODO
}
