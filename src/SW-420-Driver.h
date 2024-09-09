#ifndef SW_420_DRIVER_H
#define SW_420_DRIVER_H

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "wProgram.h"
#endif

/**
 * @brief An arduino device driver abstraction for the SW-420 Vibration Sensor
 * 
 * This is a driver for a vibration sensor. The only pin that is used is the D0 pin. The D0 pin takes Voltage as INPUT. If the voltage is HIGH, then vibration is detected, otherwise then vibration is not detected.
 * 
 * @param D0 The D0 input pin.
 */
class SW_420
{
    public:
        /**
         * @brief Sets the D0 to INPUT mode.
         * @param D0 The D0 input pin.
         */
        SW_420(int /*D0=*/D0);

        /**
         * @brief Determines if vibration is currently detected by the sensor
         * @return `true` if vibration is detected, `false` otherwise.
         */
        bool isVibrationDetected();

    private:
        int D0;
};

#endif