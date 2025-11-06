#pragma once
#include <Arduino.h>
#include "config/config.h"

// Inisialisasi fungsi modular
#if USE_SENSOR_DHT
  void initSensorDHT(uint8_t pin);
#endif

#if USE_LCD
  void initLCD();
#endif

#if USE_LED
  void initLED(uint8_t pin);
#endif

#if USE_BUZZER
  void initBuzzer(uint8_t pin);
#endif

#if USE_OLED
  void initOLED(uint8_t sda, uint8_t scl);
#endif

#if USE_SERIAL
  void initSerial(int baud);
#endif
