#include "Radio.h"

#include <SPI.h>
#include <stdlib.h>   /* malloc, free, rand */
#include <string.h>
#include "Constants.h"

Radio* Radio::INSTANCE = NULL;

Radio::~Radio()
{
  free(this->INSTANCE);
  delete this->rf95;
}
    
Radio::Radio()
{
  this->INSTANCE = malloc(sizeof(Radio));
  
  // Singleton instance of the radio driver
  this->rf95 = new RH_RF95(RADIO_RFM95_CS, RADIO_RFM95_INT);

  /* START: RADIO INIT */
  pinMode(RADIO_RFM95_RST, OUTPUT);
  digitalWrite(RADIO_RFM95_RST, HIGH);
  delay(100);

  // Manual reset
  digitalWrite(RADIO_RFM95_RST, LOW);
  delay(10);
  digitalWrite(RADIO_RFM95_RST, HIGH);
  delay(10);

  if(!this->rf95->init())
  {
    #ifdef ODB_DEBUG
      Serial.println("#ERROR#[" + __FILE__ + "](" + __LINE__ + "): LoRa radio init failed");
    #endif
  }
  else
  {
    #ifdef ODB_DEBUG
      Serial.println("#SUCCESS#[" + __FILE__ + "](" + __LINE__ + "): LoRa radio init OK");
    #endif

    // Defaults after init are 434.0MHz, modulation GFSK_Rb250Fd250, +13dbM
    if (!this->rf95->setFrequency(RADIO_RF95_FREQ))
    {
      #ifdef ODB_DEBUG
        Serial.println("#ERROR#[" + __FILE__ + "](" + __LINE__ + "): LoRa radio set frequency failed");
      #endif
    }
    else
    {
      #ifdef ODB_DEBUG
        Serial.println("#SUCCESS#[" + __FILE__ + "](" + __LINE__ + "): LoRa radio set frequency to " + RADIO_RF95_FREQ + " OK");
      #endif
    }
  }

  // Defaults after init are 434.0MHz, 13dBm, Bw = 125 kHz, Cr = 4/5, Sf = 128chips/symbol, CRC on
  
  // The default transmitter power is 13dBm, using PA_BOOST.
  // If you are using RFM95/96/97/98 modules which uses the PA_BOOST transmitter pin, then // you can set transmitter powers from 5 to 23 dBm:
  rf95->setTxPower(23, false);
  /* END: RADIO INIT */
}

Radio* Radio::getInstance()
{
  if (Radio::INSTANCE == NULL)
  {
    Radio::INSTANCE = new Radio();
  }

  return Radio::INSTANCE;
}

void Radio::send(char* data)
{
  // TODO
}
