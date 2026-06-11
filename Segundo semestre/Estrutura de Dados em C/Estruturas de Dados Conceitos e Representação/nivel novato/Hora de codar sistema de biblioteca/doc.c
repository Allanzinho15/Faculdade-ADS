#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 50
#define TAM_STRING 100

struct Livros{
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};

void limparBufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);    
};

int main(){
    struct Livros biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    do{
        printf("========================================\n");
        printf("        BIBLIOTECA - PARTE 1\n");
        printf("========================================\n");
        printf("1 - Cadastrar novo livros\n");
        printf("2 - Listar todos os livros\n");
        printf("0 - sair\n");
        printf("========================================\n");

        scanf("%d", &opcao);
        limparBufferEntrada();

        switch (opcao){
        case 1:
            printf("--- Cadastro de Nova Livro ---\n\n");
            if (totalLivros < MAX_LIVROS){
                printf("Digite o nome do livro: ");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                printf("Digite o autor: ");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                printf("Digite a editora: ");
                fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
                biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\0';
                biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0';

                printf("Digite a edicao: ");
                scanf("%d", &biblioteca[totalLivros].edicao);
                limparBufferEntrada();

                totalLivros++;

                printf("\nLivro cadastrado com sucesso!");
            }else{
                printf("Biblioteca cheia! Nao é possivel cadastrar mais livros.\n");
            }

            printf("\nPressione Entre para continua...");
            getchar();
            
            break;
        
        case 2:
            printf("--- Lista de Livros Cadastrado --- \n\n");

            if (totalLivros == 0){
                printf("Nemhum livro cadastrado ainda. \n");
            }else{
                for (int i = 0; i < totalLivros; i++){

                    printf("---------------------------------------");
                    printf("LIVRO %d\n", i + 1);
                    printf("Nome: %s\n", biblioteca[i].nome);
                    printf("Autor: %s\n", biblioteca[i].autor);
                    printf("Editora: %s\n", biblioteca[i].editora);
                    printf("Edicao: %d\n", biblioteca[i].edicao);
                }
                printf("---------------------------------------------");
                
            }
            printf("\nPressione Entre para continuar...");
            getchar();
            break;    
        case 0:
            printf("\nSaindo do sistema...");
            break;
        default:
            printf("\nOpcao invalida! Tente novamente.\n");
            printf("\nPresscione Entre para continuar...");
            getchar();
            break;
        }
    } while (opcao != 0);
    
};