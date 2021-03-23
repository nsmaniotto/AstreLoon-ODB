/*
  Proto version of BalloonCore ODB firmawre
  19/08/2020
  Code is organized in that ways:
  # ODB_Main.ino:        This is the "logic part" of the balloon. We define here general functions only (ex: Send data every 15s, If this then do this, etc...).
         -ODB.cpp  |
         -ODB.H    |
        #Boards_ODB_1:
               - Boards_ODB_1.h    | Here we define the interaction over the I2C bus beetween ODB and an specefied board X (It can be Sensors, Radio, GPS, etc).
               - Boards_ODB_1.cpp  | In this part, we should define function to have only "clear" result in return (like, pressure in hhPa as an float) so it can be easy to handle them in the ODB code.

*/

//Include library and stuff
#include "ODB.h"
#include "Board_Sensors_1.h"



void setup() {
  ODB_init();  //We init the feature of the ODB board
  // Sensors_1_init();
}

void loop() {
  MainSequence();
}

void MainSequence() {
  /*
     Here and exemple of an ballon Main sequence. It should be used for the "normal" ballon functioning (not recovery, emergency, etc).
  */
  char radio_packet [RADIO_PACKET_LENGTH];
  float Tempeture_1_K = Sensor1_BMP280_Tempeture_Kelvin(); // We obtain here tempeture data from "Sensor 1" board "BMP280" sensor in kelvin (float format)
  for (int i = 0; i < 4; i++) {
    radio_packet[i] = RADIO_CODE[i]; // We put here in the 4 fist bytes of the radio packet the ballon name
  }
  radio_packet[4] = int(Tempeture_1_K);
  // Radio1_SendPacket_AFK(radio_packet); //exemple of an "Send radio" format
}

void RecoverySequence() {
  /*
    Here and exemple of an ballon Recovery sequence. It should be used when the balloon have a problem (ex: low battery).
  */
}
