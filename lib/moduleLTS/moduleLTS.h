#ifndef _MODULELTS_H_
#define _MODULELTS_H_

#include <Arduino.h>

#define RESOLUTION_ADC1 12
#define BROCHE_TRIMMER_1 39
#define BROCHE_TRIMMER_2 36

void configurerADC(uint8_t broche, uint8_t resolution = RESOLUTION_ADC1, adc_attenuation_t attenuation = ADC_0db);

uint32_t lireEntreeAnalogique(uint8_t broche);
uint32_t lireEntreeAnalogique(uint8_t broche);

#endif