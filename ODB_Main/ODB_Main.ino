#include "Sensor.h"
#include "SDCard.h"

#define ODB_DEBUG

SDCard* sdCard;

void setup() {
  /*#ifdef ODB_DEBUG
    Serial.begin(9600);
  #endif*/

  // Open serial communications and wait for port to open
  Serial.begin(9600);
  
  while (!Serial) {
    ; // Wait for serial port to connect. Needed for native USB port only
  }

  // Initializating sdCard
  sdCard = SDCard::getInstance();
  //sdCard->init();
  
  // TODO
}

void loop() {
  // TODO
}
