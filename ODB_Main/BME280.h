#include "Data.h"
#include "I2CSensor.h"
#include "HumiditySensor.h"
#include "PressureSensor.h"
#include "TemperatureSensor.h"

#ifndef __ODB_BME280_H

#define __ODB_BME280_H

class BME280: public I2CSensor, public HumiditySensor, public PressureSensor, public TemperatureSensor
{
  public:
  
    ~BME280();
    
    BME280();

    // Overriding Sensor::fetchDatas()
    Data* fetchDatas() override;

    // Overriding HumiditySensor::fetchHumidity()
    Data fetchHumidity() override;
    
    // Overriding PressureSensor::fetchPressure()
    Data fetchPressure() override;
    
    // Overriding TemperatureSensor::fetchTemperature()
    Data fetchTemperature() override;
};

#endif // __ODB_BME280_H
