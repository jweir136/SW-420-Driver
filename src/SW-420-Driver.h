#ifndef SW_420_DRIVER_H
#define SW_420_DRIVER_H

class SW_420
{
    public:
        SW_420(int /*D0=*/D0);

        bool isVibrationDetected();

    private:
        int D0;
}

#endif