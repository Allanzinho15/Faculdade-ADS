#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Definição da estrutura do Território
typedef struct {
    char nome[30];
    char cor[10];
    int tropa;
} Territorio;

// Protótipos das funções (Modularização)
void atribuirMissao(char* destino, const char* missoes[], int totalMissoes);
int verificarMissao(char* missao, Territorio* mapa, int tamanho, const char* corJogador);
void exibirMissao(const char* missao);
void atacar(Territorio* atacante, Territorio* defensor);
void exibirMapa(Territorio* mapa, int tamanho);
void liberarMemoria(Territorio* mapa, char* missaoJogador);

int main() {
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    int totalTerritorios = 4;
    
    // REQUISITO: Criação do vetor de missões (Banco de dados de missões)
    const char* bancoDeMissoes[] = {
        "Conquistar 3 territorios",
        "Eliminar todas as tropas da cor Azul",
        "Dominar o territorio de maior poder",
        "Manter pelo menos 10 tropas no total",
        "Conquistar o territorio do norte (Territorio_0)"
    };
    int totalMissoes = 5;

    // REQUISITO: Alocação dinâmica do vetor de territórios usando calloc (limpa a memória)
    Territorio* mapa = (Territorio*) calloc(totalTerritorios, sizeof(Territorio));
    if (mapa == NULL) {
        printf("Erro ao alocar memoria para o mapa.\n");
        return 1;
    }

    // Inicializando territórios para o teste
    strcpy(mapa[0].nome, "Territorio_0"); strcpy(mapa[0].cor, "Vermelho"); mapa[0].tropa = 6;
    strcpy(mapa[1].nome, "Territorio_1"); strcpy(mapa[1].cor, "Azul");     mapa[1].tropa = 3;
    strcpy(mapa[2].nome, "Territorio_2"); strcpy(mapa[2].cor, "Azul");     mapa[2].tropa = 2;
    strcpy(mapa[3].nome, "Territorio_3"); strcpy(mapa[3].cor, "Verde");    mapa[3].tropa = 4;

    // Identificação do Jogador Humano
    const char* corJogadorHumano = "Vermelho";

    // REQUISITO: Armazenamento dinâmico da missão do jogador usando malloc
    // Aloca espaço suficiente para uma string de até 100 caracteres
    char* missaoJogador = (char*) malloc(100 * sizeof(char));
    if (missaoJogador == NULL) {
        printf("Erro ao alocar memoria para a missao.\n");
        free(mapa);
        return 1;
    }

    // REQUISITO: Sorteio e Atribuição da Missão (Passagem por referência do destino)
    atribuirMissao(missaoJogador, bancoDeMissoes, totalMissoes);

    // REQUISITO: Interface Intuitiva (Exibe a missão APENAS uma vez no início)
    printf("==================================================\n");
    printf("         BEM-VINDO AO SIMULADOR DE GUERRA         \n");
    printf("==================================================\n");
    printf("Você está jogando com a cor: %s\n", corJogadorHumano);
    exibirMissao(missaoJogador); // Passagem por valor (apenas leitura)
    printf("==================================================\n\n");

    // Loop de simulação de turnos
    int turno = 1;
    int jogoAtivo = 1;

    while (jogoAtivo && turno <= 3) {
        printf("--- TURNO %d ---\n", turno);
        exibirMapa(mapa, totalTerritorios);

        // REQUISITO: Validação de Ataque (O jogador 'Vermelho' no mapa[0] ataca o 'Azul' no mapa[1])
        printf("\n[TURNO JOGADOR] Tentando atacar...\n");
        if (strcmp(mapa[0].cor, mapa[1].cor) != 0) { // Valida se é território inimigo
            if (mapa[0].tropa > 1) {                  // Valida se possui tropas suficientes para atacar
                atacar(&mapa[0], &mapa[1]);          // Passagem por referência usando ponteiros
            } else {
                printf("[AVISO] Tropas insuficientes em %s para atacar.\n", mapa[0].nome);
            }
        } else {
            printf("[AVISO] Voce nao pode atacar seu proprio territorio!\n");
        }

        // REQUISITO: Verificação Silenciosa da missão ao final de cada turno
        if (verificarMissao(missaoJogador, mapa, totalTerritorios, corJogadorHumano)) {
            printf("\n🏆🎉 PARABENS! O jogador %s cumpriu seu objetivo: '%s' e VENCEU O JOGO! 🎉🏆\n", corJogadorHumano, missaoJogador);
            jogoAtivo = 0;
            break;
        }

        turno++;
        printf("\n");
    }

    if (jogoAtivo) {
        printf("\nO limite de turnos acabou. Ninguem venceu ainda.\n");
    }

    // REQUISITO: Liberação adequada da memória alocada (Evita vazamentos)
    liberarMemoria(mapa, missaoJogador);

    return 0;
}

