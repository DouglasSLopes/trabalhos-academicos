""" 1- Pegue as imagens um.png, dois.png e tres.png, onde são 3 imagens em escala de cinza e 
cada uma representa uma das 3 cores que compõe uma imagem (vermelho, verde e azul)
e criem a imagem colorida que é a soma das 3. (As imagens não estão necessariamente em ordem). """

import numpy as np
import cv2 as cv
import os

# Limpar a tela do console
os.system('cls' if os.name == 'nt' else 'clear')

# Carregar as três imagens em escala de cinza
imagem1 = cv.imread(
    'C:\\Users\\Douglas\\Desktop\\Minha PASTA\\Python\\3 - Trabalhos\\Trabalho M2.2\\Trabalho Pronto\\1- (um).png', cv.IMREAD_GRAYSCALE)
imagem2 = cv.imread(
    'C:\\Users\\Douglas\\Desktop\\Minha PASTA\\Python\\3 - Trabalhos\\Trabalho M2.2\\Trabalho Pronto\\2- (dois).png', cv.IMREAD_GRAYSCALE)
imagem3 = cv.imread(
    'C:\\Users\\Douglas\\Desktop\\Minha PASTA\\Python\\3 - Trabalhos\\Trabalho M2.2\\Trabalho Pronto\\3- (tres).png', cv.IMREAD_GRAYSCALE)

# Verificar se as imagens foram carregadas corretamente
# None = vazio, se tiver algum problema vai dar a mensagem e dar exit
if imagem1 is None or imagem2 is None or imagem3 is None:
    print("\nErro ao carregar as imagens, adicione o caminho correto das imagens!\n")
    exit()

# Atribuir cada imagem em escala de cinza ao canal correspondente
imagem_colorida = np.zeros(
    (imagem1.shape[0], imagem1.shape[1], 3), dtype=np.uint8)
imagem_colorida[:, :, 1] = imagem1  # Canal Verde
imagem_colorida[:, :, 2] = imagem2  # Canal Vermelho
imagem_colorida[:, :, 0] = imagem3  # Canal Azul

# Mostrar cada imagem em escala de cinza
cv.imshow("Imagem Um (Azul)", imagem1)
cv.imshow("Imagem Dois (Verde)", imagem2)
cv.imshow("Imagem Tres (Vermelho)", imagem3)

# Mostrar a imagem resultante (colorida)
cv.imshow("Imagem Colorida", imagem_colorida)
cv.waitKey(0)
cv.destroyAllWindows()
