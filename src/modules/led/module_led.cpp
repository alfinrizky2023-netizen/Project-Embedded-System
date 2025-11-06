#include "module_led.h"

void initLED(uint8_t pin) {
#if USE_LED
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  #if USE_SERIAL
    Serial.println(F("LED initialized"));
  #endif
#endif
}
