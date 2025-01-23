#ifndef _ECRANTI2C_H_
#define _ECRANTI2C_H_

#include <Arduino.h>

#define BROCHE_SDA_0 21
#define BROCHE_SCL_0 22

#define ADRESSE_OLED 0x3C

#define LARGEUR_OLED 128
#define HAUTEUR_OLED 64
#define OLED_RESET -1

#define TAILLE_CARATHERE 1
#define LIGNE_1 0
#define LIGNE_2 1
#define LIGNE_3 2
#define LIGNE_4 3

void configurerOLed();
void afficher(byte ligne, String texte);
void effacerAfficheur();
void afficherAfficheur();

#endif