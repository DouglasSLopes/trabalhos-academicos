import pygame_textinput
import pygame
import sys
import random
import math

NOME = "Jogo Das Bolinhas Assassinas"

# Parâmetros do jogo
TAMANHO_JOGADOR = 20
TAMANHO_MOB = 15
TAMANHO_MOEDA = 10
# VELOCIDADE_MOB = 1
VELOCIDADE_MOEDA = 2
# MAX_MOBS = 15
MAX_MOEDAS = 5
MAX_COLISOES = 10
DISTANCIA_MIN_MOB = 100  # Distância mínima entre o jogador e os mobs
DISTANCIA_MIN_MOEDA = 50  # Distância mínima entre o jogador e as moedas
VELOCIDADE_PERSONAGEM = 3

INTERVALO_CLIQUES = 200  # Tempo mínimo permitido entre cliques

# Parâmetros de exibição do menu
LARGURA_MENU, ALTURA_MENU = 480, 320
LARGURA_BOTAO, ALTURA_BOTAO = 100, 50
ALTURA_CAIXA_TEXTO = 32

# Estados do menu
SEM_MENU = 0
MENU_PRINCIPAL = 1
MENU_CONFIGURACOES = 2
MENU_DIFICULDADES = 3

# Parâmetros de jogo para diferentes dificuldades
MAX_MOBS_FACIL = 5
MAX_MOBS_MEDIA = 10
MAX_MOBS_DIFICIL = 15

VELOCIDADE_MOB_FACIL = 0.5
VELOCIDADE_MOB_MEDIA = 1.0
VELOCIDADE_MOB_DIFICIL = 1.5

# Cores
BRANCO = (255, 255, 255)
VERMELHO = (255, 0, 0)
AZUL = (0, 0, 255)
AMARELO = (255, 255, 0)
CINZA = (127, 127, 127)

# Dimensões da tela
largura, altura = 800, 600

# Inicialização do Pygame
pygame.init()

# Hora em que cliques começam a ser ignorados
timer_intervalo_cliques = 0

# imagem_fundo = pygame.image.load("")

# Fontes para exibição de textos
fonte = pygame.font.Font(
    "3 - Trabalhos\Trabalho M3\\Trabalho Testes\\m5x7.ttf", 32)
fonte_titulo = pygame.font.Font(
    "3 - Trabalhos\Trabalho M3\\Trabalho Testes\\m5x7.ttf", 48)
fonte_entrada = pygame.font.Font(
    "3 - Trabalhos\Trabalho M3\\Trabalho Testes\\m5x7.ttf", 32)


# Função para ativar o intervalo de espera entre cliques
def iniciar_intervalo_cliques():
    global timer_intervalo_cliques

    # Definir o tempo de início do intervalo de espera como a hora atual
    timer_intervalo_cliques = pygame.time.get_ticks()


# Função para verificar se o intervalo de espera entre cliques já foi decorrido
def intervalo_cliques_finalizado():
    global timer_intervalo_cliques

    if pygame.time.get_ticks() - timer_intervalo_cliques > INTERVALO_CLIQUES:
        timer_intervalo_cliques = 0
        return True
    else:
        return False


# Função para exibir botões do menu
def desenhar_botao(x, y, texto):
    retangulo_botao = pygame.Rect(x, y, LARGURA_BOTAO, ALTURA_BOTAO)
    pygame.draw.rect(tela, AZUL, retangulo_botao)
    superficie_texto = fonte.render(texto, True, BRANCO)
    retangulo_texto = superficie_texto.get_rect(center=retangulo_botao.center)
    tela.blit(superficie_texto, retangulo_texto)

    return retangulo_botao  # Retorno para detecção de cliques na função de menu


# Função para exibir caixas de texto
def desenhar_caixa_texto(x, y, largura):
    retangulo_caixa_texto = pygame.Rect(x, y, largura, ALTURA_CAIXA_TEXTO)
    pygame.draw.rect(tela, BRANCO, retangulo_caixa_texto)

    return retangulo_caixa_texto  # Retorno para detecção de cliques na função de menu


