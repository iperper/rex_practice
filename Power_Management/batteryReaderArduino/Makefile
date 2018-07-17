# where you installed the Arduino app
ARDUINO_DIR = /usr/bin/arduino-1.8.5/hardware/arduino/avr

all: CurrentMonitor VoltageMonitor batteryMonitor

CurrentMonitor: CurrentMonitor.cpp CurrentMonitor.h
	g++ -I$(ARDUINO_DIR) -o CurrentMonitor CurrentMonitor.cpp $(ARDUINO_DIR)/cores/arduino/Arduino.h 

VoltageMonitor: VoltageMonitor.cpp VoltageMonitor.h
	g++  -Iusr/bin/arduino-1.8.5/hardware/arduino/avr/course/arduino  -o VoltageMonitor VoltageMonitor.cpp

bat_source = batteryMonitor.cpp VoltageMonitor.cpp CurrentMonitor.cpp
bat_headers = VoltageMonitor.h CurrentMonitor.h

batteryMonitor: $(bat_source) $(bat_headers)
	g++ -o batteryMonitor $(bat_source)
