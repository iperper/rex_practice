/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: Battery.h

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 22 Jun 2018

* MODIFIED: Tue 26 Jun 2018 03:38:32 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/
//#include <string>
#include <Arduino.h>
#include <math.h>

class Battery{
  public: 
    Battery(char* batt_name, int mAh, float charged_v, float minSoC, float minV, \
        float constant) \
    {batt_mAh = mAh, curr_mAh = (float) mAh, charged_volts = charged_v, min_SoC = minSoC,\
        min_voltage = minV, name = batt_name;}; 
    Battery(char* batt_name, int mAh) {batt_mAh = mAh, curr_mAh = float (mAh), \
      charged_volts = 14.2, min_SoC = 0.3, min_voltage = 11.5, name = batt_name;};
    ~Battery(){};

    float getVoltage() const {return (curr_voltage);};
    float getCharge() const {return (curr_mAh); };
    char* getName() const {return (name);};
    int updateVals(float voltReading, float currentReading, unsigned int loop_time); 
    bool low_battery() const; // true if battery is low
    float currentFactor(float millamps) const \
     {return pow (millamps/(batt_mAh/20),discharge_const);}
  
  private: 
    float curr_mAh, min_SoC, min_voltage, charged_volts, discharge_const; 
    int batt_mAh; 
    float curr_voltage = 0;
    float curr_amps = 0; 
    char* name;
};
