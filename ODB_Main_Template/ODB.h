/*
  Proto version of BalloonCore ODB firmawre
  19/08/2020
*/

//Include library and stuff
#include "Arduino.h"

/*Here we defined the boards used in the balloon: Note: Using "#define" code make them define before
  compilations. So the compiler will replace any mention of it by is value at compile time.
*/
#define Board_Sensors 1
#define Board_RadioGPS 1
#define Board_Power 1


//Here we defined "main" constraint about the I2C protocol
#define COMMAND_LENGTH_STANDART 7 //Size (in bytes) of the standart command send with I2C to Slave boards
#define SLAVE_RESPONSE_LENGTH 32 //Size (in bytes) of the usual response send by the slave after the command

//Here we defined cste about the radio packet to send
#define RADIO_CODE "FXAA" // We defined here the name of the ballon (indicatif radio), not alaways needed
#define RADIO_PACKET_LENGTH 32 // Length of the radio packet in bytes

// Function declaration
void ODB_init();
char ODB_Send_Command_I2C(byte I2C_address, char command[16], char *result);

