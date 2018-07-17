/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: currentMonitor.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 21 Jun 2018

* MODIFIED: Tue 26 Jun 2018 03:38:43 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#include "CurrentMonitor.h"

float CurrentMonitor::getCurrent() const
{
  float pin_val = getPinVoltage();
  float amps = ((pin_val-(reference_voltage/2.0))/sens_conv); //change in voltage from baseline divided by sensitivity
  if (amps < 0)
    amps = 0.0;
  return (amps);
}

float CurrentMonitor::getPinVoltage() const
{ 
  return (analogRead(sensor_pin)*(reference_voltage)/1023.0);

}

bool CurrentMonitor::setRef(float reference)
{
  reference_voltage = reference;
  return (true);  
}
