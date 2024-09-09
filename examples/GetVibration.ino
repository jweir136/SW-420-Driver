#include "SW-420-Driver.h"

#define D0 7

SW_420 *vibrationSensor;

void setup() {
    Serial.begin(9600);
    vibrationSensor = new SW_420(D0);
}

void loop() {
    Serial.println(vibrationSensor->isVibrationDetected());
    delay(100);
}