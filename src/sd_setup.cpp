#include <SD.h>
#include <SPI.h>
#include "sd_setup.h"

#define SD_CS_PIN D8

bool initSDCard() {
  Serial.println("sd for checgking...");
  if (!SD.begin(SD_CS_PIN)) {
    return false;
  }
  Serial.println("sd alredy!");
  return true;
}
