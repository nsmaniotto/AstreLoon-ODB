#include "Sensor.h"

#ifndef __ODB_ANALOGSENSOR_H

#define __ODB_ANALOGSENSOR_H

class AnalogSensor: public Sensor
{
  protected:
  
    int pin;
    
  public:
  
    ~AnalogSensor();
    
    AnalogSensor(int pin);
};

#endif // __ODB_ANALOGSENSOR_H
