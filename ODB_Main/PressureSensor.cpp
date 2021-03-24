#include "PressureSensor.h"

#include "Constants.h"

PressureSensor::~PressureSensor()
{
    // TODO
}
    
PressureSensor::PressureSensor(int pressureUnit)
{
  this->defaultPressureUnit = pressureUnit;
  this->lastPressure = Data(DATA_DEFAULT_PRESSURE, this->defaultPressureUnit);
}
    
// Data PressureSensor::fetchPressure() is abstract and must be defined by specialized classes
