#include <waterlevelsensor.h>

WaterLevelSensor sensor = WaterLevelSensor();

void setup() {
  Serial.begin(9600);
}

void loop() {
 
  float watercm = sensor.readCM();

  Serial.print(watercm);
  Serial.println("cm");

  delay(25);
 } 
