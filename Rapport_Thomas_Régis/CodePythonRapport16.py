from pyfirmata import Arduino, util
import time


carte = Arduino('COM6')
acquisition = util.Iterator(carte)
acquisition.start()



MoteurdroiteDIR1 = carte.get_pin('d:9:o')
MoteurdroitePW1 = carte.get_pin('d:8:o')
MoteurgaucheDIR2 = carte.get_pin('d:7:o')
MoteurgauchePW2  = carte.get_pin('d:6:o')



def Avancer():


  MoteurdroiteDIR1.write(0)
  MoteurdroitePW1.write(1)      # tourner vers l'avant moteur droit

  MoteurgaucheDIR2.write(0)     # tourner vers l'avant moteur gauche
  MoteurgauchePW2.write(1)


def Tourner_a_droite():

    MoteurdroiteDIR1.write(1)
    MoteurdroitePW1.write(1)      # tourner vers l'arrière moteur droit

    MoteurgaucheDIR2.write(0)     # tourner vers l'avant moteur gauche
    MoteurgauchePW2.write(1)






def Tourner_a_gauche():

      MoteurdroiteDIR1.write(0)
      MoteurdroitePW1.write(1)      # tourner vers l'avant moteur droit

      MoteurgaucheDIR2.write(1)     # tourner vers l'arrière moteur gauche
      MoteurgauchePW2.write(1)




Tourner_a_gauche()



time.sleep(1.0)
print('début du test')




carte.exit()