/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: VoltageMonitor.h

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 21 Jun 2018

* MODIFIED: Tue 26 Jun 2018 03:38:37 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#ifndef VOLTAGE_HEADER
#define VOLTAGE_HEADER

#include <Arduino.h>

class VoltageMonitor{
    public:
      VoltageMonitor(int pin){sensor_pin = pin, res1 = 30000, res2 = 7500;};
      VoltageMonitor(int pin, int r1, int r2){sensor_pin = pin, res1 = r1, res2 = r2;};
      float getVoltage() const;
      float getPinVoltage() const;
      bool setRef(float reference);
      int * getResistors() {static int vals[2]={res1, res2}; return vals;};
      float getRef() const {return (reference_voltage);};
    private:
      int res1, res2, sensor_pin;
      float reference_voltage = 5.0;
};

#endif