# Função para o munu de configuração
def abrir_menu_configuracoes():
    global largura, altura, tela

    # Função de validação dos valores inseridos, verificando se estes são
    # inteiros e positivos; entradas vazias são tratadas posteriormente
    def validar_entrada(entrada): return \
        True if entrada == '' else (
            True if entrada.isdigit() and int(entrada) > 0 else False)

    # Criar instâncias separadas do TextInputManager para cada caixa de texto
    gerenciador_largura = pygame_textinput.TextInputManager(
        validator=validar_entrada)
    gerenciador_altura = pygame_textinput.TextInputManager(
        validator=validar_entrada)

    # Inicialização das entradas de texto
    entrada_largura_tela = pygame_textinput.TextInputVisualizer(
        manager=gerenciador_largura, font_object=fonte_entrada)
    entrada_altura_tela = pygame_textinput.TextInputVisualizer(
        manager=gerenciador_altura, font_object=fonte_entrada)

    # Variáveis de controle de quais caixas de texto estão selecionadas
    caixa_texto_largura_tela_selecionada = False
    caixa_texto_altura_tela_selecionada = False

    # Desenhar o fundo do menu
    x_menu = largura / 2 - LARGURA_MENU / 2
    y_menu = altura / 2 - ALTURA_MENU / 2
    retangulo_menu = pygame.draw.rect(
        tela, CINZA, [x_menu, y_menu, LARGURA_MENU, ALTURA_MENU])

    # Desenhar os rótulos das caixas de texto
    rotulo_largura_tela = fonte.render(f"Largura da tela (atual: {largura})",
                                       True, BRANCO)
    tela.blit(rotulo_largura_tela, (x_menu + 20, y_menu + 20))

    rotulo_altura_tela = fonte.render(f"Altura da tela (atual: {altura})",
                                      True, BRANCO)
    tela.blit(rotulo_altura_tela, (x_menu + 20, y_menu + 90))

    # Desenhar os botões
    retangulo_botao_ok = desenhar_botao(x_menu + 70, y_menu + 220, "OK")
    retangulo_botao_cancelar = desenhar_botao(
        x_menu + 310, y_menu + 220, "Cancelar")

    while True:
        # Desenhar as caixas de texto
        retangulo_caixa_texto_largura_tela = desenhar_caixa_texto(
            x_menu + 20, y_menu + 50, 100)
        retangulo_caixa_texto_altura_tela = desenhar_caixa_texto(
            x_menu + 20, y_menu + 120, 100)

        eventos = pygame.event.get()

        # Ler a entrada de texto apenas para a caixa selecionada
        if caixa_texto_largura_tela_selecionada:
            entrada_largura_tela.update(eventos)
        if caixa_texto_altura_tela_selecionada:
            entrada_altura_tela.update(eventos)

        tela.blit(entrada_largura_tela.surface,
                  (x_menu + 25, y_menu + 50))
        tela.blit(entrada_altura_tela.surface,
                  (x_menu + 25, y_menu + 120))

        pygame.display.update()

        for evento in eventos:
            if evento.type == pygame.QUIT:
                pygame.quit()
                sys.exit()

        # Detectar cliques
        posicao_mouse = pygame.mouse.get_pos()
        clique = pygame.mouse.get_pressed()

        # "Selecionar" a caixa de texto clicada e deselecionar a outra
        if retangulo_caixa_texto_largura_tela.collidepoint(posicao_mouse) and clique[0]:
            caixa_texto_largura_tela_selecionada = True
            caixa_texto_altura_tela_selecionada = False

        if retangulo_caixa_texto_altura_tela.collidepoint(posicao_mouse) and clique[0]:
            caixa_texto_altura_tela_selecionada = True
            caixa_texto_largura_tela_selecionada = False

        # Retornar ao menu principal, salvando os novos valores caso o botão OK for clicado
        if retangulo_botao_ok.collidepoint(posicao_mouse) and clique[0]:
            # Atualizar os valores somente se não forem vazios
            if entrada_largura_tela.value != '':
                # Atribuir o valor inserido à variável global
                largura = int(entrada_largura_tela.value)
            if entrada_altura_tela.value != '':
                altura = int(entrada_altura_tela.value)

            # Atualizar as dimensões da tela
            tela = pygame.display.set_mode([largura, altura])

            iniciar_intervalo_cliques()
            return MENU_PRINCIPAL

        # Retornar ao menu principal, sem salvar caso o botão de cancelar for clicado
        if retangulo_botao_cancelar.collidepoint(posicao_mouse) and clique[0]:
            iniciar_intervalo_cliques()
            return MENU_PRINCIPAL


