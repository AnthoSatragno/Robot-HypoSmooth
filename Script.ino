#include"LettreMorse.hpp"
#include"Traducteur.hpp"
#include<Arduino.h>

LettreMorse lm;
Traducteur tr;

void setup() {
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(9600);
delay(500);
tr.paragraphe_in_clignotements(lm.traduction_mot(lm.txt));

}

void loop() {
  // put your main code here, to run repeatedly:
}
