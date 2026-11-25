// Library.cpp

#include "Library.h"
#include <Arduino.h>
// Library for the temperature and humidity sensors
#include "SHT31.h"
#include <wire.h>
#include <TempAndHumi.h>


#define PIN_SHT31 1

SHT_31::SHT_31(int pin1, int pin2) {
  this->pin1 = pin1;
  this->pin2 = pin2;
}

float getTemperature() {
  return sht.getTemperature();
}

float getHumidity() {
  return sht.getTemperature();
}
