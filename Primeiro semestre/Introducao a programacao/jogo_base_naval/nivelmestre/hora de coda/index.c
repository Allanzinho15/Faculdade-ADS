#include <stdio.h>

#define linha 3
#define coluna 3

int main()
{
    int matriz[linha][coluna];
    int target = 9 ;
    int found = 0;
    int contagemDaMatriz = 1;


    //inicialização da matriz
    for (int i = 0; i < linha; i++)
    {// Loop externo para as linhas
        for (int j = 0; j < coluna; j++)
        {// Loop interno para as colunas
            matriz[i][j] = contagemDaMatriz++;

            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }
    // Busca condicional do elemento alvo
    for (int i = 0; i < linha; i++)
    {// Loop externo para as linhas
        for (int j = 0; j < coluna; j++)
        {// Loop interno para as colunas
            if (matriz[i][j] == target)
            {
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
            if (found == 1)
                break;
        }
    }

    if (!found)
    {
        printf("Elemento %d não encontrado na matriz\n", target);
    }

    return 0;
}