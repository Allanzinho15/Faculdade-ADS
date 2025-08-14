#include <stdio.h>

// Saida de dados
int main()
{
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "sergio";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %e\n", altura);
    printf("A opção; %c\n", opcao);

    /*printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padarão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (String) de caracteres.

    */
}