#include "wifi_setup.h"
#include "sd_setup.h"
#include "ftp_server.h"
#include <core_esp8266_features.h>
#include <HardwareSerial.h>


void setup() {
  Serial.begin(9600);
  Serial.println("\n===== ESP8266 FTP Server =====");

  connectWiFi();

  if (!initSDCard()) {
    Serial.println("sd not found.");
    while (true) delay(1000);
  }

  startFTPServer();
}

void loop() {
  handleFTPServer();
}
