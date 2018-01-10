//
#include <Arduino.h>
#include "funktionen.h"
#include "HardwareDefinition.h"

#pragma region setup
void setup() {
    // put your setup code here, to run once:
    delay(150);
    pinMode(LED, OUTPUT);
    //Serial.begin(74880);
    //Serial.println("\n\nStart");
}
#pragma endregion

#pragma region loop
void loop() {
    // put your main code here, to run repeatedly:
    testfunkion1();

    //Serial.println("on");
    digitalWrite(LED,1);
    delay(800);

    //Serial.println("off");
    digitalWrite(LED,0);
    delay(400);

}
#pragma endregion
