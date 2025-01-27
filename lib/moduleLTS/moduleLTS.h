#ifndef _MODULELTS_H_
#define _MODULELTS_H_

#include <Arduino.h>
#include <driver/dac.h>

#define ADC_WIDTH_BIT_12 12
#define BROCHE_TRIMMER_1 39
#define BROCHE_TRIMMER_2 36

void configurerADC(uint8_t brocheADC, uint8_t resolution = ADC_WIDTH_BIT_12, adc_attenuation_t attenuation = ADC_11db);

float lireEntreeAnalogiqueMilliVolte(uint8_t brocheADC);
uint16_t lireEntreeAnalogique(uint8_t brocheADC);

#endif