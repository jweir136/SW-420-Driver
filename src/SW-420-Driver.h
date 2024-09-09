#ifndef SW_420_DRIVER_H
#define SW_420_DRIVER_H

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "wProgram.h"
#endif

class SW_420
{
    public:
        SW_420(int /*D0=*/D0);

        bool isVibrationDetected();

    private:
        int D0;
}

#endif