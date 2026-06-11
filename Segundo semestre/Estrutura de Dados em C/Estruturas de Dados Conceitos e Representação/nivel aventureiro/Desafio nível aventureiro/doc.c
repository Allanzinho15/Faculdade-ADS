#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define MAM_WOR 100


typedef struct {
    char nome[50];
    char cor[50];
    int tropa;
} Territorio;

void limparBufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);    
};

int main(){
    Territorio territorio[MAM_WOR];
    int totalTerritorio = 0;
    int quantidadeTerritorio = 1;
    
    printf("==================================================================\n");
    printf("   Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n\n");
    do{
        
        printf("--- Cadastrando Territorio --- %d\n", quantidadeTerritorio);
        printf("Nome do Territorio: ");
        fgets(territorio[totalTerritorio].nome, MAX, stdin);

        printf("Cor do Exercito (ex: Azul, Verde): ");
        fgets(territorio[totalTerritorio].cor, MAX, stdin);

        territorio[totalTerritorio].nome[strcspn(territorio[totalTerritorio].nome, "\n")] = '\0';
        territorio[totalTerritorio].cor[strcspn(territorio[totalTerritorio].cor, "\n")] = '\0';

        printf("Numeros de Tropas: ");
        scanf("%d", &territorio[totalTerritorio].tropa);
        limparBufferEntrada();
        printf("\n\n");

        quantidadeTerritorio++;
        totalTerritorio++;
    } while (quantidadeTerritorio <= 5);

    printf("Cadastro inicial concluido com sucesso!\n\n");

    printf("==================================\n");
    printf("  MAPA DO MUNDÓ - ESTADO ATUAL\n");
    printf("==================================\n\n");

    for (int i = 0; i < totalTerritorio; i++){
        printf("TERRITORIO %d:\n", i + 1);
        printf("- Nome: %s\n", territorio[i].nome );
        printf("- Dominado por: %s\n", territorio[i].cor );
        printf("- Tropas: %d\n", territorio[i].tropa );
        printf("\n\n");
    }
    
    
    return 0;
};