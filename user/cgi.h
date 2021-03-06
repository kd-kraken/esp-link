#ifndef CGI_H
#define CGI_H

#include "httpd.h"

int cgiLed(HttpdConnData *connData);
int tplLed(HttpdConnData *connData, char *token, void **arg);
int tplCounter(HttpdConnData *connData, char *token, void **arg);
int printNav(char *buff);
void ICACHE_FLASH_ATTR printHead(HttpdConnData *connData);
int ICACHE_FLASH_ATTR printSysInfo(char *buff, char *token);

#endif
