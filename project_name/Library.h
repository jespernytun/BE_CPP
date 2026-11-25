// Library for our arduino project

#ifndef LIBRARY_H_
#define LIBRARY_H_

#include "rgb_lcd.h"

#include <string>

using namespace std;

// class for all types of devices in this project
class Peripheral {
protected:
  string name;
public:
  Peripheral(const string& name) : name(name) {}
  virtual ~Peripheral() {}
  // Tells us the type of peripheral we1re working with
  const string& getName() const { return name; }
};

// Default sensor type
class Sensor : public Peripheral {
protected:
  int pin;
  float sensor_value;

public:

  // Constructor for sensor type
  Sensor(const string& name, int pin) : Peripheral(name) {
    this->pin = pin;
    sensor_value = 0;
  }

  // function used to read value from sensor
  virtual float getValue()=0;

};

// Temp and Humidity not needed because included in SHT31.h

class NoiseSensor : public Sensor {
public:
  NoiseSensor(int pin) : Sensor("Noise", pin) {}
  // Returns a float representing noise level in dB
  float getValue() override;
  
};

class LightSensor : public Sensor {
public:
  LightSensor(int pin) : Sensor("Light", pin) {}
  // Returns a float representing light
  float getValue() override;
  
};

#endif
