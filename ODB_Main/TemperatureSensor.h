#include "Data.h"

#ifndef __ODB_TEMPERATURESENSOR_H

#define __ODB_TEMPERATURESENSOR_H

class TemperatureSensor
{
  protected:

    int defaultTemperatureUnit;
    Data lastTemperature;
  
  public:
  
    ~TemperatureSensor();
    
    TemperatureSensor(int temperatureUnit);
    
    virtual Data fetchTemperature();
};

#endif // __ODB_TEMPERATURESENSOR_H
