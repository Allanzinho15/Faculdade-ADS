#include <stdio.h>

int main()
{
    // declaração das variavel do tabuleiro
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    int Numerotabuleiro[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int navil = 3;

    // primeiro for onde imprimir o vetor linha
    printf("  ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // for aninhado onde imprimir tabuleiro e o numerotubuleiro
    for (int i = 0; i < 10; i++)
    {
        // imprimir o numero do tabuleiro
        printf("%d ", Numerotabuleiro[i]);

        // for onde percorre e imprimir o tabuleiro
        for (int j = 0; j < 10; j++)
        {
            //criei essa condição para quando i e j estiver nessas posição do if ser adicionados o numero 3 que representa o navil, 
            if ((i == 2 && j == 3) || (i == 2 && j == 4) || (i == 2 && j == 5) || (i == 5 && j == 7) || (i == 6 && j == 7) || (i == 7 && j == 7))
            {
                printf("%d ", tabuleiro[i][j] = navil);
            }
            else
            {
                printf("%d ", tabuleiro[i][j] = 0);
            }
        }
        printf("\n");
    }


}
