#include<Arduino.h>

class LettreMorse {
    
  public:
    
      LettreMorse();
      String traduction_lettre (char carac);
      String  traduction_mot( String phrase);
      static String txt;
      static String trad;
      
  private:

      static char lettre[63];
      static String morse[63];
      
      


};