#include"LettreMorse.hpp"
#include<Arduino.h>

LettreMorse::LettreMorse(){};

String LettreMorse::txt = "Bonjou?r je m'apelle Thom::as";
String LettreMorse::trad ="";
char LettreMorse::lettre[63] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0',' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
String LettreMorse::morse[63] = { ".-", "-...", "-.-." , "-..",".","..-.","--.","....","..",".---","-.-",".-..", "--", "-.","---",".--.","--.-",".-.","...","-","..-","...-",".--",
"-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----",".",".-", "-...", "-.-." , "-..",".","..-.","--.",".","..",".---","-.-",".-..", "--", "-.","---",".--.","--.-",".-.","...","-","..-","...-",".--",
"-..-","-.--","--.."};

String LettreMorse::traduction_lettre (char carac){
     int k =0;
     while (k < sizeof(lettre) && carac!=lettre[k]){k++;}
        if( k < sizeof(lettre) ){return(morse[k]);}
        else {return("");}
}

String LettreMorse::traduction_mot(String phrase){
    Serial.println("Le texte à traduire est:\n");
    Serial.println(phrase);
    for(int i=0; i < phrase.length();i++){
          if (traduction_lettre(phrase[i])==""){trad = trad;}
          else{trad += traduction_lettre(phrase[i])+"...";}  
          
      }
    Serial.println("Le texte traduit en morse donne:\n");
    Serial.println(trad);
    
    return (trad);
    
        
}