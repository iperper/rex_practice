/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: batteryReader.ino

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 21 Jun 2018

* MODIFIED: Mon 16 Jul 2018 03:29:16 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/
/*Lio Ion Battery: Best operated between 30 and 80 SoC
 * Lead Acid Battery: Best operated above    
 * */

#include <stdio.h>
#include "VoltageMonitor.h"
#include "CurrentMonitor.h"
#include "Battery.h"
int current_pin = 4;
int volt_pin = 5;

VoltageMonitor voltSens(volt_pin);
CurrentMonitor currentSens(current_pin);

float min_SoC = 0.93; //SET!!,the lowest state of charge the battery should get
float min_voltage = 11.5; //SET!, lowest voltage for battery

float batt_charged_volts = 13.5; //voltage of battery when fully charged
int batt_mAh = 55000; // initial  mAh of battery at 20 hour discharge rate
float discharge_const = 1.7;  // the exponential rate of battery discharge based on


// current (ie. twice the current discharge, the mAh capacity goes down by some amount
Battery battery1("Battery 1", batt_mAh, batt_charged_volts, min_SoC, min_voltage, discharge_const);

unsigned long prev_time = 0;
unsigned int loop_time = 100; //time between loops in milliseconds

void setup() {
  pinMode(current_pin, INPUT);
  pinMode(volt_pin, INPUT);
  Serial.begin(9600);
  currentSens.setRef(4.94);
  voltSens.setRef(4.94);
  
  int *r_vals;
  r_vals =  voltSens.getResistors();
  Serial.print("Voltage Sensor Resistors: R1 = "); Serial.print(*(r_vals)); 
  Serial.print(" R2 = "); Serial.println(*(r_vals+1));
  Serial.print("Current Sensor Reference Voltage: "); Serial.println(currentSens.getRef(), 5);
  Serial.print("Current Sensor Conversion Factor (V/A)"); Serial.println(currentSens.getConv(), 5);
  Serial.print("Voltage Sensor Reference Voltage: "); Serial.println(voltSens.getRef(), 5);
  Serial.println("Setup Complete");
  delay(2000);
  Serial.println("$Battery | Current | Voltage | mAh Remaining | Percent Remaining | Status | \n");
  
}

bool update(){
  bool batt_low = battery1.low_battery();

  if (millis()-prev_time > loop_time){
    float volts = voltSens.getVoltage();
    float current = currentSens.getCurrent();
    int percent_charge = battery1.updateVals(volts, current, loop_time);
    char* batt_status = "LOW";
    if (not batt_low)
      batt_status = "OK";
    char output[130];
  // sprintf(output, "%s | %s A | %s V(current) | %s V | %s V (voltage) | %s mAh | %i %% | %s |", battery1.getName(),
  // String(current,3).c_str(), String(currentSens.getPinVoltage(), 4).c_str(), String(volts, 2).c_str(),
  // String(voltSens.getPinVoltage(), 4).c_str(), String(battery1.getCharge()).c_str(),
    //percent_charge, batt_status);  
    sprintf(output, "$ %s | %s A | %s V | %s mAh | %i %% | %s | \n",\
    battery1.getName(), String(current,3).c_str(), String(volts, 2).c_str(),\
     String(battery1.getCharge()).c_str(),percent_charge, batt_status); 

    Serial.print(output);
    prev_time = millis();
    }

  return (batt_low);
}


void loop() {
  update();
}

