# Importa a biblioteca Matplotlib para criar gráficos
import matplotlib.pyplot as plt
import pandas as pd  # Importa a biblioteca Pandas para manipular dados tabulares
import os  # Importa a biblioteca os para realizar operações relacionadas ao sistema operacional

os.system('cls')  # Limpa a tela do console (funciona em sistemas Windows)

# Link: https://www.kaggle.com/datasets/emilrueh/laptops-and-notebooks-from-2020-2023

# Lê o arquivo CSV contendo os dados dos notebooks
Notebooks = pd.read_csv(
    "Trabalho M2\\Trabalho Pronto\\Notebooks 2020-2022.csv")

# Exibe uma mensagem de boas-vindas e mostra todos os dados do arquivo
print("Bem-vindo ao trabalho M2 de Python")
print("Primeiramente, vou mostrar todos os conteúdos que existem!\n")
print(Notebooks)

# Exibe os nomes das colunas presentes no arquivo CSV
print("Aqui estão todos os nomes das colunas neste arquivo:\n")
print(Notebooks.columns)

# Solicita ao usuário escolher entre um filtro simples (1) ou composto (2)
escolha = int(input("\nDeseja um filtro simples (1) ou composto (2)?\n"))
print()

if escolha == 1:
    # Para o filtro simples, o usuário escolhe uma única coluna para filtrar
    filtro_simples = input("Escolha um index para filtrar (Tipo: price_eur): ")
    resultado_filtro = Notebooks[['name', filtro_simples]]

    termo_pesquisa = input(
        "Digite o termo de pesquisa (Tipo: Apple): ").strip()

    # Realiza o filtro com base no termo de pesquisa na coluna escolhida
    filtro_resultado = resultado_filtro[resultado_filtro['name'].str.contains(
        termo_pesquisa, case=False)]

    # Configura as propriedades do gráfico
    figsize = (len(filtro_resultado) / 200, 200)
    plt.figure(figsize=figsize)
    plt.barh(filtro_resultado['name'], filtro_resultado[filtro_simples])
    plt.ylabel('Nomes dos Notebooks')
    plt.xlabel(f'Dado sobre {filtro_simples}')
    plt.title(f'Nome do Notebook vs. Dados ({termo_pesquisa})')
    plt.xticks(rotation=90)

    # Exibe o gráfico
    plt.show()

    # Pergunta ao usuário se deseja salvar o resultado em um novo arquivo CSV
    opcao_salvar = input(
        "Deseja salvar o resultado em um novo arquivo CSV? (S/N): ").strip().lower()

    if opcao_salvar == "s":
        nome_arquivo_saida = input(
            "Insira o nome do arquivo de saída (por exemplo, teste.csv): ")
        filtro_resultado.to_csv(nome_arquivo_saida, index=False)
        print(f"O resultado foi salvo em '{nome_arquivo_saida}'.")

    # Exibe a lista que foi selecionada após o filtro
    print("\nAqui está a lista que foi selecionada!\n")
    print(filtro_resultado)

elif escolha == 2:
    # Para o filtro composto, o usuário escolhe múltiplas colunas para filtrar
    num_colunas = int(
        input("Quantas colunas você deseja incluir no filtro composto?\n"))
    colunas_filtro = ['name']

    print()

    for i in range(num_colunas):
        coluna = input(f"Insira o index da coluna {i + 1} (Tipo: price_eur): ")
        colunas_filtro.append(coluna)

    termo_pesquisa = input(
        "Digite o termo de pesquisa (Tipo: Apple): ").strip()

    # Realiza o filtro composto com base nas colunas escolhidas
    filtro_composto = Notebooks[colunas_filtro]

    # Pergunta ao usuário se deseja salvar o resultado em um novo arquivo CSV
    opcao_salvar = input(
        "Deseja salvar o resultado em um novo arquivo CSV? (S/N): ").strip().lower()

    if opcao_salvar == "s":
        nome_arquivo_saida = input(
            "Insira o nome do arquivo de saída (por exemplo, teste.csv): ")
        filtro_composto.to_csv(nome_arquivo_saida, index=False)
        print(f"O resultado foi salvo em '{nome_arquivo_saida}'.")

    # Exibe a lista que foi selecionada após o filtro
    print("\nAqui está a lista que foi selecionada!\n")
    print(filtro_composto)
