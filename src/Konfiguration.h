
#ifndef HardwareDefinitionen_h
#define HardwareDefinitionen_h

#include "Arduino.h"

#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>


#define Serialport_benutzen // auskommentieren wenn der Serialport nicht benutzt werden soll
#define WebServer_benutzen
#define TCP_Server_benutzen
#define TCP_Port    1337

#define Netzwerkname  sOnnOff
#define Passwort  Poweronoff

#define AP_Mode

#define LED1    13

//#define LED2        // Hardwareänderung nötig, eintragen mit welcher GPIO Pin Nummer die LED verbunden wurde

#define Knopf0  0

#define Relais  12


#endif
