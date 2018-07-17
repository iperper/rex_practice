/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: currentMonitor.h

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 21 Jun 2018

* MODIFIED: Mon 16 Jul 2018 03:08:17 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

// The current version is 150A max.

/*
 * Load Maximum Current: ±50A, ±100A or ±150A three version.
 * Load Frequency Bandwidth: DC ~ 120 kHz.
 * Isolation Voltage: 4800V AC.
 * Sensitivity: 50A version ----- 40mV/A.
 *              100A version ---- 20mV/A.
 *              150A version ---- 13.3mV/A.
 * Operating Voltage: Regulated 5VDC, or 8 ~ 35VDC.
 * Operating Current: 20mA(max).
 * Load No Current Output Terminal Voltage: 2.5VDC. */

#ifndef CURRENT_HEADER
#define CURRENT_HEADER

#include <Arduino.h>

class CurrentMonitor{
  public:
    CurrentMonitor(int pin){sensor_pin = pin, sens_conv = 0.013;}; // the sens_conv needs to be changed for diff models
    CurrentMonitor(int pin, float sensitivity){sensor_pin = pin, sens_conv = sensitivity;};
    float getCurrent() const;
    float getPinVoltage() const;
    bool setRef(float reference);
    float getRef() {return (reference_voltage);};
    float getConv() {return (sens_conv);};
  private:
    int sensor_pin;
    float sens_conv;
    float reference_voltage = 5.0; 
};

#endif
