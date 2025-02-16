#ifndef usSensor_h
#define usSensor_h

#include <Arduino.h>


class usSensor{
    private:
        uint8_t trigger,echo;
    public:
        void begin(uint8_t _trigger, uint8_t _echo);
        float read();
};
#endif