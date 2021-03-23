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
#include "Board_Sensors_1.h"
#include "ODB.h" //use I2C transmit protocol from the ODB code
#include <Wire.h>

/* Rule for naming function: 
 * If our board name is "Sensor_1", the sensor name "BMP280", the value to measure "tempeture" and the unit "kelvin", then the function is named:
 * Sensor1_BMP280_Tempeture_Kelvin
 * You can see the exemple bellow
 */

float Sensor1_BMP280_Tempeture_Kelvin(){
  char result_row [SLAVE_RESPONSE_LENGTH]; //This is the raw string with the result from the previous command. It cannont be changed.
  char command[16] = COMMAND_Sensor1_BMP280_Tempeture;
  ODB_Send_Command_I2C(SENSORS_1_BOARD_I2C_ADDRESS, command, result_row); // The result string is directly put in the previous array
  float temp_k = int(result_row[4]); //Here, the expected value is the 4th in the command result array. This is only an exemple
  return temp_k;  
}
