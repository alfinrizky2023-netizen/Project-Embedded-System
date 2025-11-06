#include "module_serial.h"

void initSerial(int baud) {
#if USE_SERIAL
  Serial.begin(baud);
  delay(2000);
  Serial.println(F("=== System Booting ==="));
#endif
}
