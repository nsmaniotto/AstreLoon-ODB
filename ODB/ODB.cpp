/*
  Proto version of BalloonCore ODB firmawre
  19/08/2020
  Code is organized in that ways:
  - ODB_Main: -ODB.cpp  | This is the "logic part" of the balloon. We define here general functions only (ex: Send data every 15s, If this then do this, etc...).
              -ODB.H    |
         - Boards_X_ODB: - Boards_X_ODB.h    |   Here we define the interaction over the I2C bus beetween ODB and an specefied board X (It can be Sensors, Radio, GPS, etc).
                         - Boards_X_ODB.cpp  | In this part, we should define function to have only "clear" result in return (like, pressure in hhPa as an float) so it can be easy to handle them in the ODB code.

*/
//Include library and stuff
#include "ODB.h"
#include <Wire.h>


void ODB_init() {
  /*
    This part initialize the ODB firmawre main features, like:
    - Serial
    - I2C
    - etc
  */
  Serial.begin(9600);
  Serial.println("BalloonCore V0.1");
  Wire.begin();
  Serial.println("I2C init");
}


char ODB_Send_Command_I2C(byte I2C_address, char command[16], char *result) {
  /*
    This function send an I2C command to obtain data from an selected slave
    We first send the command: it's an 16 bytes format (thanks to the char format). Then it will request an answers as an 32byte (maximum I2C buffer size possible)
    So the slave will: Receive the command ==> Store it; Then it will received the requestFrom and use the stored command to obtain the data.
    the "*result" in a pointer
  */
  volatile char buf [SLAVE_RESPONSE_LENGTH]; //Buffer for data received from I2C;
  Wire.beginTransmission(I2C_address);
  Wire.write(command);
  if (Wire.endTransmission () == 0)
    Serial.println("The command is send");
  else
    Serial.println("Error in sending the command");
  Wire.endTransmission();

  delay(100); // We let a bit of time to the slave to handle the previous command
  Wire.requestFrom(I2C_address, SLAVE_RESPONSE_LENGTH ); // We request the slave located at I2C_address to respond to our previous command with an message of SLAVE_RESPONSE_LENGTH long bytes.
  for (byte i = 0; i < SLAVE_RESPONSE_LENGTH; i++)
  {
    buf[i] = Wire.read ();   // We recup the data on the previous buffer
  }
  for (byte i = 0; i < SLAVE_RESPONSE_LENGTH; i++) {
    result[i] = buf[i];  // We put the data of the buffer in the array (through the pointers ==> "*" this things)
  }
}



