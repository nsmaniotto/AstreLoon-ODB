#include "BME280.h"

BME280::~BME280()
{
  // TODO
}
    
BME280::BME280(int address): I2CSensor(address), HumiditySensor(2), PressureSensor(1), TemperatureSensor(2)
{
  // TODO: change default unit of humidity, pressure and temperature
}

Data* BME280::fetchDatas()
{
  // TODO

  return new Data();
}

Data BME280::fetchHumidity()
{
  // TODO

  return Data();
}

Data BME280::fetchPressure()
{
  // TODO

  return Data();
}
    
Data BME280::fetchTemperature()
{
  // TODO

  return Data();
}
