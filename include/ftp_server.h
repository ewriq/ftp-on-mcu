#ifndef FTP_SERVER_H
#define FTP_SERVER_H
#include "ESP8266FtpServer.h"

extern FtpServer server;
void startFTPServer();
void handleFTPServer();

#endif
