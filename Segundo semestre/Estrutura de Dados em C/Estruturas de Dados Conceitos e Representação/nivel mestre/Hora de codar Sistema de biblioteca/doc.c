#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 50
#define MAX_EMPRESTIMOS 100
#define TAM_STRING 100

// Definição da estrutura para armazenar os dados de cada livro
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
    int disponivel; // 1 para Sim, 0 para Não
};

// Definição da estrutura para armazenar os dados de cada empréstimo
struct Emprestimo {
    int indiceLivro; // Guarda a posição do livro no vetor 'biblioteca'
    char nomeUsuario[TAM_STRING];
};

// Protótipos das funções (Avisos ao compilador de que as funções existem)
void limparBufferEntrada();
void exibirMenu();
void cadastrarLivros(struct Livro *biblioteca, int *totalLivros);
void listarLivros(const struct Livro *biblioteca, int totalLivros);
void realizarEmprestimo(struct Livro *biblioteca, int totalLivros, struct Emprestimo *emprestimos, int *totalEmprestimos);
void listarEmprestimos(const struct Emprestimo *emprestimos, int totalEmprestimos, const struct Livro *biblioteca);
void liberarMemoria(struct Livro *biblioteca, struct Emprestimo *emprestimo);

// Remove os caracteres que sobram no teclado quando usamos scanf
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);    
}

// Imprime as opções do menu na tela
void exibirMenu() {
    printf("\n========================================\n");
    printf("        BIBLIOTECA - PARTE 2\n");
    printf("========================================\n");
    printf("1 - Cadastrar novo livro\n");
    printf("2 - Listar todos os livros\n");
    printf("3 - Realizar emprestimo\n");
    printf("4 - Listar emprestimos\n");
    printf("0 - Sair\n");
    printf("========================================\n");
    printf("Escolha uma opcao: ");
}

// Função para cadastrar um livro usando ponteiros
void cadastrarLivros(struct Livro *biblioteca, int *totalLivros) {
    printf("\n--- Cadastro de Novo Livro ---\n\n");

    // Acessa o conteúdo do ponteiro totalLivros usando '*' para verificar o limite
    if (*totalLivros < MAX_LIVROS) {
        int indice = *totalLivros; // O índice atual é a quantidade de livros já cadastrados

        printf("Digite o nome do livro: ");
        fgets(biblioteca[indice].nome, TAM_STRING, stdin);
        printf("Digite o autor: ");
        fgets(biblioteca[indice].autor, TAM_STRING, stdin);
        printf("Digite a editora: ");
        fgets(biblioteca[indice].editora, TAM_STRING, stdin);

        // Remove o '\n' que o fgets deixa no final da string
        biblioteca[indice].nome[strcspn(biblioteca[indice].nome, "\n")] = '\0';
        biblioteca[indice].autor[strcspn(biblioteca[indice].autor, "\n")] = '\0';
        biblioteca[indice].editora[strcspn(biblioteca[indice].editora, "\n")] = '\0';

        printf("Digite a edicao: ");
        scanf("%d", &biblioteca[indice].edicao);
        limparBufferEntrada();

        // Define o livro como disponível (1) por padrão
        biblioteca[indice].disponivel = 1;

        // Incrementa o valor real lá na main usando o ponteiro
        (*totalLivros)++;
        printf("\nLivro cadastrado com sucesso!\n");
    } else {
        printf("Biblioteca cheia!\n");
    }
    printf("Pressione Enter para continuar...");
    getchar();
}

// Função para listar todos os livros cadastrados
void listarLivros(const struct Livro *biblioteca, int totalLivros) {
    printf("\n--- Lista de Livros Cadastrados ---\n\n");
    if (totalLivros == 0) {
        printf("Nenhum livro cadastrado ainda.\n");
    } else {
        for (int i = 0; i < totalLivros; i++) {
            printf("-----------------------------------\n");
            printf("Livro %d\n", i + 1);
            printf("Nome: %s\n", biblioteca[i].nome);
            printf("Autor: %s\n", biblioteca[i].autor);
            // Uso de operador ternário para exibir o texto correto baseado no número (0 ou 1)
            printf("Status: %s\n", biblioteca[i].disponivel ? "Disponivel" : "Emprestado");
        }
        printf("----------------------------------------\n");
    }
    printf("\nPressione Enter para Continuar...");
    getchar();
}

