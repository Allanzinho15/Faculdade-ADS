#include <stdio.h>

int main()
{
    short int numeroPequenos = 32767; // Valor náximo de short int
    printf("Número pequeno (short int): %d\n", numeroPequenos);

    numeroPequenos = 32768; // valor maior que o máximo de short int
    printf("Número pequeno arualizado (short int): %n\n", numeroPequenos);

    printf("\n*** Tamanho das variáveis ***\n");
    printf("Short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long long int));
    printf("Float: %lu B - Double: %lu B - long Double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));
}