/* Sorteia uma missão do vetor de strings e copia para a variável destino.
   Passagem por referência implícita via ponteiro (char* destino).
*/
void atribuirMissao(char* destino, const char* missoes[], int totalMissoes) {
    int indiceSorteado = rand() % totalMissoes;
    // Usa strcpy para copiar o conteúdo da string sorteada para o espaço alocado do jogador
    strcpy(destino, missoes[indiceSorteado]);
}

/* Exibe a missão na tela. Passagem por valor (representada pelo ponteiro constante, 
   o que garante que a função só leia e não altere a string original).
*/
void exibirMissao(const char* missao) {
    printf("🎯 SUA MISSAO SECRETA: %s\n", missao);
}

/* Simula o ataque entre dois territórios usando ponteiros.
   Modifica os dados diretamente na memória RAM.
*/
void atacar(Territorio* atacante, Territorio* defensor) {
    printf("⚔️  ATAQUE: %s (%s) atacando %s (%s)!\n", 
           atacante->nome, atacante->cor, defensor->nome, defensor->cor);

    // Sorteio de dados de 1 a 6
    int dadoAtaque = (rand() % 6) + 1;
    int dadoDefesa = (rand() % 6) + 1;

    printf("[DADOS] Ataque: %d | Defesa: %d\n", dadoAtaque, dadoDefesa);

    if (dadoAtaque > dadoDefesa) {
        printf("🎉 VITORIA! %s conquistou %s!\n", atacante->nome, defensor->nome);
        
        // Atualização de campos pós-batalha
        strcpy(defensor->cor, atacante->cor); // Transfere a cor
        
        int metadeTropas = atacante->tropa / 2;
        defensor->tropa = metadeTropas;        // Metade vai para o defensor
        atacante->tropa -= metadeTropas;       // Atacante fica com o restante
    } else {
        printf("🛡️  FALHA! O defensor resistiu.\n");
        atacante->tropa--; // Atacante perde uma tropa
    }
}

/* Avalia se o objetivo foi alcançado. Cria uma lógica inicial simples
   baseada em algumas das strings do banco de dados.
*/
int verificarMissao(char* missao, Territorio* mapa, int tamanho, const char* corJogador) {
    // Lógica simples para a missão "Conquistar 3 territorios"
    if (strcmp(missao, "Conquistar 3 territorios") == 0) {
        int contagem = 0;
        for (int i = 0; i < tamanho; i++) {
            if (strcmp(mapa[i].cor, corJogador) == 0) {
                contagem++;
            }
        }
        return (contagem >= 3); // Retorna 1 (verdadeiro) se tiver 3 ou mais
    }
    
    // Lógica simples para a missão de eliminar tropas Azuis
    if (strcmp(missao, "Eliminar todas as tropas da cor Azul") == 0) {
        int tropasAzuis = 0;
        for (int i = 0; i < tamanho; i++) {
            if (strcmp(mapa[i].cor, "Azul") == 0) {
                tropasAzuis += mapa[i].tropa;
            }
        }
        return (tropasAzuis == 0); // Retorna 1 se não sobrarem tropas azuis no mapa
    }

    // Padrão caso não caia nas lógicas simuladas acima (Evita travar o jogo)
    return 0; 
}

/*
   Exibe o estado atual de todo o mapa de territórios.
*/
void exibirMapa(Territorio* mapa, int tamanho) {
    printf("\n--- SITUACAO DO MAPA ---\n");
    for (int i = 0; i < tamanho; i++) {
        printf("[%d] %s | Dono: %s | Tropas: %d\n", 
               i, mapa[i].nome, mapa[i].cor, mapa[i].tropa);
    }
}

/* Aplica a boa prática de limpar a memória Heap que solicitamos ao sistema operacional.
*/
void liberarMemoria(Territorio* mapa, char* missaoJogador) {
    if (mapa != NULL) {
        free(mapa);
    }
    if (missaoJogador != NULL) {
        free(missaoJogador);
    }
    printf("\n[SISTEMA] Memoria liberada com sucesso. Fim de jogo.\n");
}