#include "moduleLTS.h"
#include "ADC_LUT.h"
#include <Arduino.h>

void configurerADC(uint8_t brocheADC, uint8_t resolution, adc_attenuation_t attenuation)
{
    pinMode(brocheADC, INPUT);
    analogSetWidth(resolution);
    analogSetPinAttenuation(brocheADC, attenuation);
    dac_output_voltage(DAC_CHANNEL_1, 0);
}

uint16_t lireEntreeAnalogique(uint8_t brocheADC)
{
    uint16_t valeur = analogRead(brocheADC);
    return valeur;
}

float lireEntreeAnalogiqueMilliVolte(uint8_t brocheADC)
{
    return lireEntreeAnalogique(brocheADC) * (3.3 - 0) / (4095);
}