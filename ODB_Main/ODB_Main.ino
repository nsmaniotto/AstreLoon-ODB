#include "Sensor.h"
#include "Radio.h"
#include "SDCard.h"

#define ODB_DEBUG

Radio* radio;
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

  // Initializating radio
  radio = Radio::getInstance();
  //radio.init();

  // Initializating sdCard
  sdCard = SDCard::getInstance();
  //sdCard->init();
  
  // TODO
}

void loop() {
  // TODO
}
