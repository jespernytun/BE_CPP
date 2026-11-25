// Library.cpp

#include "Library.h"
#include <Arduino.h>
// Library for the temperature and humidity sensors

// Returns current noise level in dB
float NoiseSensor::getValue() {
  sensor_value = analogRead(pin);
  return sensor_value;
}

float LightSensor::getValue() {
  sensor_value = analogRead(pin);
  return sensor_value;
}
