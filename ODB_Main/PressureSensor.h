#include "Data.h"

#ifndef __ODB_PRESSURESENSOR_H

#define __ODB_PRESSURESENSOR_H

class PressureSensor
{
  protected:

    int defaultPressureUnit;
    Data lastPressure;
  
  public:
  
    ~PressureSensor();
    
    PressureSensor();
    
    virtual Data fetchPressure();
};

#endif // __ODB_PRESSURESENSOR_H
