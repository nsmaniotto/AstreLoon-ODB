#include "Data.h"

#ifndef __ODB_HUMIDITYSENSOR_H

#define __ODB_HUMIDITYSENSOR_H

class HumiditySensor
{
  protected:

    int defaultHumidityUnit;
    Data lastHumidity;
  
  public:
  
    ~HumiditySensor();
    
    HumiditySensor();
    
    virtual Data fetchHumidity();
};

#endif // __ODB_HUMIDITYSENSOR_H
