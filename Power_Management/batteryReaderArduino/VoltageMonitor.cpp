/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: VoltageMonitor.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 23 Jun 2018

* MODIFIED: Tue 26 Jun 2018 03:38:38 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

//____________________________________________________________
//Procedure: getVoltage()
//Params: None
//Returns: Voltage read by voltage sensor object

#include "VoltageMonitor.h"

float VoltageMonitor::getVoltage() const
{
    float v_pin = getPinVoltage(); // gets voltage reading from pin on Arduino
    return (((float) res1 + res2)/res2 * v_pin);
}

float VoltageMonitor::getPinVoltage() const
{
  float v_pin = analogRead(sensor_pin)*(reference_voltage)/1023.0;
  return (v_pin);
}

bool VoltageMonitor::setRef(float reference)
{
  reference_voltage = reference;
  return (true);
  
}
