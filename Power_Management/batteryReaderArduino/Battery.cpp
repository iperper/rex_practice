/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: Battery.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 22 Jun 2018

* MODIFIED: Mon 16 Jul 2018 03:29:18 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#ifndef BATTERY_HEADER
#define BATTERY_HEADER

#include "Battery.h"

int Battery::updateVals(float voltReading, float currentReading, unsigned int loop_time) 
{
  curr_amps = currentReading;
  curr_mAh -= currentReading*loop_time*currentFactor(currentReading)/1000;
  curr_voltage = voltReading;
  return (curr_mAh/batt_mAh*100);
} 

bool Battery::low_battery() const
{
  if (curr_mAh < min_SoC*batt_mAh || curr_voltage < min_voltage){
    return (true); 
  }
  
  else 
    return(false); 
}

#endif
