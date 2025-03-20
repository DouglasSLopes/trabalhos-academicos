import os
import random

# Definindo os símbolos usados no jogo
BOMBA = 'B'
CAMPO_NAO_REVELADO = '#'
CAMPO_REVELADO_VAZIO = '-'

# Função para limpar o terminal


def limpar_terminal():
    sistema_operacional = os.name
    if sistema_operacional == 'posix':
        os.system('clear')  # Limpa o terminal no Linux/Mac
    elif sistema_operacional == 'nt':
        os.system('cls')    # Limpa o terminal no Windows
    else:
        print("Sistema operacional não suportado para limpar o terminal.")

# Função para salvar o mapa em um arquivo


def salvar_mapa_em_arquivo(nome_arquivo, mapa):
    with open(nome_arquivo, 'w') as arquivo:
        for linha in mapa:
            linha_str = ' '.join(map(str, linha))
            arquivo.write(linha_str + '\n')

# Função para criar o campo minado com bombas aleatórias


def criar_campo_minado(num_linhas, num_colunas, num_bombas):
    campo = [[CAMPO_NAO_REVELADO for _ in range(
        num_colunas)] for _ in range(num_linhas)]

    for _ in range(num_bombas):
        linha = random.randint(0, num_linhas - 1)
        coluna = random.randint(0, num_colunas - 1)

        while campo[linha][coluna] == BOMBA:
            linha = random.randint(0, num_linhas - 1)
            coluna = random.randint(0, num_colunas - 1)

        campo[linha][coluna] = BOMBA

    return campo

# Função para contar bombas adjacentes a uma célula


def contar_bombas_adjacentes(campo, linha, coluna):
    num_bombas = 0
    for i in range(-1, 2):
        for j in range(-1, 2):
            if 0 <= linha + i < len(campo) and 0 <= coluna + j < len(campo[0]):
                if campo[linha + i][coluna + j] == BOMBA:
                    num_bombas += 1
    return num_bombas

# Função para revelar uma célula do campo


def revelar_campo(campo, campo_revelado, linha, coluna):
    if campo[linha][coluna] == CAMPO_NAO_REVELADO:
        bombas_adjacentes = contar_bombas_adjacentes(campo, linha, coluna)
        campo_revelado[linha][coluna] = CAMPO_REVELADO_VAZIO if bombas_adjacentes == 0 else str(
            bombas_adjacentes)
        if bombas_adjacentes == 0:
            revelar_vazios(campo, campo_revelado, linha, coluna)

# Função para revelar células vazias adjacentes


def revelar_vazios(campo, campo_revelado, linha, coluna):
    for i in range(-1, 2):
        for j in range(-1, 2):
            if 0 <= linha + i < len(campo) and 0 <= coluna + j < len(campo[0]):
                if campo_revelado[linha + i][coluna + j] == CAMPO_NAO_REVELADO:
                    revelar_campo(campo, campo_revelado, linha + i, coluna + j)

# Função para imprimir o campo revelado


def imprimir_campo(campo_revelado):
    for linha in campo_revelado:
        print('  '.join(map(str, linha)))

# Função para verificar a vitória do jogador


def vitoria(campo_revelado, num_bombas):
    campos_nao_revelados = sum(linha.count(CAMPO_NAO_REVELADO)
                               for linha in campo_revelado)
    return campos_nao_revelados == num_bombas

# Função principal do jogo


def main():
    limpar_terminal()
    print("Bem vindo ao CAMPO MINADO, feito por mim (Vulgo Douglas)\n")
    print("Regras!!!")
    print(" ( - ): um campo revelado que não tem nenhuma bomba adjacente.")
    print(" ( 1, 2, 3, ...): campos onde tem o número correspondente de bombas adjacentes.")
    print(" ( # ): campo ainda não revelado.")
    print(" ( B ): campo com bomba.\n")

    escolha = input("Deseja jogar? (1 = Sim ou 2 = Não)\n")
    if escolha == '2':
        return

    num_linhas = int(input("Quantas linhas?\n"))
    num_colunas = int(input("Quantas colunas?\n"))
    num_bombas = int(input("Quantas bombas?\n"))
    print()
    campo_minado = criar_campo_minado(num_linhas, num_colunas, num_bombas)
    nome_arquivo = input("Nome do arquivo para salvar o mapa:\n")
    print()
    salvar_mapa_em_arquivo(nome_arquivo, campo_minado)

    campo_revelado = [[CAMPO_NAO_REVELADO for _ in range(
        num_colunas)] for _ in range(num_linhas)]

    while True:
        imprimir_campo(campo_revelado)

        try:
            jogada_linha = int(
                input(f"\nInforme a linha para sua jogada (0 a {num_linhas - 1}): "))
            jogada_coluna = int(
                input(f"Informe a coluna para sua jogada (0 a {num_colunas - 1}): "))
        except ValueError:
            print("\nEntrada inválida. Por favor, insira números inteiros.\n")
            continue

        if 0 <= jogada_linha < num_linhas and 0 <= jogada_coluna < num_colunas:
            if campo_minado[jogada_linha][jogada_coluna] == BOMBA:
                print("\nVocê perdeu, NT (Nem tentou ou Nice TRY?)\n")
                break
            elif campo_revelado[jogada_linha][jogada_coluna] == CAMPO_REVELADO_VAZIO:
                print("\nVocê já revelou esta célula. Escolha outra.\n")
                continue
            else:
                revelar_campo(campo_minado, campo_revelado,
                              jogada_linha, jogada_coluna)

            if vitoria(campo_revelado, num_bombas):
                imprimir_campo(campo_revelado)
                print("\nParabéns! Você ganhou!\n")
                break
        else:
            print("\nCoordenadas fora do campo. Escolha outra.")
        print()


if __name__ == "__main__":
    main()
