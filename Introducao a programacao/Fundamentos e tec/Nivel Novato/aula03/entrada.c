#include <stdio.h>

// entrada e saida de dadas
int main()
{
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "sergio";
    // sintaxe scanf
    // scanf("formato1" formato2, &variavel1, variavel2, ...);

    printf("Digite a sua Idade:\n");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura:\n");
    scanf("%f", &altura);
    printf("A altura é: %F\n", altura);

    printf("Digite opção:\n");
    scanf(" %s", &opcao);
    printf("O nome é: %c", opcao);

    /*printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padarão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (String) de caracteres.

    */
}