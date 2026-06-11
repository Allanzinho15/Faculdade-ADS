#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 50
#define MAX_EMPRESTIMOS 100
#define TAM_STRING 100

struct Livros{
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
    int disponivel;
};

struct Emprestimo{
    int indiceLivro;
    char nomeUsuario[TAM_STRING];
};


void limparBufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);    
};

int main(){
    struct Livros *biblioteca;
    struct Emprestimo *emprestimo;
    
    biblioteca = (struct Livros *) calloc(MAX_LIVROS, sizeof(struct Livros));

    emprestimo = (struct Emprestimo *) malloc(MAX_EMPRESTIMOS * sizeof(struct Emprestimo));

    if (biblioteca == NULL || emprestimo == NULL){
        printf("Erro: Falha ao alocar memoria.\n");
        return 1;
    }
    
    int totalLivros = 0;
    int totalEmprestimos = 0;
    int opcao;

    do{
        printf("========================================\n");
        printf("        BIBLIOTECA - PARTE 2\n");
        printf("========================================\n");
        printf("1 - Cadastrar novo livros\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Realizar emprestimo\n");
        printf("4 - Listar emprestimos\n");
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

                biblioteca[totalLivros].disponivel = 1;
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

                    printf("---------------------------------------\n");
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
        case 3:
            printf("--- Realizar Empretimo ---\n\n");

            if (totalEmprestimos >= MAX_EMPRESTIMOS){
                printf("Limite de emprestimos atingido!\n");
            }else{
                printf("Livros disponiveis:\n");
                int disponiveis = 0;
                for (int i = 0; i < totalLivros; i++){
                    if (biblioteca[i].disponivel){
                        printf("%d - %s\n", i + 1, biblioteca[i].nome);
                        disponiveis++;
                    }
                    
                }
                if (disponiveis == 0){
                    printf("Nenhum livro disponivel para emprestimo\n");
                }else{
                    printf("\nDigite o numero do livro de deseja empretar: ");
                    int numLivro;
                    scanf("%d", &numLivro);
                    limparBufferEntrada();

                    int indice = numLivro - 1;
                    if (indice >= 0 && indice < totalLivros && biblioteca[indice].disponivel){
                        printf("Digite o nome do usuario que esta pegando o livro: ");
                        fgets(emprestimo[totalEmprestimos].nomeUsuario, TAM_STRING,stdin);
                        emprestimo[totalEmprestimos].nomeUsuario[strcspn(emprestimo[totalEmprestimos].nomeUsuario, "\n")] = '\0';

                        emprestimo[totalEmprestimos].indiceLivro = indice;

                        biblioteca[indice].disponivel = 0;

                        totalEmprestimos++;
                        printf("\nEmprestimo realizado com sucesso!");
                    }else{
                        printf("\nNumero de livros invalido ou livros indisponivel.\n");
                    }
                    
                }
                
                
            }
            printf("\nPressione Enter para continuar...");
            getchar();
            break;
        case 4:
            printf("--- Lista de Emprestimos ---\n\n");
            if (totalEmprestimos == 0){
                printf("Nenhum emprestimo realizado.\n");
            }else{
                for (int i = 0; i < totalEmprestimos; i++){
                    int indiceLivro = emprestimo[i].indiceLivro;
                    printf("-----------------------------------------");
                    printf("EMPRESTIMO %d\n", i + 1);
                    printf("Livro: %s\n", biblioteca[indiceLivro].nome);
                    printf("Usuario: %s\n", emprestimo[i].nomeUsuario);
                }
                printf("-----------------------------------------\n");
                
            }
            printf("\nPressione Enter para continuar...");
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
    free(biblioteca);
    free(emprestimo);

    printf("Memoria liberada com sucesso");
    return 0;
};