#include <Arduino.h>
#include "moduleLTS.h"
#include "ecrantI2C.h"

void setup()
{
  configurerADC(BROCHE_TRIMMER_1);
  configurerOLed();
  Serial.begin(9600);
}

void loop()
{
  String chaineTrimmer = (String)lireEntreeAnalogique(BROCHE_TRIMMER_1) + "(10)";
  String chaineTrimmerMilliVolte = (String)lireEntreeAnalogiqueMilliVolte(BROCHE_TRIMMER_1) + "V";

  static unsigned long currentTime = 0;
  static unsigned long previousTime = 0;

  currentTime = millis();
  if ((currentTime - previousTime) > 200)
  {
    Serial.println(chaineTrimmer);
    Serial.println(chaineTrimmerMilliVolte);

    effacerAfficheur();
    afficher(LIGNE_1, "Lecture ADC");
    afficher(LIGNE_2, "");
    afficher(LIGNE_3, chaineTrimmer);
    afficher(LIGNE_4, chaineTrimmerMilliVolte);
    afficherAfficheur();
    previousTime = currentTime;
  }
}