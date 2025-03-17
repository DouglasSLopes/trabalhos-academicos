#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcoesiniciais, primeiraescolha, a1, b1, c1, talisma, opcaodefalalaranja, soldado, adaga;

    cout << "                                                   |Iniciar  (1)|\n";
    cout << "                                                   |Cr�ditos (2)|\n";
    cout << "                                                   |Sair     (3)|\n\n";
    cout << "                                                  Digite 1, 2 ou 3!\n";

    cin >> opcoesiniciais;

    switch (opcoesiniciais)
    {
    case 1:

        cout << "\nSinopse:\n";
        cout << "Um grupo de amigos decide se aventurar em uma jornada numa floresta que est� coberta de neve,\npor�m eles descobrem algumas coisas que n�o estavam nos planos deles...\n\n";
        cout << "\nIntrodu��o:\n\n";
        cout << "Foi uma longa e cansativa jornada at� aqui, agora falta pouco para chegarmos �quela cabana onde ir�amos nos refugiar da neve, ficamos muito aliviados ao encontrar a nossa �nica garantia de que n�o morrer�amos congelados esta noite.\n";
        cout << "\nApesar da temperatura negativa das montanhas eu j� n�o sentia mais tanto frio como antes gra�as ao esfor�o necess�riopara chegar a este ponto da colina. A paisagem era linda ainda que repetitiva, o c�u era um azul quase p�lidoe sem\nnuvens, as altas montanhas eram cobertas pela densa neve onde ainda dava para ver os �ltimos e fracos raios do sol,\nas �rvores da floresta estavam quase totalmente brancas, mesmo assim, como qualquer outra floresta, ela emitia\numa atmosfera m�tica e misteriosa desde seu interior.\n\n";
        cout << "Enquanto sub�amos a colina em dire��o � cabana, Beatriz �s vezes parava e tirava algumas fotos da paisagem e de\ntodos n�s, depois guardava as fotos impressas na sua mochila. Era o nosso costume sempre antes de dormir\nolharmos as fotos. As fotos que ela tirava eram sempre incr�veis.\n\n";
        cout << "-Eu sei que voc�s est�o cansados, mas precisamos continuar, s� falta mais um pouco para chegarmos �quela\ncabana. -Daniel\n\n";
        cout << "-Mas por que n�o, digo, j� encontramos a cabana, poder�amos descansar um pouco agora. -Leonardo\n\n";
        cout << "-Acontece que falta pouco para escurecer, e nada garante que dentro da cabana tenha lenha para a fogueira.\nEu s� quero me precaver. -Daniel\n\n";
        cout << "-Uau, n�o tinha pensado nisso. Acho que voc� tem raz�o. -Leonardo\n\n";
        cout << "-Se n�o houver lenha ent�o Leo vai pegar a lenha desta vez. -Beatriz\n\n";
        cout << "-Hey!!! Por que eu?! ? -Leonardo\n\n";
        cout << "-Porque voc� foi o �nico que n�o foi pegar lenha at� agora! -Beatriz\n\n";
        cout << "-Mas foi justo, n�o tenho culpa se voc�s tiram o maior palito sempre. -Leonardo\n\n";
        cout << "-Seria mais justo se voc� fosse buscar a lenha pelo menos uma vez! -Beatriz\n\n";
        cout << "-Se acalmem voc�s dois, n�o precisamos ficar discutindo aqui e agora,\nvamos nos concentrar em chegar l� primeiro. -Daniel\n";
        cout << "\nDaniel era como se fosse o mais adulto entre n�s, ele cuidava da gente e resolvia os problemas que causamos. Sem ele j� estar�amos perdidos a muito tempo.\n";
        cout << "\nAp�s mais alguns minutos de caminhada colina acima, conseguimos chegar na cabana. Por fora ela parecia r�stica\ne fr�gil,como se n�o fizesse sentido, por que algo t�o vulner�vel em um lugar in�spito como este?\n\n";
        cout << "-Daniel, acho que dever�amos procurar outro lugar. N�o me parece muito seguro passar a noite aqui. -Beatriz\n\n";
        cout << "-N�o me parece t�o ruim assim, na verdade tivemos sorte de encontrarmos uma cabana abandonada aqui. -Leonardo\n\n";
        cout << "-Porque voc� acha que ela est� abandonada ent�o!? Alguma coisa deve ter acontecido para n�o haver ningu�m morando\naqui. -Beatriz\n\n";
        cout << "-Bea, voc� est� come�ando a imaginar coisas. -Leonardo\n\n";
        cout << "-Ainda falta algumas horas para anoitecer, me parece um pouco perigoso ficar aqui,\nmas por outro lado seguir sem rumo seria imprud�ncia. -Daniel\n\n";
        cout << "-Bom, pensando por esse lado, talvez ficar realmente n�o seja t�o ruim -Beatriz\n\n";
        cout << "-Eu voto em ficarmos aqui na cabana. Melhor ter algum tipo de prote��o do que nenhum -Leonardo\n\n-Eu voto em ficar tamb�m -Beatriz";
        cout << "-Eu voto em sairmos. Eren, o que voc� acha? -Daniel\n\n";
        cout << "ESCOLHA:\n";
        cout << "Op��o 1: Ficar na Cabana.\nOp��o 2: N�o ficar.\nOp��o 3: Mudan�as Drasticas, vamos todos embora!\nOp��o 4: ???\n\n";

        if (primeiraescolha)
        {
            cin >> primeiraescolha;
            while (primeiraescolha < 1 || primeiraescolha > 4)
            {
                cout << "ESCOLHA:\n";
                cout << "Op��o 1: Ficar na Cabana.\nOp��o 2: N�o ficar.\nOp��o 3: Mudan�as Drasticas, vamos todos embora!\nOp��o 4: ???\n\n";
                cin >> primeiraescolha;
            }

            switch (primeiraescolha)
            {
            case 1: // escolha 1
                cout << "\n-Eu voto em ficarmos aqui na cabana. Melhor ter algum tipo de prote��o do que nenhum. -Voc�\n";
                cout << "\n-Bom, pelo jeito eu fui o voto vencido. Ficaremos aqui ent�o. -Daniel.\n";
                cout << "\nNos dividimos para explorar a cabana. Possu�a uma �rea bem ampla na entrada. Na parede da esquerda, uma escada\nlevava para um andar levemente acima. Do lado da escada havia uma porta. Esta, levava para um por�o.\nTudo vazio. Algumas teias de aranha, cinzas, restos de velas. Completamente abandonada.\nNo final da sala principal havia um espa�o para fogo.\n";
                cout << "\n-Acredito que eu terei que buscar lenha ent�o... -Leonardo\n";

                cout << "\nESCOLHA:";
                cout << "\nOp��o 1: Deixar Leo ir sozinho.\nOp��o 2: Oferecer para ir junto a Leo.\n\n";
                cin >> a1;

                switch (a1)
                {
                case 1: // escolha 1.1
                    cout << "\nSim, e trate de n�o demorar. -Voc�\n";
                    cout << "\nLeonardo partiu levando um saco de guardar barracas. Ent�o come�amos a preparar a barraca. Daniel e Beatriz\npreparavam os sacos de dormir enquanto eu dava um jeito de limpar o p� grosso da cabana. Est�vamos\norganizando �gua, recipientes para urinarmos durante a noite, comida, mapas, quando de repente? BAM!\nFez a porta da cabana sendo estourada. Pulamos de susto, achando que era Leonardo. Na porta encontrava-se um homem.\nEstava envolvido em um sobretudo de couro preto, com rasgos e marcas de uso. N�o possu�a um dos olhos normais.\nAo inv�s disso, possu�a um olho preto rachado ao meio, com um brilho cor de �mbar saindo da rachadura e da �ris.\nRosto fino e sem barba. Cabelos pretos escorridos para tr�s. Bra�os e pernas fortes, como algum lenhador.\nBotas de couro preto e cal�a cinza de sarja. Vestia um colete preto com detalhes em vermelho vinho.\n";
                    cout << "\n-Venham comigo. Voc�s n�o sabem o mal que acabaram de despertar e correm imenso perigo.\nH� mais algu�m com voc�s? - Homem Misterioso\n\n";
                    cout << "-DANIEEEEEEL, BEATRIZ, EREN -Leonardo\n";
                    cout << "\nLeonardo chegou apavorado\n";
                    cout << "\n-Voc�s n�o v�o acredit? -Leonardo\n";
                    cout << "\n-�rvores falantes? Rituais? Fen�menos paranormais? Nada se compara com o perigo de verdade. Voc�s entraram aqui. Ele est� a solta. Por isso, preciso que venham comigo agora. -Homem Misterioso\n";
                    cout << "\nSeguimos o homem at� uma cabana semelhante, � margem de um rio que passava perto. O homem bateu na porta. Quem abriu foi um senhor alto, magro, com roupas velhas. Sua barba cobria todo o pesco�o. O cabelo branco e escorrido, jogado\npara a frente, deixava apenas os olhos de fora. Suas m�os pareciam carv�o, como se foram queimadas, mas suas\nunhas estavam intactas. A cabana tinha a mesma apar�ncia da �ltima. Sinais marcados nos troncos decoravam as paredes de madeira. Tinha cheiro de velas, incenso e p�lvora. Curiosamente, nenhuma cabe�a de animal de decora��o.\nNa parede paralela � porta, ao lado de uma escada de m�o, havia uma cole��o de espadas e talism�s.\nEntramos rapidamente. Os dois homens discutiam no dialeto local.\n";
                    cout << "\n-Eicheabim piroyvmo nmuskas ethem �liat -Homem Misteriosom\n";
                    cout << "\n-Ramhnhum cvalot oriatux pazlis womber tyrivda -Respondeu o dono da cabana\n";
                    cout << "\nDaniel disse que n�o conseguia traduzir tudo. Falavam sobre um arauto. Uma entidade. Sacrif�cios. Refugiados.\nBarreiras. Ex�rcito. Depois de uma conversa r�pida e em tom de desespero, o homem de sobretudo pegou\num talism� na m�o e guardou em meu bolso. Depois sacou uma adaga do sobretudo e nos ofereceu:\n";
                    cout << "\nESCOLHA:";
                    cout << "\nOp��o 1: Aceitar.\nOp��o 2: Recusar.\n\n";
                    cin >> a1;

                    if (a1 == 1)
                    {
                        adaga = 1;
                        cout << "\nVoc� aceitou a adaga\n";
                    }

                    else if (a1 == 2)
                    {
                        adaga = 0;
                        cout << "\nVoc� recusou a adaga\n";
                    }

                    // escolha 1.1 + item
                    cout << "\nDepois apontou para um mapa antigo na parede. Seguindo o rio em dire��o a nascente estaria, no topo de uma montanha, a entrada de uma caverna que aparentava conter algum tipo de agrupamento humano. O outro homem organizou algumas\nprovis�es em uma bolsa de couro e entregou-nos. Sa�mos todos da cabana. Por fim, os dois desejaram boa sorte\nno idioma local e partiram para o outro lado das montanhas.\n";
                    cout << "\n-Voc�s est�o doidos se acham que eu vou seguir o conselho desses dois. EU OUVI �RVORES FALAREM -Leonardo\n";
                    cout << "\n-Preciso concordar, o melhor seria irmos para casa mesmo -Beatriz\n";
                    cout << "\n-Jamais! � justamente o fato do Leo ter ouvido �rvores falantes que torna invi�vel o retorno � cabana.\nDevemos seguir a rota dos locais. Apenas isso nos trar� seguran�a -Daniel\n";
                    cout << "\n-Ent�o vai ficar pro Eren decidir de novo? Quem foi que instituiu que o voto do Daniel contava por doi -Leonardo\n";
                    cout << "\n-Voc� mesmo quando queria fazer uma fogueira s� para assar r�s selvagens -Beatriz\n";
                    cout << "\nESCOLHA:";
                    cout << "\nOp��o 1: Votar para fazer a rota.\nOp��o 2: Voltar para casa.\n\n";

                    cin >> a1;

                    if (a1 == 1) // escolha 1.1.1
                    {
                        cout << "\n-Daniel tem raz�o, esses dois homens s�o nossa �nica salva��o -Voc�\n";
                        cout << "\nSeguimos em dire��o � nascente do rio. Est�vamos quase esgotando as provis�es. Por sorte, n�o cruzamos com nenhum\nanimal agressivo. Leonardo, entretanto, reclamava de dor nos p�s, j� que caminhara mais cedo para pegar lenha.\nN�o � toa, caminh�vamos a horas por uma subida cada vez mais desafiadora. A noite estava bem avan�ada e\na c�mera de Beatriz esgotara a bateria em breve.\n";

                        cout << "\n-Socorro! -???\n";

                        cout << "\nUm homem gritou. Eu e Beatriz partimos imediatamente em dire��o ao pedido para ver do que se travava. Daniel\ne Leonardo mantiveram um p� atr�s. Achamos um soldado do ex�rcito sendo atacado. Em cima dele, uma\ncriatura diab�lica. Uma mistura de homem e criatura. Mi�do, de pele cinza e rugosa, olhos pretos brilhantes,\nutilizando uma t�nica preta velha e rasgada, a criatura estava tentando arrancar o bra�o do soldado.\n";
                        if (adaga == 1)
                        {
                            cout << "\nESCOLHA:";
                            cout << "\nOp��o 1: Partir para cima.\nOp��o 2: Deixar para tr�s.\n\n";
                            cin >> a1;

                            if (a1 == 1) // trama nova 1
                            {
                                soldado = 1;
                                cout << "\nPeguei minha adaga e parti para cima da criatura com tudo. Mirei na testa, entre os olhos. O golpe foi perfeito.\nA adaga ent�o come�ou a brilhar laranja forte. N�o consegui tirar ela da testa do ser, que agonizava,\ncomo se a adaga queimasse sua cabe�a. A criatura correu para longe, mata a dentro.\n";
                                cout << "\n-Muito Obrigado pelo apoio...(Ofegante) Voc�s s�o turistas? Aonde est�o indo? -Soldado\n";
                                cout << "\n-Estamos indo para o ref�gio no topo da montanha -Daniel\n";
                                cout << "\n-Olha, o que eu posso dizer � que essa �rea n�o � segura. Acompanharei voc�s at� o topo. De l�, chamarei o helic�ptero e ele resgatar� todos -Soldado\n";
                            }

                            else if (a1 == 2) // trama nova 2
                            {
                                soldado = 0;
                                cout << "\nHorrorizado, fiquei com um medo profundo. Continuamos em dire��o � nascente, praticamente trotando agora.\nSabe-se l� que pergio aquela criartura oferecia. N�o est�vamos em condi��es de ajudar ningu�m\n";
                            }
                        }

                        else if (adaga == 0)
                        {
                            soldado = 0;
                            cout << "\nHorrorizado, fiquei com um medo profundo. Continuamos em dire��o � nascente, praticamente trotando agora.\nSabe-se l� que pergio aquela criartura oferecia. N�o est�vamos em condi��es de ajudar ningu�m\n";
                        }
                        cout << "\nFinalmente hav�amos chegado � nascente do rio. O c�rrego flu�a de uma caverna, de entrada larga e levemente iluminada por tochas.\n";
                        cout << "\nO vento no alto da montanha se intensificava. As �rvores come�aram a ranger os galhos. As aves noturnas voavam para longe. Parecia fluir de todas as dire��es, inclusive de dentro da caverna. A poeira em torno de n�s subia em formato de espiral. Uma rajada com for�a descomunal soprou uma rocha solta como se fosse uma bola de papel.\n";
                        cout << "\nEnt�o, tudo cessou. De perto da caverna uma figura sombria aparecia. Um velho. Porte pequeno. Vestia uma t�nica ritual�stica preta rasgada. Semelhante ao anterior. Mas este mais vivo. Mais novo. Mais forte. Como se fosse o chefe do anterior.\n";
                        cout << "\n-Ent�o acham que podem invadir o terreno dela, atormentar sua casa, matar seus filhos e NADA ACONTECER�? -Homen misterioso\n";
                        cout << "\n-N�o se pudermos impedir - Homem misterioso\n";
                        cout << "\nOs dois homens que haviam indicado a rota apareceram por tr�s de n�s.\n";
                        cout << "\n-7 seres, uhmmmm? um prato cheio para ela. QUE ASSIM SEJA -Homen Misterioso\n";
                        cout << "\nO velho se mexia a uma velocidade descomunal ao redor de n�s\n";
                        cout << "\n-FIQUEM JUNTOS. USEM O MEDALH�O -Homem Misterioso\n";
                        cout << "\nTodos n�s, exceto os dois homens nos unimos, de m�os dadas. Uma bola de energia amarelada nos cobriu, como um escudo.O velho tentou penetrar a prote��o e foi arremessado para longe. O Homem misterioso disparou 3 tiros de seu rev�lver cano longo, mas o velho desviou dos 3. Ent�o o outro senhor desembainhou uma espada, que brilhava verde, e correu a\numa velocidade sobre humana at� o velho, que desviou por debaixo da espada, ajoelhado, desferindo uma esp�cie de\nfeiti�o preto contra o mais mo�o. O feiti�o atingiu uma esp�cie de pel�cula tamb�m amarelada que envolvia o homem,\npartindo-a. O senhor de barba tentou mais uma sequ�ncia de ataques com espada. Utilizando as duas m�os desferiu uma\nsequ�ncia de golpes. Cima esquerda para baixo direita, rodopio, esquerda para direita a altura m�dia, cima para baixo, baixo esquerda para cima direita, estocada e, por fim, um chute girat�rio de costas, que empurrou o velho com muitaviol�ncia. A criatura ent�o desapareceu e reapareceu atr�s do mais mo�o, empurrando-o com a mesma for�a do chute\nquelevara. O rev�lver caiu para perto de n�s, que apenas observ�vamos. O homem das m�os queimadas partiu para a\nluta corporalcom o velho. Ambos seguravam as m�os um do outro, empurrando. As duas soltavam fa�scas magentasznquando em contato. A oportunidade estava ali, diante de meus olhos. Com o mais mo�o no ch�o, o rev�lver me chamava.\n";
                        cout << "\nESCOLHA:";
                        cout << "\nOp��o 1: Pegar rev�lver.\nOp��o 2: N�o pegar o rev�lver.\n\n";
                        cin >> a1;

                        if (a1 == 1 && soldado == 1) // final 1 + Soldado
                        {
                            cout << "\nTomei coragem. Soltei minha m�o e corri. Peguei o rev�lver. O velho estava na mira. POW! POW! POW! POW! click, click,click! Disparei todos os tiros restantes. Dois foram fora. Um no corpo. E o �ltimo, no centro da cabe�a.\nO velho caiu duro no ch�o.\n";
                            cout << "\nEst�... morto? -Daniel\n";
                            cout << "\n-N�o podemos garantir. Reencarna��o e possess�o n�o s�o coisas incomuns a seguidores fi�is dela. -Homem Barbudo\n";
                            cout << "\n-Encontrei sinal. Estou chamando resgate militar. Hoje � o dia de sorte de voc�s 4. Voc�s v�o pra casa! -Soldado\n";
                        }

                        if (a1 == 1 && soldado == 0) // final 1 sem Soldado
                        {
                            cout << "\nTomei coragem. Soltei minha m�o e corri. Peguei o rev�lver. O velho estava na mira. POW! POW! POW! POW! click, click,click! Disparei todos os tiros restantes. Dois foram fora. Um no corpo. E o �ltimo, no centro da cabe�a.\nO velho caiu duro no ch�o.\n";
                            cout << "\n-Est�... morto? -Daniel\n";
                            cout << "\n-N�o podemos garantir. Reencarna��o e possess�o n�o s�o coisas incomuns a seguidores fi�is dela. -Homem Barbudo\n";
                            cout << "\n-Busquem ref�gio na caverna pelos pr�ximos dias. Se algu�m conseguir� levar voc�s para casa em seguran�a,\ns�o eles -Homem Misterioso\n";

                            cout << "\nVoc� e seus amigos conseguiram sobreviver e achar abrigo. Dentro da caverna havia um grupo de pessoas que viviam\nisoladas. Falavam diversos dialetos al�m  do local. Alguns eram da regi�o. Muitos eram refugiados que\nperderam amigos e fam�lia nas redondezas, passando o restante de suas vidas dedicados a fornecer\najuda a novos perdidos.\n\n";
                        }

                        if (a1 == 2 && soldado == 1) // final 2 + Soldado

                        {
                            cout << "\nN�o havia motivos para me arriscar. Permaneci na prote��o. O velho chutou a perna do homem de barba, quebrando-a.\nIsso bastou para que ele pudesse tomar controle. Uma sequ�ncia brutal de golpes foi desferida, transformando a cabe�ado homem em um bolo de carne e sangue. In�meras criaturas semelhantes �quela encontrada anteriormente se\naproximaram. Algumas trataram de dar um fim ao outro homem, ao passo que as remanescentes corriam em nossa dire��o.\nCome�aram a socar a barreira, que estava cedendo. O talism� rachou. A barreira foi desfeita. PRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR!!!!!!!!!!!!!!!!!!!!!!!!!!! Era o som de uma metralhadora girat�ria acoplada a um helic�ptero! Tr�s deles.\n";
                            cout << "\n-ACHEI QUE NUNCA VIRIAM -Soldado\n";
                            cout << "\n-Chegamos a tempo de trocar sua cueca, n�o �, 081? -Soldado\n";
                            cout << "\nVoc� e seus amigos s�o resgatados por um grupo militar local. Eles cuidam de levar voc�s at� casa em seguran�a.\nParab�ns, voc�s est�o � salvo.\n\n";
                        }

                        if (a1 == 2 && soldado == 0) // final 2 sem soldado

                        {
                            cout << "\nN�o havia motivos para me arriscar. Permaneci na prote��o. O velho chutou a perna do homem de barba, quebrando-a.\nIsso bastou para que ele pudesse tomar controle. Uma sequ�ncia brutal de golpes foi desferida, transformando a\ncabe�a do homem em um bolo de carne e sangue. In�meras criaturas semelhantes �quela encontrada anteriormente se\naproximaram. Algumas trataram de dar um fim ao outro homem, ao passo que as remanescentes corriam em nossa dire��o.\nCome�aram a socar a barreira, que estava cedendo. O talism� rachou. A barreira foi desfeita. Ent�...\n";
                            cout << "\nVoc� e seus amigos sentem in�meros dentes perfurando seus corpos.\n\nSua vista fica cada vez mais escura. O som cada vez mais abafado.\n\n� o fim...\n\n";
                        }
                    }

                    else if (a1 == 2) // Escolha 1.1.2
                    {
                        cout << "\nEu s� quero ir pra casa -Voc�\n";
                        cout << "\nSeguimos nossa viagem normalmente. Ap�s 45 minutos de caminhada, a paisagem mudou por detalhes.\n\nGarrafas se encontravam penduradas em �rvores. Inicialmente vazias, posteriormente elas possu�am l�quidos dentro.\n\nAlguma oferenda? As garrafas ent�o foram substitu�das por pedras preciosas, itens como espelhos, j�ias, rel�gios, capacetes de a�o, peda�os de armadura, at�? Um cad�ver. De algo. Uma criatura em osso. Parecia humano.\n\n Tinha cabe�a de porco. M�os de urso. Chifres de bode. Asas de �guia. ?Ele te v�? estava entalhado em uma pedra.\n";
                        cout << "\nMas que porr... -Leonardo\n";
                        cout << "\nEU FALEI QUE DEVER�AMOS SEGUIR A ROTA! -Daniel\n";
                        cout << "\nDa dire��o do cad�ver, uma figura sombria aparecia. Um velho. Porte pequeno. Vestia uma t�nica ritual�stica preta rasgada.\n";
                        cout << "\nEla fica ainda mais feliz com aqueles que invadem seu terreno sagrado -Velho\n";
                        cout << "\nAs �rvores come�aram a se contorcer, formando uma barreira natural ao redor de n�s.\n\nCom uma velocidade descomunal, uma delas projetou um galho que atravessou a nuca de Leo, saindo pela testa.\n\nA morte foi instant�nea. Leonardo agora estava pendurado pela cabe�a. Desesp...\n";
                        cout << "\nO mesmo acontece com voc�. Sua morte � instant�nea. T�o r�pida que n�o houve tempo de revisitar suas mem�rias. A �ltima imagem que voc� v� � a figura velha misteriosa. � o fim.\n";

                        cin >> a1;
                    }
                    break;
                case 2: // escolha 1.2
                    cout << "\neu posso ir com voc�, mas s� dessa vez Leo - voc�";
                    cout << "\nEu e Leonardo fomos juntos ent�o. Levamos alguns sacos que t�nhamos para ajudar no transporte. A floresta era densa. As �rvores pareciam se repetir.";
                    cout << "\nJ� n�o passamos por essa �rvore antes - voc�";
                    cout << "\nN�o tenho certeza. Achei que voc� soubesse o que est�vamos fazendo - Leonardo";
                    cout << "\nParamos ent�o para analisar o ambiente. N�o muito longe, vi o que parecia ser um antigo basti�o.\n";
                    cout << "\nESCOLHA:";
                    cout << "\nOp��o 1: Ignorar o basti�o.\nOp��o 2: Avisar sobre basti�o.\n\n";
                    cin >> a1;

                    if (a1 == 1) // Escolha 1.2.1
                    {
                        cout << "\nSeguimos nossa viagem normalmente. Ap�s 15 minutos de caminhada, a paisagem mudou por detalhes. Garrafas se encontravam penduradas em �rvores. Inicialmente vazias, posteriormente elas possu�am l�quidos dentro. Alguma oferenda? As garrafas ent�o foram substitu�das por pedras preciosas, itens como espelhos, j�ias, rel�gios, capacetes de a�o, peda�os de armadura, at�? Um cad�ver. De algo. Uma criatura em osso. Parecia humano. Tinha cabe�a de porco. M�os de urso. Chifres de bode. Asas de �guia. ?Ele te v�? estava entalhado em uma pedra.";
                        cout << "\nMas que porr? - Leonardo";
                        cout << "\nN�o fa�o a menor ideia. Mas acho que viemos para o local errado - Voc�";
                        cout << "\nVoc� sabe o caminho de volta? - Leonardo";
                        cout << "\nAchei que voc? - Voc�";
                        cout << "\nVOC� N�O SABE O CAMINHO DE VOLTA?";
                        cout << "\nDa dire��o do cad�ver, uma figura sombria aparecia. Um velho. Porte pequeno. Vestia uma t�nica ritual�stica preta rasgada. ";
                        cout << "\nEla fica ainda mais feliz com aqueles que invadem seu terreno sagrado - Velho";
                        cout << "\nAs �rvores come�aram a se contorcer, formando uma barreira natural ao redor de n�s. Com uma velocidade descomunal, uma delas projetou um galho que atravessou a nuca de Leo, saindo pela testa. A morte foi instant�nea. Leonardo agora estava pendurado pela cabe�a. Desesp...";
                        cout << "\nO mesmo acontece com voc�. Sua morte � instant�nea. T�o r�pida que n�o houve tempo de revisitar suas mem�rias. A �ltima imagem que voc� v� � a figura velha misteriosa. � o fim. ";
                    }

                    else if (a1 == 2) // escolha trama nova
                    {
                        cout << "\nE aquele basti�o. Ser� que algo ou algu�m n�o poderia nos ajudar ali? - Voc�";
                        cout << "\nVoc� n�o acha que iremos nos perder? - Leo";
                        cout << "\nE j� n�o estamos perdidos? por acaso voc� sabe o caminho de volta?  - Voc�";
                        cout << "\nLeonardo concordou. Caminhamos at� a estrutura por algum tempo. O c�u j� estava escuro quando chegamos l�. Batemos na �nica porta de acesso ao interior. Ningu�m respondeu. Leonardo for�ou a porta e, para a nossa surpresa, ela abriu.";
                        cout << "\nAhm, voc�? voc� t� vendo isso??? - Leonardo";
                        cout << "\nCandelabros e tochas acesas iluminavam um sal�o enorme, cheio de, entre outras coisas, lenha! O lugar parecia como se algu�m morasse ali, apesar de ningu�m ter atendido a porta. Com medo, entramos. As paredes possu�am grava��es ou runas em alguma l�ngua ancestral entalhadas ao longo de toda sua extens�o. Um sentimento de ang�stia tomava conta de n�s. POW! O barulho de um tiro ecoou pelo sal�o. Nossos ouvidos zuniam. Um homem de estatura mediana e torso largo segurava um rev�lver cano longo em suas m�os, do qual ainda sa�a fuma�a. Estava envolvido em um sobretudo de couro preto, com rasgos e marcas de uso. Na tontura causada pelo tiro, percebi que ele n�o possu�a um dos olhos normais. Ao inv�s disso, possu�a um olho preto rachado ao meio, com um brilho cor de �mbar saindo da rachadura e da �ris. ";
                        cout << "\nVoc�s n�o deveriam estar aqui - Homem Misterioso";
                        cout << "\nDisse ele em uma voz grossa e serena. ";
                        cout << "\n-� tarde demais, voc�s o acordaram. O acordaram ao entrar na cabana. Trouxeram ele at� aqui ao entrarem no basti�o. NINGU�M anda por essas bandas. NINGU�M turista por aqui. Agora, me responda uma simples pergunta. Voc� e seus tr�s amigos est�o perdidos um do outro em um labirinto e precisam escapar. Quem � o �ltimo a sair? -Homem Misterioso\n";
                        cout << "\nESCOLHA:";
                        cout << "\nOp��o 1: Eu.\nOp��o 2: Daniel. \nOp��o 3: Beatriz.\nOp��o 4: Leonardo.\n\n";
                        cin >> a1;

                        if (a1 == 1) // eu
                        {
                            cout << "\n-Precisamos ent�o voltar � cabana onde est�o seus amigos -Homem misterioso\n";
                            cout << "\n-E voc� sabe onde �? -Leonardo\n";
                            cout << "\n-Infelizmente -Homem misterioso\n";
                            cout << "\nFomos correndo at� a cabana. Ao chegarmos l�, Daniel e Beatriz se assustaram. Quando Daniel abriu a boca para falar, um disparo acertou sua testa de forma precisa. Beatriz e Leonardo foram eliminados com a mesma velocidade.\n";
                            cout << "\n-Me perdoe... Voc�s o acordaram e foram marcados... apenas o sacrif�cio dos melhores daria chance de um de voc�s\nescaparem. Vou te apagar com um sedativo. Quando acordar, estar� livre para voltar para casa pelo mesmo caminho\nque veio-Homem misterioso\n";
                            cout << "\nEstava t�o em choque que n�o esbanjei rea��o. N�o avancei, n�o falei. Ent�o, ele cobriu meu nariz com um pano.\nMinha vista come�ou a escurecer. Em um passo de m�gica, meus amigos agoar estavam todos mortos.\n";
                            cout << "\n-Voc� agora � livre para voltar para casa e viver sua vida. Infelizmente, para seus amigos,\n� o fim... -Homem misterioso\n";
                        }
                        if (a1 == 2) // daniel
                        {
                            cout << "\n-Ent�o os outros ser�o sacrificados para livrar o mais fraco -Homem misterioso\n";
                            cout << "\n-Em um instante, voc� escuta um disparo de rev�lver e sente algo perfurando seu cr�nio. Antes que pudesse raciocinar algo, sua vista escurece.\n\n� o fim...\n\n";
                        }
                        if (a1 == 3) // beatriz
                        {
                            cout << "\n-Ent�o os outros ser�o sacrificados para livrar o mais fraco - Homem misterioso";
                            cout << "\n-Em um instante, voc� escuta um disparo de rev�lver e sente algo perfurando seu cr�nio. Antes que pudesse\nraciocinar algo, sua vista escurece.\n\n� o fim...\n\n";
                        }
                        if (a1 == 4) // leonardo
                        {
                            cout << "\n-Precisamos ent�o voltar � cabana onde est�o seus amigos. -Homem misterioso\n";
                            cout << "\n-E voc� sabe o de �? -Leonardo\n";
                            cout << "\n-Infelizmente -Homem misterioso\n";
                            cout << "\nFomos correndo at� a cabana. Ao chegarmos l�, Daniel e Beatriz se assustaram. Quando Daniel abriu a boca para\nfalar,um disparo acertou sua testa de forma precisa. Beatriz foi eliminada com a mesma velocidade.\n";
                            cout << "\nEm um instante, voc� escuta um disparo de rev�lver e sente algo perfurando seu cr�nio.\nAntes que pudesse raciocinar algo, sua vista escurece.\n\n� o fim...\n\n";
                        }
                    }
                }

                break;

            case 2: // escolha 2

                b1 = 0;
                cout << "\n-Voto em procurarmos juntos outro lugar. Algo n�o me cheira bem -Voc�\n";
                cout << "\nPartimos, ent�o, � procura de outro lugar. Beatriz registrava a agora vida noturna com in�meras fotos.\nAp�s horas de caminhada, est�vamos famintos e cansados.\n";
                cout << "\n-Disse que dever�amos ter ficado na cabana. Ao menos ter�amos abrigo contra a temperatura -Leonardo\n";
                cout << "\n-Ningu�m garante que estar�amos melhor na cabana. Animais selvagens, ca�adores, apari��es, qualquer um poderia usara cabana de ref�gio -Daniel\n";
                cout << "\n-Apari��es? at� parece -Leonardo\n";
                cout << "\nESCOLHA:";
                cout << "\nOp��o 1: Recomendar olhar as fotos de beatriz para buscar por algum local.\nOp��o 2: Calar-se, isso seria perda de tempo precioso.\n\n";
                cin >> b1;
                while (b1 < 1 || b1 > 2)
                {
                    cout << "\nESCOLHA:";
                    cout << "\nOp��o 1: Recomendar olhar as fotos de beatriz para buscar por algum local.\nOp��o 2: Calar-se, isso seria perda de tempo precioso.\n\n";
                    cin >> b1;
                }

                if (b1 == 1) // escolha 2.1
                {
                    cout << "\n-E que tal olharmos as fotos da Beatriz para ver se perdemos algo? -Voc�\n";
                    cout << "\n-�tima ideia na verdade -Beatriz\n";
                    cout << "\nAo olharmos as fotos, percebemos uma estrutura de pedra. Como um basti�o. N�o estavamos muito longe.\n";
                    cout << "\n-Bom, acredito que seja nossa melhor op��o -Daniel\n";
                    cout << "\nPartimos juntos.\n";
                    cout << "\nCaminhamos at� a estrutura por algum tempo. O c�u j� estava escuro quando chegamos l�. Batemos na �nica porta de\nacesso ao interior. Ningu�m respondeu. Leonardo for�ou a porta e, para a nossa surpresa, ela abriu.\n";
                    cout << "\n-Ahm, voc�s... voc�s est�o vendo isso??? -Leonardo\n";
                    cout << "\nCandelabros e tochas acesas iluminavam um sal�o enorme, cheio de, entre outras coisas, lenha! O lugar parecia como\nse algu�m morasse ali, apesar de ningu�m ter atendido a porta. Com medo, entramos. As paredes possu�am\ngrava��es ou runas em alguma l�ngua ancestral entalhadas ao longo de toda sua extens�o. Um sentimento de ang�stia\ntomava conta de n�s. POW! O barulho de um tiro ecoou pelo sal�o. Nossos ouvidos zuniam. Um homem de estatura mediana e torso largo segurava um rev�lver cano longo em suas m�os, do qual ainda sa�a fuma�a. Estava envolvido em um\nsobretudo de couro preto, com rasgos e marcas de uso. Na tontura causada pelo tiro, percebi que ele n�o possu�a\num dos olhos normais. Ao inv�s disso, possu�a um olho preto rachado ao meio, com um brilho cor de �mbar saindo\nda rachadura e da �ris.\n";
                    cout << "\nVoc�s n�o deveriam estar aqui -Homem Misterioso\n";
                    cout << "\nDisse ele em uma voz grossa e serena.\n";
                    cout << "\n� tarde demais, voc�s o acordaram. O acordaram ao entrar na cabana. Trouxeram ele at� aqui ao entrarem no basti�o.\nNINGU�M anda por essas bandas. NINGU�M turista por aqui. Agora, me responda uma simples pergunta.\nVoc�s est�o perdidos um do outro em um labirinto e precisam escapar. Quem � o �ltimo a sair?\n";
                    cout << "\nESCOLHA:";
                    cout << "\nOp��o 1: Eu.\nOp��o 2: Daniel. \nOp��o 3: Beatriz.\nOp��o 4: Leonardo.\n\n";
                    cin >> b1;

                    if (b1 == 1) // eu
                    {
                        cout << "\n-Ent�o os outros ser�o sacrificados para livrar o mais fraco -Homem misterioso\n";
                        cout << "\nUm disparo acertou a testa de Daniel testa de forma precisa. Beatriz e Leonardo foram eliminados\ncom a mesma velocidade.\n";
                        cout << "\n-Me perdoe... Voc�s o acordaram e foram marcados... apenas o sacrif�cio dos melhores daria chance de um de voc�s\nescaparem. Vou te apagar com um sedativo. Quando acordar, estar� livre para voltar para casa pelo\nmesmo caminho que veio.\n";
                        cout << "\nEstava t�o em choque que n�o esbanjei rea��o. N�o avancei, n�o falei. Ent�o, ele cobriu meu nariz com um pano.\nMinha vista come�ou a escurecer. Em um passo de m�gica, meus amigos agora estavam todos mortos.\n";
                        cout << "\n-Voc� agora � livre para voltar para casa e viver sua vida. Infelizmente, para seus amigos, � o fim... -Homen\nMisterioso\n";
                    }
                    if (b1 == 2) // daniel
                    {
                        cout << "\n-Ent�o os outros ser�o sacrificados para livrar o mais fraco -Homem Misterioso\n";
                        cout << "\nEm um instante, voc� escuta um disparo de rev�lver e sente algo perfurando seu cr�nio. Antes que pudesse raciocinar\nalgo, sua vista escurece. � o fim...\n";
                    }
                    if (b1 == 3) // beatriz
                    {
                        cout << "\n-Ent�o os outros ser�o sacrificados para livrar o mais fraco -Homem Misterioso\n";
                        cout << "\nEm um instante, voc� escuta um disparo de rev�lver e sente algo perfurando seu cr�nio. Antes que pudesse raciocinar\nalgo, sua vista escurece. � o fim...\n";
                    }
                    if (b1 == 4) // leonardo
                    {
                        cout << "\n-Ent�o os outros ser�o sacrificados para livrar o mais fraco -Homem Misterioso\n";
                        cout << "\nUm disparo acertou a testa de Daniel testa de forma precisa. Beatriz foi eliminada com a mesma velocidade.\n";
                        cout << "\nEm um instante, voc� escuta um disparo de rev�lver e sente algo perfurando seu cr�nio. Antes que pudesse raciocinar\nalgo, sua vista escurece. � o fim...\n";
                    }
                }

                else if (b1 == 2) // escolha 2.2
                {
                    cout << "\nAlguns minutos depois...\n";
                    cout << "\n-Calados! Escutem -Beatriz\n";
                    cout << "\nA audi��o de Beatriz era realmente incr�vel. De repente, todos est�vamos focados no que soava como �gua corrente. \nUm c�rrego.E � margem dele, fuma�a preta e cheiro de lenha que a brisa da noite trazia.\n";
                    cout << "\n-Finalmente alguma civiliza��o por aqui -Leonardo\n";
                    cout << "\nLeo correu em disparada at� a cabana, sem pensar. Quebrando o sil�ncio ensurdecedor da floresta, dois disparos\nforam ouvidos, seguidos por aves voando para longe. Leonardo berrava como uma crian�a rec�m nascida.\nInstintivamente, corremos em dire��o ao nosso amigo, que agonizava com as m�os na perna, deitado na margem do rio.\n\nA alguns metros atr�s dele estava um homem alto, magro, com roupas velhas.\nSua barba cobria todo o pesco�o. O cabelo branco e escorrido, jogado para a frente, deixava apenas os olhos de fora. \nOlhos que ainda estavam focados na mira de um rifle de ferrolho antigo.\n";
                    cout << "\n-N�o queremos briga, apenas provis�es para a noite -Disse Daniel no dialeto local.\n";
                    cout << "\n-Apenas um est�pido correria desesperado nessa matas -Velho\n";
                    cout << "\n-Perdoe nosso amigo. Somos turistas. Gostar�amos apenas de passar a noite na sua resid�ncia. \nAo nascer do sol, partiremos? -Daniel\n";
                    cout << "\n-Voc� parece menos est�pido. Mas lucidez n�o � sinal de confiabilidade. Esse a� (apontando para mim)... quero dentro da minha cabana, j�! Os outros dois idiotas podem cuidar dos ferimentos do terceiro -Velho\n";
                    cout << "\nA cabana tinha a mesma apar�ncia da �ltima. Sinais marcados nos troncos decoravam as paredes de madeira.\n\nA cabana tinha cheiro de velas, incenso e p�lvora. Curiosamente, nenhuma cabe�a de animal de decora��o.\n\nNa parede paralela � porta, ao lado de uma escada de m�o, havia uma cole��o de espadas e talism�s. O velho retirouas luvas, revelando suas m�os parcialmente pretas, como se foram queimadas, de apar�ncia semelhante a carv�o.\nTomou em suas m�os um talism� rachado e come�ou a falar em sua l�ngua natal, que eu n�o compreendia.\n\nSeu tom cada vez mais forte e alto, resmungando palavras estranhas. A cada segundo, a atmosfera de medo me envolvia. As espadas reluziam aos meus olhos...\n";
                    ;
                    cout << "\nESCOLHA:";
                    cout << "\nOp��o 1: Matar o velho.\nOp��o 2: Manter a postura firme\n\n";
                    cin >> b1;
                    while (b1 < 1 || b1 > 2)
                    {
                        cout << "\nESCOLHA:";
                        cout << "\nOp��o 1: Matar o velho.\nOp��o 2: Manter a postura firme\n\n";
                        cin >> b1;
                    }
                    if (b1 == 1) // Escolha 2.2.1
                    {
                        cout << "\nVoc� rapidamente pegou uma das espadas e correu em dire��o ao velho.\n";
                        cout << "\nAo tentar golpe�-lo, uma pel�cula amarela cintilante emanou do corpo dele.\n";
                        cout << "\nUm impulso enorme lhe atingiu, te empurrando contra a parede.\n\nO velho come�ou a berrar de forma extremamente agitada.\n";
                        cout << "\nEmpunhou a espada, que possu�a escritas reluzentes ao longo de sua l�mina e, vindo em sua dire��o,\narremessou-a, cravando a espada em seu peito, lhe prendendo � parede de madeira.\n";
                        cout << "\nLentamente sua vista come�a a escurecer.\n\nO som fica cada vez mais abafado.\n\n� o seu fim...\n\n";
                    }

                    if (b1 == 2) // Escolha comum
                    {
                        cout << "\nVoc� manteve sua posi��o, e n�o cedeu �s falas do velho.\n\nO sujeito estranho apontou para o que parecia ser um mapa antigo. Seguindo o rio em dire��o a nascente estaria\nno topo de uma montanha, a entrada de uma caverna que aparentava conter algum tipo de agrupamento humano.\n\nO velho organizou algumas provis�es em uma bolsa de couro e entregou-me.\n\nTamb�m me ofereceu o talism� que ele segurava...\n";
                        cout << "\nESCOLHA:";
                        cout << "\nOp��o 1: Pegar o talism�\nOp��o 2: Recusar o talism�\n\n";
                        cin >> b1;
                        while (b1 < 1 || b1 > 2)
                        {
                            cout << "\nESCOLHA:";
                            cout << "\nOp��o 1: Pegar o talism�\nOp��o 2: Recusar o talism�\n\n";
                            cin >> b1;
                        }
                        // Sistema de registro do talism�
                        if (b1 == 1)
                        {
                            talisma = 1;
                        }
                        if (b1 == 2)
                        {
                            talisma = 0;
                        }
                        cout << "\nA porta se abriu sozinha. Sa�, e l� estavam Daniel, Beatriz e Leonardo, que possu�a uma tira de tecido namarrada\n� canela e usava um galho r�gido como muleta.\n";
                        cout << "\nRecebi provis�es para continuarmos nossa jornada. N�o podemos dormir aqui, mas subindo o rio deveremos encontrar um agrupamento\n";
                        cout << "\n-Voc� lidera ent�o -Daniel.\n";
                        cout << "\nEst�vamos quase esgotando as provis�es. Por sorte, n�o cruzamos com nenhum animal agressivo. Leonardo, entretanto,\nreclamava da dor intensa. N�o � toa, caminh�vamos a horas por uma subida cada vez mais desafiadora.\nA noite estava bem avan�ada. A c�mera de Beatriz est� ficando sem bateria.\n";
                        cout << "\n-Se tiv�ssemos ficado na cabana... -Beatriz\n";
                        cout << "\n-Se tiv�ssemos ficado na cabana j� estar�amos dormindo e eu n�o estaria com a porra da\nminha perna arrega�ada!!! -Leonardo \n";
                        cout << "\n-N�o diga assim tamb�m. A perna � totalmente sua culpa. -Beatriz\n";
                        cout << "\n-VOC� VAI ME CULPAR POR TER CORRIDO EM DIRE��O AO �NICO ABRIGO QUE ACHAMOS EM QUIL�METROS?\nAchei que estivesse do meu lado... -Leonardo\n";
                        cout << "\n-Que tal voc�s dois pararem de discutir nos momentos mais tensos? Podem brigar o quanto quiserem depois de chegarmos ao lugar. Ali�s, falta muito? -Beatriz\n";
                        cout << "\nESCOLHA:\n";
                        cout << "Op��o 1: Acredito que n�o muito\nOp��o 2: N�o fa�o a menor ideia\n\n";
                        cin >> opcaodefalalaranja;
                        while (opcaodefalalaranja < 1 || opcaodefalalaranja > 2)
                        {
                            cout << "\nESCOLHA:";
                            cout << "Op��o 1: Acredito que n�o muito\nOp��o 2: N�o fa�o a menor ideia\n\n";
                            cin >> opcaodefalalaranja;
                        }
                        if (opcaodefalalaranja == 1)
                        {
                            cout << "\n-Acredito que n�o muito -Voc�\n";
                        }
                        if (opcaodefalalaranja == 2)
                        {
                            cout << "\n-N�o fa�o a menor ideia -Voc�\n";
                        }
                        cout << "\nFinalmente hav�amos chegado � nascente do rio.\n\nO c�rrego flu�a de uma caverna, de entrada larga e levemente iluminada por tochas.\n\nO vento no alto da montanha se intensificava. As �rvores come�aram a ranger os galhos.\n\nAs aves noturnas voavam para longe. Parecia fluir de todas as dire��es, inclusive de dentro da caverna.\n\nA poeira em torno de n�s subia em formato de espiral.\n\nUma rajada com for�a descomunal soprou uma rocha solta como se fosse uma bola de papel...\n";

                        if (talisma == 1) // final laranja 1 e 2, escolha de usar talism� ou n�o
                        {
                            cout << "\nESCOLHA:";
                            cout << "\nOp��o 1: Usar o talism�\nOp��o 2: Guardar o talism� para um momento mais importante\n\n";
                            cin >> b1;
                            while (b1 < 1 || b1 > 2)
                            {
                                cout << "\nESCOLHA:";
                                cout << "\nOp��o 1: Usar o talism�\nOp��o 2: Guardar o talism� para um momento mais importante\n\n";
                                cin >> b1;
                            }
                            if (b1 == 1) // Final laranja 1
                            {
                                cout << "\nLembrei-me do talism� em meu bolso e decidi us�-lo.\n\n-Os tr�s, segurem o talism�!!! -Voc�\n\nTodos seguraram ao mesmo tempo. O talism� vibrava e emitia uma luz p�rpura. \nDe repente, sentimos como se toneladas de for�a nos prendesse ao ch�o. \nTamb�m n�o consegu�amos solt�-lo. Ap�s o que pareceu uma eternidade, a tempestade cessou. \nPudemos, enfim, adentrar a caverna.\n\nVoc� e seus amigos conseguiram sobreviver e achar abrigo. \nDentro da caverna havia um grupo de pessoas que viviam isoladas. \nFalavam diversos dialetos al�m  do local. Alguns eram da regi�o. \nMuitos eram refugiados que perderam amigos e fam�lia nas redondezas, \npassando o restante de suas vidas dedicados a fornecer ajuda a novos perdidos.\n";
                            }

                            if (b1 == 2) // Final laranja 2
                            {
                                cout << "\nEm seguida, uma rajada concentrada atingiu Leo, que estava agarrado a uma raiz de �rvore.\n\nTanto ele, quanto a �rvore foram arrancados e soprados montanha abaixo.\n\nBeatriz berrava o nome de Leonardo, aterrorizada, chorando. Lembrou-se dos momentos de inf�ncia.\n\nDas vezes em que ele se voluntariava para que ela pudesse treinar as habilidades de fotografia.\nDe como ele havia sido o irm�o que ela nunca teve.\n\nQueria n�o ter discutido com ele anteriormente. Agora, suas �ltimas lembran�as dele seriam as discuss�es em momentos de desespero.\n\nN�o teve tempo de se desculpar, de consertar as coisas.\n\n-ESQUE�AM ISSO, FOQUEM EM N�O SEREM OS PR�XIMOS! -Daniel\n\nEra tarde demais. O homem que garantia a seguran�a e a salva��o de todos n�o pode salvar a si mesmo.\n\nUma rocha desprendeu-se do pico e o acertou em cheio. Esmagado, o corpo dividido de Daniel escorregava pela encosta,\ndeixando um rastro de sangue no solo, que afinava conforme o corpo acelerava.\n\nOlhei para Beatriz. Estava im�vel, horrorizada. Tentei alcan��-la, abra��-la, dizer que tudo ficaria bem.\n\nMentindo para mim mesmo, tentei passar confian�a. Aproximei-me e estendi a m�o.\n\nA adrenalina disparou por meu corpo quando senti nossos dedos tocando.\n\nEnt�o, o solo abaixo de Beatriz cedeu, e em quest�o de um instante minhas m�os estavam vazias, \napalpando o ar gelado da montanha que tirara a vida de meus tr�s melhores amigos. \n\nO corpo de Beatriz dissipara-se, assim como seu �ltimo grito, por toda a extens�o da maldita montanha. \n\nEnt�o o talism� em meu corpo vibrou. Senti como se toneladas me prendessem ao ch�o. O vento ent�o cessou. \n\nL� estava eu, sozinho, frente a caverna. Me perguntava o que teria acontecido se tiv�ssemos ficado na cabana.\n\nMe perguntava o porqu� de n�o ter usado o talism�. Por que o velho me escolhera, e n�o Daniel, que falava\no dialeto local. \n\n� minha frente agora est� a maldita caverna. Atr�s de mim, meus amigos, bem como um enorme precip�cio que me uniria\na eles novamente.\n";
                                cout << "\nESCOLHA";
                                cout << "\nOp��o 1: Encerrar a jornada\nOp��o 2: Continuar lutando\n\n";
                                cin >> b1;
                                while (b1 < 1 || b1 > 2)
                                {
                                    cout << "\nESCOLHA";
                                    cout << "\nOp��o 1: Encerrar a jornada\nOp��o 2: Continuar lutando\n\n";
                                    cin >> b1;
                                }

                                if (b1 == 1) // Encerrar a jornada
                                {
                                    cout << "\nEste � o fim... N�o conseguirei viver com o peso de ser correspons�vel pela morte deles.\n\nN�o suportarei o peso de passar os pr�ximos dias sozinho com meus pensamentos.\n\nN�o quero descobrir o que tem naquela caverna.\n\nQuero que aquele velho morra. Que pague por n�o nos oferecer abrigo. Viro-me de costas. Caminho.\n\nUm novo vento sopra meu corpo. Mas este, calmo, suave, agrad�vel.\n\nPor fim, esta � a sensa��o de peso zero. De ser livre. Um p�ssaro voa comigo, me acompanhando at� o pouso.\n\nComo s�o lindas estas criaturas.\n";
                                }

                                if (b1 == 2) // continuar lutando
                                {
                                    cout << "\nN�o me resta mais nada. Mas n�o posso desistir. Lutamos juntos para chegarmos at� aqui, e eu os representarei. \nN�o sei se terei for�as para continuar e lidar com tudo. Mas ao menos sinto que � isso que eles iriam querer. \n� o que Daniel diria se estivesse aqui. Foquem em n�o serem os pr�ximos foi o que ele disse, e assim ser�. \n\n\nVoc� conseguiu sobreviver e achar abrigo. Dentro da caverna h� um grupo de pessoas que vivem isoladas. \nFalam diversos dialetos al�m  do local. Alguns s�o da regi�o. \nMuitos s�o refugiados que perderam amigos e fam�lia nas redondezas,\npassando o restante de suas vidas dedicados a fornecer ajuda a novos perdidos.\n";
                                }
                            }
                        }

                        if (talisma == 0)
                        {
                            cout << "\nEm seguida, uma rajada concentrada atingiu Leo, que estava agarrado a uma raiz de �rvore.\n\nTanto ele, quanto a �rvore foram arrancados e soprados montanha abaixo.\n\nBeatriz berrava o nome de Leonardo, aterrorizada, chorando. Lembrou-se dos momentos de inf�ncia.\n\nDas vezes em que ele se voluntariava para que ela pudesse treinar as habilidades de fotografia.\nDe como ele havia sido o irm�o que ela nunca teve.\n\nQueria n�o ter discutido com ele anteriormente. Agora, suas �ltimas lembran�as dele seriam as discuss�es em momentos de desespero.\n\nN�o teve tempo de se desculpar, de consertar as coisas.\n\n-ESQUE�AM ISSO, FOQUEM EM N�O SEREM OS PR�XIMOS! - Daniel\n\nEra tarde demais. O homem que garantia a seguran�a e a salva��o de todos n�o pode salvar a si mesmo. \n\nUma rocha desprendeu-se do pico e o acertou em cheio. Esmagado, o corpo dividido de Daniel escorregava pela encosta,\ndeixando um rastro de sangue no solo, que afinava conforme o corpo acelerava.\n\nOlhei para Beatriz. Estava im�vel, horrorizada. Tentei alcan��-la, abra��-la, dizer que tudo ficaria bem.\n\nMentindo para mim mesmo, tentei passar confian�a. Aproximei-me e estendi a m�o.\n\nA adrenalina disparou por meu corpo quando senti nossos dedos tocando.\n\nEnt�o, o solo abaixo de Beatriz cedeu, e em quest�o de um instante minhas m�os estavam vazias,\nnapalpando o ar gelado da montanha que tirara a vida de meus tr�s melhores amigos.\n\nO corpo de Beatriz dissipara-se, assim como seu �ltimo grito, por toda a extens�o da maldita montanha.\n\nEnt�o o talism� em meu corpo vibrou. Senti como se toneladas me prendessem ao ch�o. O vento ent�o cessou.\n\nL� estava eu, sozinho, frente a caverna. Me perguntava o que teria acontecido se tiv�ssemos ficado na cabana.\n\nMe perguntava o porqu� de n�o ter usado o talism�.\n\nPor que o velho me escolheu, e n�o Daniel, que falava o dialeto local.\n";
                            cout << "\nUma rajada te acerta com a for�a de mil socos. \nVoc� se desprende e, por alguns instantes, sente peso zero.\n\nEste � o fim";
                        }
                    }
                }

                break;

            case 3:
                cout << "\nMesmo sendo uma jornada cansativa e longa, est�vamos prestes a ter algumas escolhas b�sicas, por�m antes disso\neu senti uma sensa��o de receio sobre uma coisa inexplic�vel, apenas senti que dever�amos fazer uma escolha\no mais r�pido poss�vel.\n";
                cout << "\n-Ei vamos voltar, AGORA!? -Daniel\n";
                cout << "\n-O que? DEMORAMOS HORAS para chegar aqui e voc� simplesmente quer voltar depois da nossa longa jornada? -Leonardo\n";
                cout << "\n-Por qu�? -Beatriz\n";
                cout << "\n-Eu senti uma sensa��o horr�vel? -Daniel\n";
                cout << "\nAo come�ar a explicar a sensa��o que teve, o c�u ficou avermelhado e a luz da escurid�o come�ou a chegar em\ninstantes, antes de qualquer um falar, alguma coisa com uma voz tenebrosa falou, parecia que estava em\ntodo olugar, todos estavam tentando procurar a dire��o que ouviam a voz...\n";
                cout << "\n-...Saem daqui, SAEM DAQUI AGORA (Falou t�o alto que fez as �rvores tremer) -??\n";
                cout << "\n-VAMOS VOLTAR AGORA! -Danie\n";
                cout << "\n-O QUE EST� ACONTECENDO? Isso n�o � uma pegadinha n� Daniel? Se for j� est� sendo longe de mais,\nestou ficando com medo? -Leonardo\n";
                cout << "\n-Leo, olha para o Daniel, ele est� pasmo, ele est� TREMENDO! -Beatriz\n";
                cout << "\nESCOLHA:";
                cout << "\nOp��o 1: Vamos voltar pelo mesmo caminho o mais r�pido poss�vel AGORA.\nOp��o 2: Vamos correr em uma nova dire��o, talvez o nosso caminho j� esteja apagado por causa da neve.\n\n";

                cin >> c1;

                if (c1)
                    while (c1 < 1 || c1 > 2)
                    {
                        cout << "ESCOLHA:\n";
                        cout << "Op��o 1: Vamos voltar pelo mesmo caminho o mais r�pido poss�vel AGORA.\nOp��o 2: Vamos correr em uma nova dire��o, talvez o nosso caminho j� esteja apagado por causa da neve.\n\n";
                        cin >> c1;
                    }
                if (c1 == 1)
                {
                    cout << "\nOs 3 come�aram a correr no mesmo caminho que vieram, mesmo que tenha sido uma longa jornada, por�m nesse momento\neles sentiram que deveriam apenas correr, sem olhar para tr�s, sem fazer nada al�m de correr\npelas pr�prias vidas? Depois da corrida perante algo sobrenatural, eles pararam.\n";
                    cout << "\n-(Ofegante) O que foi AQUILO? -Daniel\n";
                    cout << "\n-(Ofegante) EU QUE PERGUNTO, O QUE FOI AQUILO? -Leonardo\n";
                    cout << "\n-(Ofegante) Eu acho que estamos bem agora, corremos por muito tempo, o que era aquilo eu n�o sei, mas agora\nestamos seguros, vamos apenas caminhar para voltar para casa. -Beatriz\n";
                    cout << "\nMesmo tendo presenciado algo sobrenaturalmente, eles prometeram nunca mais voltar para essa regi�o, e principalmente n�o falar para ningu�m... por causa do medo que sentiram quando ouviram aquela voz...\n";
                    cout << "\nFim...\n";
                }
                else if (c1 != 1)
                {
                    cout << "\n-VAMOS POR AQUI, PARECE SER UMA TRILHA !!! -Daniel\n";
                    cout << "\nTodos come�aram a correr pela trilha, mesmo cansados, eles sentiram que era uma op��o boa... por�m a voz tenebrosa\napareceu novamente com uma apar�ncia de um velho, n�o com um aviso agora, mas sim como uma a��o\npor n�o terem escutado...\n";
                    cout << "\n-(Risadas tenebrosas) VOC�S FORAM AVISADOS! -Velho\n";
                    cout << "\n-QUEM � VOC�? -Daniel\n";
                    cout << "\n-... -Daniel\n";
                    cout << "\n-... -Beatriz\n";
                    cout << "\n-Eu? hahaha, voc�s n�o tem o direito de saber! -Velho\n";
                    cout << "\nDepois da o velho puxa uma espada da cintura com escritas reluzentes.\n";
                    cout << "\n-Hora de ca�ar as novas oferendas!!! -Velho\n";
                    cout << "\nAo verem essa cena, todos come�aram a correr, por�m o velho simplesmente ficou parado com um sorriso.\n";
                    cout << "\n-Adoro brincar de pega-pega com as oferendas hahaha? -Velho\n";
                    cout << "\nMesmo correndo desesperados, o velho ficou parado, mas no momento que eles tiraram o olho, ele apareceu na\nfrente da primeira v�tima, com apenas um corte preciso cortou ao meio o Leonardo.\n";
                    cout << "\n-LEO!!! SEU MONSTRO, Beatriz, apenas CORRA!!! -Daniel\n";
                    cout << "\nNo mesmo momento que o Leonardo falou para a Beatriz correr mais, o velho derrubou ela e cortou com outro corte\npreciso o pesco�o dela.\n";
                    cout << "\n-SEU DESGRA... -Leonardo\n";
                    cout << "\nAp�s gritar novamente com o velho, Leonardo teve o mesmo fim que todos... a morte.\n";
                    cout << "\n-S�rio, eu tento ser bonzinho com esses jovens, avisando para voltarem, mas parecem que fazem de prop�sito,\nENFIM vou fazer bom uso dos corpos deles, usando como sacrif�cio no santu�rio da minha Deusa -Velho\n";
                    cout << "\nFim...\n";
                }
                break;

            default:
                if (primeiraescolha != 1 && primeiraescolha != 2 && primeiraescolha != 3)
                {
                    cout << "\nChegando perto na cabana, ''ca�adores'' pararam a gente, por�m na verdade n�o era ''ca�adores'', eram militares\ncom armamentos pesados, achamos muito estranho no come�o e quando fomos fazer a primeira pergunta a porta da\ncabana de repente se abre e saiu um velho com uma aura sinistra, com uma espada na cintura, de repente ele\npuxa a espada, ela tinha escritas reluzentes e aponta a espada para os militares.\n";
                    cout << "\n-SAEM DA MINHA REGI�O SEUS PORCOS IMUNDOS! -Velho\n";
                    cout << "\nOs militares come�aram a bombardear de tiros, por�m o Velho simplesmente conseguiu desviar de todas as balas,\ncom um sorriso macabro o velho come�ou a atacar, todos ficaram perplexos.\n";
                    cout << "\n-VOC�S V�O SOFRER POR ENTRAR NA REGI�O DA MINHA DEUSA? -Velho\n";
                    cout << "\n-Recuar, AGORA! -Capit�o\n";
                    cout << "\nMesmo com alguns soldados sendo rasgados, veio a ordem do Capit�o para todos recuaram, inclusive os 3 jovens\nque seguiram os soldados sem saber de nada, e o velho apenas voltou para a cabana, depois de um alguns\nminutos chegaram em uma imensa base militar, os jovens perplexos fizeram a primeira pergunta.\n";
                    cout << "\n-O que aconteceu agora? s�rio O QUE EST� ACONTECENDO??? -Daniel\n";
                    cout << "\n-O que � isso? estou sonhando?? -Leonardo\n";
                    cout << "\n-Ah, o que est� acontecendo?? -Beatriz\n";
                    cout << "\n-J� que sem querer voc�s foram vistos pelo ''Bala�o'', n�o tem mais o que esconder de voc�s, irei ser breve, espero\nque entendam, primeiramente n�o somos militares normais, somos ''Demons Hunters'' criados pela uni�o de todos os\ngovernos existentes, e aqui estamos realizando uma miss�o de exterminar aquele velho, que � o ''Bala�o'' que\nfoi dito anteriormente, por fim esperamos que voc�s simplesmente v�o embora e fingem QUE NUNCA VIRAM A\nGENTE, se n�o o governo vai ca�ar voc�s e apagar as suas mem�rias ou at� coisa pior -Capit�o \n";
                    cout << "\n-Ei? mas? t�. -Daniel\n";
                    cout << "\n-...t�. -Leonardo e Beatriz\n";
                    cout << "\nOs jovens simplesmente n�o estavam entendendo quase nada, mas eles entenderam uma coisa, eles n�o deveriam estar l�, e com a ajuda de alguns soldados eles foram evacuados. Enquanto estavam voltando para suas casas, eles viram v�rios\ncarros e helic�pteros militares passando perto deles indo em dire��o a base militar.\n";
                    cout << "\nDepois de tudo o que aconteceu os 3 pensaram a mesma coisa.\n";
                    cout << "\n-O QUE ******* ACONTECEU HJ AQ? -Daniel, Leonardo e Beatriz\n";
                    cout << "\nFim???\n";
                }
            }
        }

        break;

    case 2:
        cout << "\nJogo feito por Douglas, Matheus e Samuel\n";
        break;

    case 3:
        cout << "\nSe voc� realmente deseja sair aperta qlq bot�o novamente :(\n";
        return 0;
        break;

    default:
        break;
    }

    return 0;
}