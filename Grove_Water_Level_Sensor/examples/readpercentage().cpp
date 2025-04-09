#include <waterlevelsensor.h>

WaterLevelSensor sensor = WaterLevelSensor();

void setup() {
  Serial.begin(9600);
}

void loop() {
 
  int waterLevel = sensor.readPercentage();
  
  Serial.print(waterLevel);
  Serial.println("%");

  delay(25);
 } 

