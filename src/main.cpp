//
#include <Arduino.h>

void testfunkion1();

#pragma region setup
void setup() {
    // put your setup code here, to run once:
    delay(250);
    Serial.begin(74880);
    Serial.println("\n\nStart");
}
#pragma endregion

#pragma region loop
void loop() {
    // put your main code here, to run repeatedly:
    testfunkion1();
}
#pragma endregion 

