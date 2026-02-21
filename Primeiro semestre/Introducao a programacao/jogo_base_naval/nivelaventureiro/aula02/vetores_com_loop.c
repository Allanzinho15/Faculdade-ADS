#include <stdio.h>

int main()
{

    int matriz[3][3]; // declaração de uma matriz 3x3 de inteiro

    // inicialização da matriz usando estrutura de repetição 'for' aninhado
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 5; i++)
        {
            matriz[i][j] = i + j; // atribuindo valores à matriz
            printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}