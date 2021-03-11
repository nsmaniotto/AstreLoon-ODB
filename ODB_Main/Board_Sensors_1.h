/*
  Proto version of BalloonCore ODB code for the board Sensors 1
  19/08/2020
*/

//Include library and stuff
#include "Arduino.h"


// Define some data
#define SENSORS_1_BOARD_I2C_ADDRESS 8 //I2C adress of the board

//Define command
#define Sensors1_Test_Command_init "SES10000INIT0000" //Init test command. Should be use when we power one the board
#define COMMAND_Sensor1_BMP280_Tempeture  "A000000000000001" //For the exemple function


// Here we have the function related to the command
float Sensor1_BMP280_Tempeture_Kelvin(); // return pressure from pressure sensor 1 in hpa


