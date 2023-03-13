import cv2
import matplotlib.pyplot as plt
import time



#fonction qui permet de récupérer une image avec la webcam
def get_img(cam):
  ret, image = cam.read() #ret booléen pour savoir si on a récupéré l'image
  if ret :
    return(image)

# En sortie : l'image capturée