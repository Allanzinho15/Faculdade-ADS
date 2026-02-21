#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int numerojogador, numerocomputador, resultado;
    char tipocomparacao;

    // Gerar número aleatório
    srand(time(0));
    numerocomputador = rand() % 100 + 1; // número entre 1 e 100

    // início do jogo
    printf("Bem-vindo ao jogo maior, menor ou igaul! \n");
    printf("Você deve escolher um Número e o tipo de comparação.\n");
    printf("M. Maior \n");
    printf("N. Menor \n");
    printf("I. igual \n");

    printf("Escolha a Comparção \n");
    scanf("%c", &tipocomparacao);

    printf("Digite seu Número (entre 1 e 100) \n");
    scanf("%d", &numerojogador);

    // exibir número do computador
    printf("O número do computador é: %d\n ", numerocomputador);

    switch (tipocomparacao)
    {

    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior\n");
        resultado = numerojogador > numerocomputador ? 1 : 0;
        break;

    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor\n");
        resultado = numerojogador < numerocomputador ? 1 : 0;
        break;

    case 'I':
    case 'i':
        printf("Você escolheu a opção Igaul\n");
        resultado = numerojogador == numerocomputador ? 1 : 0;
        break;

    default:
        printf("Opção invalida\n");
        break;
    }

    if (resultado)
    {
        printf("Parabéns, Você ganhou\n");
    }
    else
    {

        printf("Infelizmente, Você perdeo\n");
    }
}