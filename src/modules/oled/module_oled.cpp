#include "module_oled.h"

void initOLED(uint8_t sda, uint8_t scl) {
#if USE_OLED
  // Hanya inisialisasi sederhana, tanpa library OLED
  #if USE_SERIAL
    Serial.println(F("OLED display initialized"));
  #endif
#endif
}
