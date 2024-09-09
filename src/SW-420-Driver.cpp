#include "SW-420-Driver.h"

SW_420::SW_420(int D0)
{
    // set the D0 pin to recieve input
    this->D0 = D0; 
    pinMode(this->D0, INPUT);
}

bool SW_420::isVibrationDetected()
{
    // check if the D0 pin is set to HIGH or to LOW
    return digitalRead(this->D0);
}