#include"Traducteur.hpp"
#include<Arduino.h>

Traducteur::Traducteur(){};


void Traducteur::lettr_in_clignotements(char lettr){ 
        if ( lettr == '-') { tiret();}
        else if ( lettr == '.') {point();}
}

void Traducteur::paragraphe_in_clignotements(String paragraphe){
      for(int j=0; j < paragraphe.length();j++){
            lettr_in_clignotements(paragraphe[j]);
}

}



void Traducteur::tiret(){
    
    digitalWrite(LED_BUILTIN,HIGH);
    Temps = millis();
    while((millis()-Temps)<2000){digitalWrite(LED_BUILTIN,HIGH);}
    while((millis()-Temps)<2500){digitalWrite(LED_BUILTIN,LOW);}
    
}

void Traducteur::point(){
    
    digitalWrite(LED_BUILTIN,HIGH);
    Temps = millis();
    while((millis()-Temps)<500){digitalWrite(LED_BUILTIN,HIGH);}
    while((millis()-Temps)<1000){digitalWrite(LED_BUILTIN,LOW);}

}




