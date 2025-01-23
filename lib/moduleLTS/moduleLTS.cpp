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
    // int calibratedReading = (int)ADC_LUT[valeur];
    return valeur;
}

uint32_t lireEntreeAnalogiqueMilliVolte(uint8_t brocheADC)
{
    return analogReadMilliVolts(brocheADC);
}