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
        Serial.println("\n\nStart\n");
    #endif

    // WLAN initialisieren
    #ifdef AP_Mode


    #else
    WiFi.mode(WIFI_STA);
    WiFi.begin(Netzwerkname, Passwort);

    // Wait for connection
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      #ifdef Serialport_benutzen
        Serial.print(".");
      #endif
    }
    #ifdef Serialport_benutzen
      Serial.println("");
      Serial.print("verbunden mit: ");
      Serial.println(ssid);
      Serial.print("IP Adresse: ");
      Serial.println(WiFi.localIP());
    #endif


    #endif


    // Webserver initialisieren
    #ifdef WebServer_benutzen
// test

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


    //blinken
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
