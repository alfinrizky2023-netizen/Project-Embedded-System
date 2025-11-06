#pragma once
#include <Arduino.h>

// ========================
// Pilih salah satu project
// ========================
#define PROJECT_STUDI1   // Arduino UNO: DHT11 + LCD + LED
// #define PROJECT_STUDI2     // ESP32 Devkit: DHT22 + OLED + Buzzer

// ========================
// Pilih tipe sensor DHT
// ========================
#define DHT_TYPE DHT11
// #define DHT_TYPE DHT22

#ifndef DHT_TYPE
  #error "Pilih tipe DHT sensor: DHT11 atau DHT22"
#endif

// ========================
// Konfigurasi berdasarkan project
// ========================
#if defined(PROJECT_STUDI1)
  #define TARGET_UNO
  #define USE_SENSOR_DHT   1
  #define USE_LCD          1
  #define USE_LED          1
  #define USE_BUZZER       0
  #define USE_OLED         0
  #define USE_SERIAL       1
  #define SERIAL_BAUD      9600

  #define SENSOR_DHT_PIN   2
  #define LCD_RS_PIN       7
  #define LCD_EN_PIN       8
  #define LCD_D4_PIN       9
  #define LCD_D5_PIN       10
  #define LCD_D6_PIN       11
  #define LCD_D7_PIN       12
  #define LED_PIN          13

#elif defined(PROJECT_STUDI2)
  #define TARGET_ESP32
  #define USE_SENSOR_DHT   1
  #define USE_OLED         1
  #define USE_BUZZER       1
  #define USE_LCD          0
  #define USE_LED          0
  #define USE_SERIAL       1
  #define SERIAL_BAUD      115200

  #define SENSOR_DHT_PIN   4
  #define BUZZER_PIN       16
  #define OLED_SDA_PIN     21
  #define OLED_SCL_PIN     22

#else
  #error "Pilih project yang akan digunakan!"
#endif
