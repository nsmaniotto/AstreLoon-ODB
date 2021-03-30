#include "SDCard.h"

#include <stdlib.h>   /* malloc, free, rand */
#include <SD.h>       /* SD.begin, SD.open, SD.close */
#include "Constants.h"

SDCard::~SDCard()
{
  free(this->INSTANCE);
}
    
SDCard::SDCard()
{
  this->INSTANCE = malloc(sizeof(SDCard));

  // Initializing card on specific pin
  if (!SD.begin(SDCARD_PIN)) {
    // Initialization failed
    #ifdef ODB_DEBUG
      Serial.println("[" + __FILE__ + "](" + __LINE__ + "): SD card initialization on pin " + SDCARD_PIN + " failed");
    #endif
  }
}

SDCard* SDCard::getInstance()
{
  if (SDCard::INSTANCE == NULL)
  {
    SDCard::INSTANCE = new SDCard();
  }

  return SDCard::INSTANCE;
}

void SDCard::write(char* fileName, char* input)
{
  
}

char* SDCard::read(char* fileName)
{
  // TODO
  return "aaaaaaaa";
}
