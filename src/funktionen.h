
#ifndef funktionen_h
#define funktionen_h

#include <stdio.h>
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>

#define LED1_an digitalWrite(LED1,0);
#define LED1_aus digitalWrite(LED1,1);


#define LED2_an digitalWrite(LED2,0);
#define LED2_aus digitalWrite(LED2,1);


void testfunkion1();


String macToString(const unsigned char* mac);



#endif
