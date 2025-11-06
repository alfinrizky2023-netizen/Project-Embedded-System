#include <Arduino.h>
#include "submain.h"

void setup() {
#if USE_SERIAL
  initSerial(SERIAL_BAUD);
#endif

#if USE_SENSOR_DHT
  initSensorDHT(SENSOR_DHT_PIN);
#endif

#if USE_LCD
  initLCD();
#endif

#if USE_LED
  initLED(LED_PIN);
#endif

#if USE_BUZZER
  initBuzzer(BUZZER_PIN);
#endif

#if USE_OLED
  initOLED(OLED_SDA_PIN, OLED_SCL_PIN);
#endif

#if USE_SERIAL
  Serial.println(F("=== All components initialized ==="));
#endif
}

void loop() {
  // Kosong: hanya inisialisasi, tidak ada logic
}
