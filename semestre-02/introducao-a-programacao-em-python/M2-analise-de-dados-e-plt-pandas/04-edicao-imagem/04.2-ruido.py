""" 2– A imagem ruido.png parece ser um ruído colorido aleatório, 
mas existe um quadrado escondido nela, em um dos canais de cor e em uma cor muito próxima ao resto da imagem. 
Separem o canal de cor que tem o quadrado, utilizem a limiarização para deixar o quadrado preto e o resto da imagem branca e 
apliquem um slicing para recortar o pedaço da imagem que tem o quadrado (ROI). """

import numpy as np
import cv2 as cv
import os

# Limpar a tela do console
os.system('cls' if os.name == 'nt' else 'clear')

imagem1 = cv.imread(
    'C:\\Users\\Douglas\\Desktop\\Minha PASTA\\Python\\3 - Trabalhos\\Trabalho M2.2\\Trabalho Pronto\\1- Ruido.png')

# Verificar se as imagens foram carregadas corretamente
# None = vazio, se tiver algum problema vai dar a mensagem e dar exit
if imagem1 is None:
    print("\nErro ao carregar as imagens, adicione o caminho correto das imagens!\n")
    exit()

# Separar o canal vermelho
canal_vermelho = imagem1[:, :, 2]  # Canal Vermelho

# Separar o canal verde
canal_verde = imagem1[:, :, 1]  # Canal Verde

# Aplicar a limiarização para destacar o quadrado
_, limiarizada = cv.threshold(canal_verde, 100, 255, cv.THRESH_BINARY)

# Criar uma máscara preta do mesmo tamanho da imagem original
mascara = np.zeros_like(canal_verde)

# Bitwise AND entre a máscara e o canal original para obter apenas a região de interesse (ROI)
roi = cv.bitwise_and(canal_verde, mascara)

# Exibir a imagem original, a imagem limiarizada e a região de interesse (ROI)

cv.imshow("Imagem Original", imagem1)
cv.imshow("Imagem Com a Cor Separada (Verde)", canal_verde)
cv.imshow("Imagem Com a Cor Separada (Vermelho)", canal_vermelho)
cv.imshow("ROI", roi)

cv.waitKey(0)
cv.destroyAllWindows()
