#include "module_lcd.h"
#if USE_LCD
#include <LiquidCrystal.h>

LiquidCrystal lcd(LCD_RS_PIN, LCD_EN_PIN, LCD_D4_PIN, LCD_D5_PIN, LCD_D6_PIN, LCD_D7_PIN);
#endif

void initLCD() {
#if USE_LCD
  lcd.begin(16, 2);
  lcd.print(F("LCD initialized"));
  #if USE_SERIAL
    Serial.println(F("LCD initialized"));
  #endif
#endif
}