// Função para realizar o empréstimo modificando os vetores originais
void realizarEmprestimo(struct Livro *biblioteca, int totalLivros, struct Emprestimo *emprestimos, int *totalEmprestimos) {
    printf("\n--- Realizar Emprestimo ---\n\n");
    
    if (*totalEmprestimos >= MAX_EMPRESTIMOS) {
        printf("Limite de emprestimos atingido!\n");
    } else {
        printf("Livros disponiveis:\n");
        int disponiveis = 0;
        
        for (int i = 0; i < totalLivros; i++) {
            if (biblioteca[i].disponivel) {
                printf("%d - %s\n", i + 1, biblioteca[i].nome);
                disponiveis++;
            }
        }
        
        if (disponiveis == 0) {
            printf("Nenhum livro disponivel para emprestimo.\n");
        } else {
            printf("\nDigite o numero do livro que deseja emprestar: ");
            int numLivro;
            scanf("%d", &numLivro);
            limparBufferEntrada();

            int indice = numLivro - 1;

            // Valida se o índice existe no vetor e se está disponível
            if (indice >= 0 && indice < totalLivros && biblioteca[indice].disponivel) {
                printf("Digite o nome do usuario: ");
                fgets(emprestimos[*totalEmprestimos].nomeUsuario, TAM_STRING, stdin);
                emprestimos[*totalEmprestimos].nomeUsuario[strcspn(emprestimos[*totalEmprestimos].nomeUsuario, "\n")] = '\0';

                // Vincula o empréstimo ao índice do livro
                emprestimos[*totalEmprestimos].indiceLivro = indice;
                // Altera o status do livro para indisponível (0)
                biblioteca[indice].disponivel = 0;

                (*totalEmprestimos)++;
                printf("\nEmprestimo realizado com sucesso!\n");
            } else {
                printf("\nNumero de livro invalido ou livro indisponivel\n");
            }
        }
    }
    printf("\nPressione Enter para Continuar...");
    getchar();
}

// Acrescentado: Função para listar quem pegou qual livro
void listarEmprestimos(const struct Emprestimo *emprestimos, int totalEmprestimos, const struct Livro *biblioteca) {
    printf("\n--- Lista de Emprestimos Realizados ---\n\n");
    if (totalEmprestimos == 0) {
        printf("Nenhum emprestimo registrado.\n");
    } else {
        for (int i = 0; i < totalEmprestimos; i++) {
            int idxLivro = emprestimos[i].indiceLivro;
            printf("Usuario: %s | Livro: %s\n", emprestimos[i].nomeUsuario, biblioteca[idxLivro].nome);
        }
    }
    printf("\nPressione Enter para Continuar...");
    getchar();
}

// Acrescentado: Função para devolver a memória alocada para o sistema operacional
void liberarMemoria(struct Livro *biblioteca, struct Emprestimo *emprestimo) {
    free(biblioteca);
    free(emprestimo);
    printf("\nMemoria liberada com sucesso. Ate logo!\n");
}

int main() {
    struct Livro *biblioteca;
    struct Emprestimo *emprestimo;
    
    // Alocação dinâmica utilizando calloc (zera a memória)
    biblioteca = (struct Livros *) calloc(MAX_LIVROS, sizeof(struct Livro));
    // Alocação dinâmica utilizando malloc (não limpa a memória)
    emprestimo = (struct Emprestimo *) malloc(MAX_EMPRESTIMOS * sizeof(struct Emprestimo));

    // Proteção obrigatória: Verifica se o computador conseguiu dar a memória solicitada
    if (biblioteca == NULL || emprestimo == NULL) {
        printf("Erro: Falha ao alocar memoria.\n");
        return 1;
    }
    
    int totalLivros = 0;
    int totalEmprestimos = 0;
    int opcao;

    do {
        exibirMenu(); // Acrescentado: Chama o menu visual na tela
        scanf("%d", &opcao);
        limparBufferEntrada();

        switch (opcao) {
            case 1:
                // Passa o endereço de totalLivros (&) para que a função altere a contagem real
                cadastrarLivros(biblioteca, &totalLivros);
                break;
            case 2:
                listarLivros(biblioteca, totalLivros);
                break;
            case 3:
                // Passa os vetores e o endereço de totalEmprestimos
                realizarEmprestimo(biblioteca, totalLivros, emprestimo, &totalEmprestimos);
                break;
            case 4:
                listarEmprestimos(emprestimo, totalEmprestimos, biblioteca);
                break;    
            case 0:
                printf("\nSaindo do sistema...");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
    
    // Libera as alocações dinâmicas antes de fechar o programa de vez
    liberarMemoria(biblioteca, emprestimo);
    
    return 0;
}