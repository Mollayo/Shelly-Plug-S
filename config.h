#ifndef CONFIG
#define CONFIG


// For the Shelly 1PM
#define SHELLY_BUILTIN_LED 0      // The blue LED
#define SHELLY_SW1 13
#define LIGHT_RELAY 15            // Relay for swtiching on/off the light


  
namespace helpers {

  bool isInteger(const char* str, uint8_t maxLength=10);
  bool convertToInteger(const char* str, uint16_t &val, uint8_t maxLength=10);
  const char* hexToStr(const uint8_t *s, uint8_t len);
}

#endif
