#include "module_buzzer.h"

void initBuzzer(uint8_t pin) {
#if USE_BUZZER
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  #if USE_SERIAL
    Serial.println(F("Buzzer initialized"));
  #endif
#endif
}
