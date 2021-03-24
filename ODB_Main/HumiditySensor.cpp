#include "HumiditySensor.h"

#include "Constants.h"

 HumiditySensor::~HumiditySensor()
{
  // TODO 
}
    
HumiditySensor::HumiditySensor(int humidityUnit)
{
  this->defaultHumidityUnit = humidityUnit;
  this->lastHumidity = Data(DATA_DEFAULT_HUMIDITY, this->defaultHumidityUnit);
}
    
// Data HumiditySensor::fetchHumidity() is abstract and must be defined by specialized classes
