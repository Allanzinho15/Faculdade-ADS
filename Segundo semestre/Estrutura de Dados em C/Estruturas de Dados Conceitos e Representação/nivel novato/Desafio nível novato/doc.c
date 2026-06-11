#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> // Adicionado para fazer o srand(time(NULL)) funcionar

// Definição da Struct conforme suas especificações (ajustadas para tamanhos seguros)
typedef struct {
    char nome[50];
    char cor[50];
    int tropa;
} Territorio;

// Função auxiliar para limpar o buffer do teclado
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);    
}

// REQUISITO: Função unificada que altera os territórios diretamente por PONTEIROS (->)
void atacar(Territorio* atacante, Territorio* defensor) {
    printf("\n⚔️  BATALHA INICIADA: %s (%s) vs %s (%s) ⚔️\n", 
            atacante->nome, atacante->cor, defensor->nome, defensor->cor);

    // Sorteio dos dados (1 a 6) para ataque e defesa
    int dadoAtaque = (rand() % 6) + 1;
    int dadoDefesa = (rand() % 6) + 1;

    printf("[DADOS] Atacante: %d  |  Defensor: %d\n", dadoAtaque, dadoDefesa);

    // REQUISITO: Atualização de dados pós-batalha
    if (dadoAtaque > dadoDefesa) {
        printf("🎉 O ATACANTE VENCEU! O territorio %s foi conquistado!\n", defensor->nome);
        
        // Defensor muda de dono (muda de cor)
        strcpy(defensor->cor, atacante->cor);
        
        // Metade das tropas vão para o defensor conquistado, atacante fica com o resto
        int tropasMovidas = atacante->tropa / 2; 
        int metade = atacante->tropa / 2;
        defensor->tropa = metade;
        atacante->tropa = atacante->tropa - metade;
        
        printf("[LOG] %d tropas se moveram para ocupar %s.\n", metade, defensor->nome);
    } else {
        printf("🛡️  O DEFENSOR RESISTIU! O ataque falhou.\n");
        // Se perder, o atacante perde uma tropa
        atacante->tropa--;
        printf("[LOG] O territorio %s perdeu 1 tropa (Restam: %d).\n", atacante->nome, atacante->tropa);
    }
}

// REQUISITO: Função dedicada para liberar a memória alocada
void liberarMemoria(Territorio* mapa) {
    if (mapa != NULL) {
        free(mapa);
        printf("\n[MEMORIA] Memoria do mapa liberada com sucesso!\n");
    }
}

int main() {
    // REQUISITO TECNICO: Garante a aleatoriedade real dos dados
    srand(time(NULL));

    int totalTerritorios;
    
    printf("==================================================================\n");
    printf("               SIMULADOR DE BATALHA DE TERRITORIOS                \n");
    printf("==================================================================\n");
    
    // REQUISITO: Usuário define o tamanho do mapa
    printf("Quantos territorios deseja criar no mundo? ");
    scanf("%d", &totalTerritorios);
    limparBufferEntrada();

    if (totalTerritorios <= 0) {
        printf("Quantidade invalida. Saindo...\n");
        return 1;
    }

    // REQUISITO: Alocação dinâmica utilizando calloc/malloc
    Territorio* territorio = (Territorio*) calloc(totalTerritorios, sizeof(Territorio));
    if (territorio == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }
    
    // Fase de Cadastro Baseada no seu Loop original
    printf("\n--- Vamos cadastrar os %d territorios do nosso mundo ---\n\n", totalTerritorios);
    for (int i = 0; i < totalTerritorios; i++) {
        printf("--- Cadastrando Territorio %d ---\n", i + 1);
        printf("Nome do Territorio: ");
        // Ajustado o limite para 50 para casar com o tamanho da struct
        fgets(territorio[i].nome, 50, stdin); 
        territorio[i].nome[strcspn(territorio[i].nome, "\n")] = '\0';

        printf("Cor do Exercito (ex: Azul, Verde): ");
        fgets(territorio[i].cor, 50, stdin);
        territorio[i].cor[strcspn(territorio[i].cor, "\n")] = '\0';

        printf("Numeros de Tropas: ");
        scanf("%d", &territorio[i].tropa);
        limparBufferEntrada();
        printf("\n");
    }

    printf("Cadastro inicial concluido com sucesso!\n\n");

    // Menu corrigido e funcional
    int opcao;
    do {
        printf("\n==================================\n");
        printf("   MAPA DO MUNDO - ESTADO ATUAL\n");
        printf("==================================\n");

        // REQUISITO: Exibição dos dados atualizados dos territórios
        for (int i = 0; i < totalTerritorios; i++) {
            printf("%d. %s (Exercito: %s, Tropas: %d)\n", i + 1, territorio[i].nome, territorio[i].cor, territorio[i].tropa);
        }
        printf("==================================\n");

        printf("\n--- FASE DE DECIZAO ---\n");
        printf("1 - Realizar um Ataque\n");
        printf("0 - Sair do Jogo\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limparBufferEntrada();

        if (opcao == 1) {
            int ataque, defesa;
            
            printf("\nEscolha o territorio atacante (1 a %d): ", totalTerritorios);
            scanf("%d", &ataque);
            printf("Escolha o territorio de defesa (1 a %d): ", totalTerritorios);
            scanf("%d", &defesa);
            limparBufferEntrada();

            // Conversão da entrada humana (1 a N) para índices da linguagem C (0 a N-1)
            int idxAtacante = ataque - 1;
            int idxDefesa = defesa - 1;

            // REQUISITO / VALIDACAO: Limites do mapa
            if (idxAtacante < 0 || idxAtacante >= totalTerritorios || idxDefesa < 0 || idxDefesa >= totalTerritorios) {
                printf("\n❌ Erro: Territorio invalido escolhido!\n");
                continue;
            }

            // REQUISITO / VALIDACAO: Impedir fogo amigo (atacar a mesma cor)
            if (strcmp(territorio[idxAtacante].cor, territorio[idxDefesa].cor) == 0) {
                printf("\n❌ Erro: Voce nao pode atacar seus proprios territorios (%s)!\n", territorio[idxAtacante].cor);
                continue;
            }

            // Validação lógica extra: precisa de pelo menos 2 tropas para atacar
            if (territorio[idxAtacante].tropa < 2) {
                printf("\n❌ Erro: %s nao tem tropas suficientes para atacar (minimo 2).\n", territorio[idxAtacante].nome);
                continue;
            }

            // Chama a função passando as referências de memória por ponteiro
            atacar(&territorio[idxAtacante], &territorio[idxDefesa]);
        }

    } while (opcao != 0); // O loop continua rodando enquanto você não digitar 0 para sair
    
    // REQUISITO: Gerenciamento e liberação de memória heap
    liberarMemoria(territorio);

    return 0;
}