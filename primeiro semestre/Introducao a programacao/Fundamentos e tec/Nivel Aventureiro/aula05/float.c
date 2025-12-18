#include <stdio.h>

int main()
{
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quaciente = x / y; // Divisão de ponto flutuante

    printf("soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quaciente: %.2f\n", quaciente);

    return 0;
}