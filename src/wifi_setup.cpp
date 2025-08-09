#include <ESP8266WiFi.h>
#include "wifi_setup.h"

const char* WIFI_SSID     = "ewriq";
const char* WIFI_PASSWORD = "f9663ddc";

void connectWiFi() {
  Serial.printf("wifi connettting : %s\n", WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  uint8_t retry = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    if (++retry > 60) {
      Serial.println("\nwifi connection fatal error!");
      return;
    }
  }
  Serial.printf("\nwifi connected! IP: %s\n", WiFi.localIP().toString().c_str());
}
