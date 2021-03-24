#include "Sensor.h"

#ifndef __ODB_I2CSENSOR_H

#define __ODB_I2CSENSOR_H

class I2CSensor: public Sensor
{
  protected:
  
    int address;
    
  public:
  
    ~I2CSensor();
    
    I2CSensor();
};

#endif // __ODB_I2CSENSOR_H
