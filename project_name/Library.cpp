// Library.cpp

#include "Library.h"
#include <Arduino.h>
// Library for the temperature and humidity sensors
#include "SHT31.h"
#include <wire.h>


#define PIN_SHT31 1

// This function works as a general constructor for all sensor
// Returns current temperature in celcius

float TemperatureSensor::getValue() {
  // THE SHT31 IS I2C THIS NEEDS SOME MORE COMPLICATED STUFF
  return sht.getTemperature();
}

// Returns the current humidity percentage
float HumiditySensor::getValue() {
  // AS STATED
  return sht.getHumidity();
}

// Returns current noise level in dB
NoiseSensor::getValue() {
  sensor_value = analogRead(pin);
  return sensor_value;
}

LightSensor::getValue() {
  sensor_value = analogRead(pin);
  return sensor_value;
}
