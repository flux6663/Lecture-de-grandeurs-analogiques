#include "moduleLTS.h"
#include <Arduino.h>

void configurerADC(uint8_t broche, uint8_t resolution, adc_attenuation_t attenuation)
{
    analogSetPinAttenuation(broche, attenuation);
    analogSetWidth(resolution);
}

uint32_t lireEntreeAnalogique(uint8_t brocheADC)
{
    return analogRead(brocheADC);
}

uint32_t lireEntreeAnalogique(uint8_t brocheADC)
{
    return analogReadMilliVolts(brocheADC);
}