// Library for our arduino project

#ifndef LIBRARY_H_
#define LIBRARY_H_

// Default sensor 
class Sensor {
protected:
  int pin;
  float sensor_value;
  
public:

  // Constructor for sensor type
  Sensor(int pin);

  // function used to read value from sensor
  virtual float getValue()=0;

};

class TemperatureSensor : public Sensor {

  // Definition of the virtual function used to read values from the sensor
  // Returns a float representing the temperature in celcius
  float getValue() override;

};

class HumiditySensor : public Sensor {

  // Returns the a float representing humidity captured in the air in %
  float getValue() override;
  
};

class NoiseSensor : public Sensor {

  // Returns a float representing noise level in dB
  float getValue() override;
  
};

class LightSensor : public Sensor {

  // Returns a float representing light
  float getValue() override;
  
};


#endif
