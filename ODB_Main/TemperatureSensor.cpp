#include "TemperatureSensor.h"

#include "Constants.h"

TemperatureSensor::~TemperatureSensor()
{
  // TODO
}
    
TemperatureSensor::TemperatureSensor(int temperatureUnit)
{
  this->defaultTemperatureUnit = temperatureUnit;
  this->lastTemperature = Data(DATA_DEFAULT_TEMPERATURE, this->defaultTemperatureUnit);
}

// Data TemperatureSensor::fetchTemperature() is abstract and must be defined by specialized classes
