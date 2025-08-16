#include <stdio.h>

/*
recursividade
o que é um procedimento?

*Bloco de código
*úteis para organizar e simplificar programas

Exemplo de procedimento
recursividade

// Definição de procedimento para imprimir uma mensagem
void imprimirMensagem() {
    printf("Olá, mundo!\n");
}

int main() {
    // Chamada do procedimento
    imprimirMensagem();
    return 0;
}
_________________________________________________________________________________________

recursividade
o que é

*função que executa a si própria
*pode substituir loops
*dividir problemas complexos

exemplo:
// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
    }
}

int main() {
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}

recursividade
importância

*aplicação simples que resolve muitos problemas
*auxilia na implementação de algoritmos
*requer entendimento do macro da aplicação

dicas:

*a compreensão maior vem da prática
*explorar as alternativas de aplicação

*/
void recursivo(int numero)
{
    if (numero > 0)
    {
        printf("%d\n", numero);

        recursivo(numero - 1);
    }
}

int main()
{

    int quantidade = 10;
    printf("contagem regressiva...\n");
    recursivo(quantidade);

    return 0;
}