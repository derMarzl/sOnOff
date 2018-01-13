//
#include <stdio.h>
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include "funktionen.h"
#include "Konfiguration.h"

#pragma region setup
void setup() {
    // put your setup code here, to run once:
    delay(150);

    // IO-Pinne initialisieren
    pinMode(Relais, OUTPUT);
    pinMode(Knopf0, INPUT);
    pinMode(LED1, OUTPUT);
    #ifdef LED2
        pinmode(LED2, OUTPUT);
    #endif

    // Serialport initialisieren
    #ifdef Serialport_benutzen
        Serial.begin(74880);
        Serial.println("\n\nStart");
    #endif

    // WLAN initialisieren



    // Webserver initialisieren
    #ifdef WebServer_benutzen

    #endif


    // TCPserver initialisieren
    #ifdef TCP_Server_benutzen

    #endif

}
#pragma endregion

#pragma region loop
void loop() {
    // put your main code here, to run repeatedly:
    testfunkion1();

    #ifdef Serialport_benutzen
        Serial.println("on");
    #endif
    digitalWrite(LED1,1);
    delay(800);

    #ifdef Serialport_benutzen
        Serial.println("off");
    #endif
    digitalWrite(LED1,0);
    delay(400);

}
#pragma endregion
