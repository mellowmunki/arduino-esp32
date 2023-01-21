#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define WIFI_Kit_32_V3 true
#define DISPLAY_HEIGHT 64
#define DISPLAY_WIDTH 128

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS 40
#define NUM_ANALOG_INPUTS 16

#define analogInputToDigitalPin(p) (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p) (((p)<40)?(p):-1)
#define digitalPinHasPWM(p) (p < 34)

static const uint8_t LED_BUILTIN = 35; // was 25
#define BUILTIN_LED LED_BUILTIN // backward compatibility
#define LED_BUILTIN LED_BUILTIN

static const uint8_t KEY_BUILTIN = 0;

static const uint8_t TX = 44; // was 1
static const uint8_t RX = 43; //was 3

static const uint8_t SDA = 36; //was 21
static const uint8_t SCL = 18; //was 22

static const uint8_t SS = 8; //was 5
static const uint8_t MOSI = 10; //was 23
static const uint8_t MISO = 11; //was 19
static const uint8_t SCK = 9; //was 18

static const uint8_t A0 = 36; //
static const uint8_t A1 = 37; //
static const uint8_t A2 = 38; //
static const uint8_t A3 = 39; //
static const uint8_t A4 = 32; //
static const uint8_t A5 = 33; //
static const uint8_t A6 = 34; //
static const uint8_t A7 = 35; //

static const uint8_t A10 = 4; //
static const uint8_t A11 = 0; //
static const uint8_t A12 = 2; //
static const uint8_t A13 = 15; //
static const uint8_t A14 = 13; //
static const uint8_t A15 = 12; //
static const uint8_t A16 = 14; //
static const uint8_t A17 = 27; //
static const uint8_t A18 = 25; //
static const uint8_t A19 = 26; //

static const uint8_t T0 = 4; //
static const uint8_t T1 = 0; //
static const uint8_t T2 = 2; //
static const uint8_t T3 = 15; //
static const uint8_t T4 = 13; //
static const uint8_t T5 = 12; //
static const uint8_t T6 = 14; //
static const uint8_t T7 = 27; //
static const uint8_t T8 = 33; //
static const uint8_t T9 = 32; //

static const uint8_t DAC1 = 25; //
static const uint8_t DAC2 = 26; //

static const uint8_t Vext = 36; //was 21
static const uint8_t LED = 35; //was 25
static const uint8_t RST_OLED = 21; // was 16
static const uint8_t SCL_OLED = 18; //
static const uint8_t SDA_OLED = 17; //

#endif /* Pins_Arduino_h */
