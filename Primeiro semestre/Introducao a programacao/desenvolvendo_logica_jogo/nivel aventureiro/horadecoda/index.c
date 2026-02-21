#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int escolhajogador, escolhacomputador;
    srand(time(0));

    printf("jogo de jokenpô\n");
    printf("escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. papel\n");
    printf("3. tesoura\n");
    printf("escolha\n");
    scanf("%d", &escolhajogador);

    escolhacomputador = rand() % 3 + 1;

    switch (escolhajogador)
    {
    case 1:
        printf("jogador: pedra - \n");
        break;
    case 2:
        printf("jogador: papel - \n");
        break;
    case 3:
        printf("jogador: tesoura - \n");
        break;
    default:
        printf("opção invalida\n");
        break;
    }

    switch (escolhacomputador)
    {
    case 1:
        printf("Computador: pedra - \n");
        break;
    case 2:
        printf("Computador: papel - \n");
        break;
    case 3:
        printf("Computador: tesoura - \n");
        break;
    }

    if (escolhacomputador == escolhajogador)
    {

        printf("### Empate ###\n");
    }
    else if ((escolhajogador == 1) && (escolhacomputador == 3) || (escolhajogador == 2) && (escolhacomputador == 1) || (escolhajogador == 3) && (escolhacomputador == 2))
    {

        printf("### Parabéns, você ganhou!\n");
    }
    else
    {

        printf("### você Perdeu!\n");
    }

    return 0;
}