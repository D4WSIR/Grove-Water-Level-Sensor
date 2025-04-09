#include "Arduino.h"
#include <Wire.h>

class WaterLevelSensor {
  public:

  WaterLevelSensor();

  int readPercentage();
  float readCM();
  
  private:
  
  uint8_t getTouchedSections(); //microcontrollers prefer the uint8_t type insted of int
  
};