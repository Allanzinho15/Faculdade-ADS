#include <stdio.h>
#define LINHAS 5
#define COLUNAS 5
int main()
{
    int Matriz[LINHAS][COLUNAS];
    int soma = 0;

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            soma++;
            Matriz[i][j] = soma;

            printf("%d ", Matriz[i][j] );
        }
        printf("\n");
    }
}