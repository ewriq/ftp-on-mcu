#include "ESP8266FtpServer.h"
#include "ftp_server.h"

const char* FTP_USER = "ewriq";
const char* FTP_PASS = "passwordinewriq";

FtpServer server;

void startFTPServer() {
  server.begin(FTP_USER, FTP_PASS);
  Serial.println("ftp server already");
}

void handleFTPServer() {
  server.handleFTP();
}
