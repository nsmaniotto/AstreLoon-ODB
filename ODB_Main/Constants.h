#ifndef __ODB_CONSTANTS_H

#define __ODB_CONSTANTS_H

// ODB's states and constants
#define ODB_MAX_NB_BOARDS         10
#define ODB_STATE_INITIALISATION  1
#define ODB_STATE_NORMAL_MODE     2
#define ODB_STATE_RECOVERY_MODE   3
#define ODB_STATE_EMERGENCY_MODE  4

// SD card constants
#define SDCARD_PIN    10

// Radio constants
#define RADIO_RFM95_CS                10 // Slave select pin
#define RADIO_RFM95_RST               9
#define RADIO_RFM95_INT               2 // Interrupt pin
#define RADIO_RF95_FREQ               915.0 // Change to 434.0 or other frequency, must match RX's freq! 
#define RADIO_RF95_MAX_WAIT_RESPONSE  100 // in ms

// Board types and constants
#define BOARD_MAX_NB_SENSORS  50
#define BOARD_TYPE_DEFAULT    0
#define BOARD_TYPE_SENSOR     1
#define BOARD_TYPE_RADIO      2
#define BOARD_TYPE_IRIDIUM    3

// Data units and constants
#define DATA_DEFAULT_HUMIDITY     -1. // unthinkable value
#define DATA_DEFAULT_PRESSURE     356000000000000 // 356GPa is the pressure at the center of Earth
#define DATA_DEFAULT_TEMPERATURE  -273.15 // Absolute zero
#define DATA_UNIT_CELSIUS         1
#define DATA_UNIT_KELVIN          2

#endif // __ODB_CONSTANTS_H
