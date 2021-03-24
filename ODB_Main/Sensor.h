#include "Data.h"

#ifndef __ODB_SENSOR_H

#define __ODB_SENSOR_H

class Sensor
{
  public:
  
    ~Sensor();
    
    Sensor();
    
    virtual Data* fetchDatas();
};

#endif // __ODB_SENSOR_H
