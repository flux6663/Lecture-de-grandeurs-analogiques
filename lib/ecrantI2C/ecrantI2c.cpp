#include "ecrantI2C.h"
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

Adafruit_SSD1306 oLed(LARGEUR_OLED, HAUTEUR_OLED, &Wire, OLED_RESET);

void configurerOLed()
{
    Wire.begin(BROCHE_SDA_0, BROCHE_SCL_0);
    oLed.begin(SSD1306_SWITCHCAPVCC, ADRESSE_OLED);
    oLed.display();
    oLed.clearDisplay();

    oLed.setTextSize(TAILLE_CARATHERE);
    oLed.setTextColor(SSD1306_WHITE);
}

void afficher(byte ligne, String texte)
{

    switch (ligne)
    {
    case LIGNE_1:
        oLed.setCursor(0, 0);
        oLed.print(texte);
        break;

    case LIGNE_2:
        oLed.setCursor(0, oLed.height() * 1 / 4);
        oLed.print(texte);
        break;

    case LIGNE_3:
        oLed.setCursor(0, oLed.height() * 1 / 2);
        oLed.print(texte);
        break;

    case LIGNE_4:
        oLed.setCursor(0, oLed.height() * 3 / 4);
        oLed.print(texte);
        break;

    default:
        break;
    }
}

void effacerAfficheur()
{
    oLed.clearDisplay();
}

void afficherAfficheur()
{
    oLed.display();
}