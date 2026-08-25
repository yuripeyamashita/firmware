// Seeed XIAO ESP32-C6 + Wio-SX1262

// --------------------------------------------------
// Hardware
// --------------------------------------------------

#define BUTTON_PIN 9  // GPIO9 available for button

#define LED_PIN 15
#define LED_STATE_ON 0

#define HAS_SCREEN 0
#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

// --------------------------------------------------
// SX1262 LoRa Radio
// Wio-SX1262 stacked directly on XIAO
// --------------------------------------------------

#define USE_SX1262

// SPI
#define LORA_SCK   19
#define LORA_MISO  20
#define LORA_MOSI  18

// SX1262 control
#define LORA_CS    22
#define LORA_RESET 2
#define LORA_DIO1  1
#define LORA_BUSY  21

// Unused SX1262 DIO
#define LORA_DIO0 RADIOLIB_NC
#define LORA_DIO2 RADIOLIB_NC

// RadioLib SX126x mapping
#define SX126X_CS    LORA_CS
#define SX126X_DIO1  LORA_DIO1
#define SX126X_BUSY  LORA_BUSY
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
