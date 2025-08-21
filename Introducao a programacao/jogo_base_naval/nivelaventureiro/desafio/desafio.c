#include <stdio.h>
#define linhas 10
#define colunas 10
int main()
{

    int matriz[linhas][colunas];
    char vetor1[linhas] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int vetor2[linhas] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int navil = 3;

    printf("  ");
    for (int i = 0; i < linhas; i++)
    {
        printf("%c ", vetor1[i]);
    }

    printf("\n ");

    for (int i = 0; i < linhas; i++)
    {
        vetor2[i];

        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if ((i == 2 && j == 3) || (i == 2 && j == 4) || (i == 2 && j == 5))
            {
                matriz[i][j] = navil;
            }
            else if ((i == 5 && j == 7) || (i == 6 && j == 7) || (i == 7 && j == 7))
            {
                matriz[i][j] = navil;
            }
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if ((i == 7 && j == 0) || (i == 6 && j == 1) || (i == 5 && j == 2))
            {
                matriz[i][j] = navil;
            }
            else if ((i == 2 && j == 9) || (i == 1 && j == 8) || (i == 0 && j == 7))
            {
                matriz[i][j] = navil;
            }
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        printf("%d ", vetor2[i]);

        for (int j = 0; j < colunas; j++)
        {

            printf("%d ", matriz[i][j]);
        }

        printf("\n ");
    }

    return 0;
}