# Função para exibir o menu de dificuldades
def abrir_menu_dificuldades():
    global MAX_MOBS, VELOCIDADE_MOB

    # Desenhar o fundo do menu
    x_menu = largura / 2 - LARGURA_MENU / 2
    y_menu = altura / 2 - ALTURA_MENU / 2
    retangulo_menu = pygame.draw.rect(
        tela, CINZA, [x_menu, y_menu, LARGURA_MENU, ALTURA_MENU])

    # Desenhar o texto do menu
    superficie_texto = fonte_titulo.render(
        "Selecione a dificuldade:", True, BRANCO)
    retangulo_texto = superficie_texto.get_rect(
        center=(x_menu + LARGURA_MENU / 2, y_menu + 100))
    tela.blit(superficie_texto, retangulo_texto)

    # Desenhar os botões
    retangulo_botao_facil = desenhar_botao(
        x_menu + 45, y_menu + 200, "Fácil")
    retangulo_botao_media = desenhar_botao(
        x_menu + 190, y_menu + 200, "Média")
    retangulo_botao_dificil = desenhar_botao(
        x_menu + 335, y_menu + 200, "Difícil")

    # Atualizar a tela
    pygame.display.flip()

    while True:
        # Detectar evento de fechamento da janela
        for evento in pygame.event.get():
            if evento.type == pygame.QUIT:
                pygame.quit()
                sys.exit()

        # Detectar cliques nos botões
        posicao_mouse = pygame.mouse.get_pos()
        clique = pygame.mouse.get_pressed()

        # Atribuir os parâmetros correspondentes à dificuldade selecionada
        # e seguir para o jogo
        if retangulo_botao_facil.collidepoint(posicao_mouse) and clique[0]\
                and intervalo_cliques_finalizado():
            MAX_MOBS = MAX_MOBS_FACIL
            VELOCIDADE_MOB = VELOCIDADE_MOB_FACIL

            return SEM_MENU

        if retangulo_botao_media.collidepoint(posicao_mouse) and clique[0]\
                and intervalo_cliques_finalizado():
            MAX_MOBS = MAX_MOBS_MEDIA
            VELOCIDADE_MOB = VELOCIDADE_MOB_MEDIA

            return SEM_MENU

        if retangulo_botao_dificil.collidepoint(posicao_mouse) and clique[0]\
                and intervalo_cliques_finalizado():
            MAX_MOBS = MAX_MOBS_DIFICIL
            VELOCIDADE_MOB = VELOCIDADE_MOB_DIFICIL

            return SEM_MENU


# Função para exibir o menu
def abrir_menu_principal(texto1='', texto2=''):
    # Desenhar o fundo do menu
    x_menu = largura / 2 - LARGURA_MENU / 2
    y_menu = altura / 2 - ALTURA_MENU / 2
    retangulo_menu = pygame.draw.rect(
        tela, CINZA, [x_menu, y_menu, LARGURA_MENU, ALTURA_MENU])

    # Desenhar os textos do menu
    superficie_texto_1 = fonte_titulo.render(texto1, True, BRANCO)
    retangulo_texto_1 = superficie_texto_1.get_rect(
        center=(x_menu + LARGURA_MENU / 2, y_menu + 120))
    tela.blit(superficie_texto_1, retangulo_texto_1)

    superficie_texto_2 = fonte_titulo.render(texto2, True, BRANCO)
    retangulo_texto_2 = superficie_texto_2.get_rect(
        center=(x_menu + LARGURA_MENU / 2, y_menu + 170))
    tela.blit(superficie_texto_2, retangulo_texto_2)

    # Desenhar os botões
    retangulo_botao_iniciar = desenhar_botao(
        x_menu + 45, y_menu + 220, "Iniciar")
    retangulo_botao_configuracoes = desenhar_botao(
        x_menu + 190, y_menu + 220, "Config.")
    retangulo_botao_sair = desenhar_botao(x_menu + 335, y_menu + 220, "Sair")

    # Atualizar a tela
    pygame.display.flip()

    while True:
        # Detectar evento de fechamento da janela
        for evento in pygame.event.get():
            if evento.type == pygame.QUIT:
                pygame.quit()
                sys.exit()

        # Detectar cliques nos botões
        posicao_mouse = pygame.mouse.get_pos()
        clique = pygame.mouse.get_pressed()

        # Abrir o menu de dificuldades caso o botão de iniciar for clicado
        if retangulo_botao_iniciar.collidepoint(posicao_mouse) and clique[0]\
                and intervalo_cliques_finalizado():
            iniciar_intervalo_cliques()
            return MENU_DIFICULDADES

        # Abrir o menu de configurações caso o botão relevante for clicado
        if retangulo_botao_configuracoes.collidepoint(posicao_mouse) and clique[0]\
                and intervalo_cliques_finalizado():
            return MENU_CONFIGURACOES

        # Encerrar o jogo caso o botão de sair for clicado
        if retangulo_botao_sair.collidepoint(posicao_mouse) and clique[0]\
                and intervalo_cliques_finalizado():
            pygame.quit()
            sys.exit()


