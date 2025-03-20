""" Trabalho """

# 1 Faça um algoritmo que leia 5 números e informe o maior deles.

maior_numero = float(input("Digite um número: "))

for _ in range(4):
    num = float(input("Digite um número: "))
    if num > maior_numero:
        maior_numero = num

print("O maior número digitado é:", maior_numero)

# 2 Faça um algoritmo que peça um valor e mostre na tela se ele é primo.

numero_digitado = int(input("Digite um número: "))

if numero_digitado % 2 != 0:
    print(f"{numero_digitado} é um número ímpar.")
else:
    print(f"{numero_digitado} não é um número ímpar.")

# 3 Faça um algoritmo que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.

vetor_caracteres = []

for i in range(10):
    caracter = input(f"Digite o {i+1}º caractere: ")
    vetor_caracteres.append(caracter)

CONTADOR_CONSOANTES = 0
consoantes_encontradas = []

for caracter in vetor_caracteres:
    if caracter.isalpha() and caracter.lower() not in "aeiou":
        CONTADOR_CONSOANTES += 1
        consoantes_encontradas.append(caracter)

print(f"Foram lidas {CONTADOR_CONSOANTES} consoantes.")
print(f"Consoantes encontradas: {', '.join(consoantes_encontradas)}")

# 4 Faça um algoritmo que determine se uma frase é palíndromo ou não. Palíndromos são frases ou palavras que podem ser lidas, indiferentemente, da esquerda para a direita ou da direita para esquerda. Espaços e maiúsculas e minúsculas, por exemplo: “A grama é amarga” é considerado um palíndromo.

frase = input("Digite uma frase: ").lower()
frase_sem_espacos = frase.replace(" ", "")

if frase_sem_espacos == frase_sem_espacos[::-1]:
    print("A frase é um palíndromo.")
else:
    print("A frase não é um palíndromo.")

# 5 A cifra de César é uma cifra de substituição simples em que cada letra do texto é substituída por outra letra movendo n posições no alfabeto. 

ALFABETO = "abcdefghijklmnopqrstuvwxyz"

texto_simples = input("Digite o texto simples: ").lower()
deslocamento = int(input("Digite o número de letras para deslocar: "))

TEXTO_CIFRADO = ""

for caractere in texto_simples:
    if caractere.isalpha():
        indice = (ALFABETO.index(caractere) + deslocamento) % 26
        novo_caractere = ALFABETO[indice]
        TEXTO_CIFRADO += novo_caractere
    else:
        TEXTO_CIFRADO += caractere

print("Texto cifrado:", TEXTO_CIFRADO)
