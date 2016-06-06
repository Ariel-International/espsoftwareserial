# EspSoftwareSerial

Implementation of the Arduino software serial library for the ESP8266

Same functionality as the corresponding AVR library but several instances can be active at the same time.
Speed up to 115200 baud is supported. The constructor also has an optional input buffer size.

Please note that due to the fact that the ESP always have other activities ongoing, there will be some inexactness in interrupt
timings. This may lead to bit errors when having heavy data traffic in high baud rates.

This fork adds attach(int receivePin, int transmitPin, bool inverse_logic = false, unsigned int buffSize = 64) method to allow pins definition at execution time, usually in setup(), allowing software setting of serial ports from EEPROM on startup.