# Função para chamar os menus e realizar a troca entre eles
def gerenciar_menus(texto1='', texto2=''):
    estado = MENU_PRINCIPAL
    while estado != SEM_MENU:
        if estado == MENU_PRINCIPAL:
            estado = abrir_menu_principal(texto1, texto2)
        elif estado == MENU_CONFIGURACOES:
            estado = abrir_menu_configuracoes()
        elif estado == MENU_DIFICULDADES:
            estado = abrir_menu_dificuldades()


# Função para desenhar o jogador na tela
def desenhar_jogador(x, y):
    pygame.draw.rect(tela, BRANCO, [x, y, TAMANHO_JOGADOR, TAMANHO_JOGADOR])


# Função para desenhar os mobs na tela
def desenhar_mob(x, y):
    pygame.draw.circle(tela, VERMELHO, (x, y), TAMANHO_MOB)


# Função para desenhar as moedas na tela
def desenhar_moeda(x, y):
    pygame.draw.circle(tela, AMARELO, (x, y), TAMANHO_MOEDA)


# Função para verificar colisões entre dois círculos
def verificar_colisao(x1, y1, raio1, x2, y2, raio2):
    distancia = math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)
    return distancia < (raio1 + raio2)


# Função principal do jogo
def jogo():
    global jogador_x, jogador_y, pontuacao, timer

    em_execucao = True

    mobs = []
    moedas = []
    relogio = pygame.time.Clock()

    # Definindo a posição inicial do jogador
    jogador_x = largura // 2 - TAMANHO_JOGADOR // 2
    jogador_y = altura // 2 - TAMANHO_JOGADOR // 2

    # Inicializando a pontuação
    timer = 0
    pontuacao = 0
    temporizador_atualizacao_timer = 0
    intervalo_atualizacao_timer = 1000  # 1000 milissegundos = 1 segundos

    while em_execucao:
        for evento in pygame.event.get():
            if evento.type == pygame.QUIT:
                pygame.quit()
                sys.exit()

        teclas = pygame.key.get_pressed()

        # Mover o jogador de acordo com as teclas pressionadas (WASD)
        teclas = pygame.key.get_pressed()
        jogador_x += (teclas[pygame.K_d] - teclas[pygame.K_a]) * \
            VELOCIDADE_PERSONAGEM
        jogador_y += (teclas[pygame.K_s] - teclas[pygame.K_w]) * \
            VELOCIDADE_PERSONAGEM

        # Mover também se as teclas de seta forem usadas alternativamente
        jogador_x += (teclas[pygame.K_RIGHT] - teclas[pygame.K_LEFT]) * \
            VELOCIDADE_PERSONAGEM
        jogador_y += (teclas[pygame.K_DOWN] - teclas[pygame.K_UP]) * \
            VELOCIDADE_PERSONAGEM

        # Garantindo que o jogador não saia da tela
        jogador_x = max(0, min(jogador_x, largura - TAMANHO_JOGADOR))
        jogador_y = max(0, min(jogador_y, altura - TAMANHO_JOGADOR))

        # Incrementar a pontuação a cada 5 segundos
        temporizador_atualizacao_timer += relogio.get_time()
        if temporizador_atualizacao_timer >= intervalo_atualizacao_timer:
            timer += 1
            temporizador_atualizacao_timer = 0  # Reiniciar o temporizador

        # Adicionando novos mobs à medida que os existentes são eliminados
        while len(mobs) < MAX_MOBS:
            mob_x = random.randint(0, largura - TAMANHO_MOB)
            mob_y = random.randint(0, altura - TAMANHO_MOB)

            # Verificando se a distância para o jogador é suficientemente grande
            if math.sqrt((mob_x - jogador_x)**2 + (mob_y - jogador_y)**2) >= DISTANCIA_MIN_MOB:
                mobs.append((mob_x, mob_y))

        # Adicionando novas moedas apenas se não atingimos o limite
        while len(moedas) < MAX_MOEDAS:
            moeda_x = random.randint(0, largura - TAMANHO_MOEDA)
            moeda_y = random.randint(0, altura - TAMANHO_MOEDA)

            # Verificando se a distância para o jogador é suficientemente grande
            if math.sqrt((moeda_x - jogador_x)**2 + (moeda_y - jogador_y)**2) >= DISTANCIA_MIN_MOEDA:
                moedas.append((moeda_x, moeda_y))

        # Movendo os mobs e verificando colisões
        novos_mobs = []
        for mob_x, mob_y in mobs:
            # Perseguir o jogador
            angulo = math.atan2(jogador_y - mob_y, jogador_x - mob_x)
            mob_x += VELOCIDADE_MOB * math.cos(angulo)
            mob_y += VELOCIDADE_MOB * math.sin(angulo)

            # Verificando colisões com o jogador
            colisao_jogador = (
                jogador_x < mob_x + TAMANHO_MOB
                and jogador_x + TAMANHO_JOGADOR > mob_x
                and jogador_y < mob_y + TAMANHO_MOB
                and jogador_y + TAMANHO_JOGADOR > mob_y
            )

            # Encerrar o jogo em caso de colisão
            if colisao_jogador:
                em_execucao = False

            # Verificar colisões entre os mobs
            colisao_mob = any(
                verificar_colisao(mob_x, mob_y, TAMANHO_MOB,
                                  outro_mob_x, outro_mob_y, TAMANHO_MOB)
                for outro_mob_x, outro_mob_y in novos_mobs
            )

            if not colisao_jogador and not colisao_mob:
                novos_mobs.append((mob_x, mob_y))

        mobs = novos_mobs

        # Movendo as moedas e verificando colisões
        moedas_coletadas = []
        for i, (moeda_x, moeda_y) in enumerate(moedas):
            # Verificando colisões com o jogador
            colisao_moeda = (
                jogador_x < moeda_x + TAMANHO_MOEDA
                and jogador_x + TAMANHO_JOGADOR > moeda_x
                and jogador_y < moeda_y + TAMANHO_MOEDA
                and jogador_y + TAMANHO_JOGADOR > moeda_y
            )

            if colisao_moeda:
                pontuacao += 100
                moedas_coletadas.append(i)

        # Removendo as moedas coletadas
        for i in reversed(moedas_coletadas):
            moedas.pop(i)

        tela.fill((0, 0, 0))  # imagem_fundo

        # Desenhando o jogador
        desenhar_jogador(jogador_x, jogador_y)

        # Desenhando os mobs
        for mob_x, mob_y in mobs:
            desenhar_mob(mob_x, mob_y)

        # Desenhando as moedas
        for moeda_x, moeda_y in moedas:
            desenhar_moeda(moeda_x, moeda_y)

        # Exibindo pontuação no canto superior esquerdo
        texto_pontuacao = fonte.render(
            "Pontuação: " + str(pontuacao), True, BRANCO)
        tela.blit(texto_pontuacao, (5, 5))

        # Exibindo tempo no canto superior esquerdo abaixo da pontuação
        texto_timer = fonte.render("Tempo: " + str(timer), True, BRANCO)
        tela.blit(texto_timer, (5, 35))

        pygame.display.flip()
        relogio.tick(144)  # Ajustando para 60 quadros por segundo

    return pontuacao


if __name__ == "__main__":
    pontuacao_maxima = 0

    # Criando a janela do jogo
    tela = pygame.display.set_mode([largura, altura])
    pygame.display.set_caption(NOME)
    tela.fill((0, 0, 0))

    # Exibição inicial do menu
    gerenciar_menus(NOME)

    # Execução do jogo; caso a rodada encerre, o menu é mostrado novamente,
    # aguardando entrada do usuário para decidir entre iniciar uma nova rodada
    # ou encerrar o jogo
    while True:
        # Pontuação final da rodada, retornada pela função de jogo
        pontuacao_atual = jogo()

        # Se essa pontuação for maior que a máxima anterior, atualizar-a
        if pontuacao_atual > pontuacao_maxima:
            pontuacao_maxima = pontuacao_atual

        # Exibir novamente o menu
        gerenciar_menus("Morreu! Jogar novamente?",
                        f"Melhor pontuação: {pontuacao_maxima}")
