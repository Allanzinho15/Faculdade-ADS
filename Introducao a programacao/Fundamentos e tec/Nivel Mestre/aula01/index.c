#include <stdio.h>

int main()
{
    int numeroComSinal = 3000000000; // Este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n", numeroComSinal);
    printf("Número Sem Sinal %u\n", numeroSemSinal);

    return 0;
}