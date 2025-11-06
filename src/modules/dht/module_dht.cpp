#include "module_dht.h"

void initSensorDHT(uint8_t pin) {
#if USE_SENSOR_DHT
  pinMode(pin, INPUT);
  #if USE_SERIAL
    Serial.println(F("DHT Sensor initialized"));
  #endif
#endif
}
