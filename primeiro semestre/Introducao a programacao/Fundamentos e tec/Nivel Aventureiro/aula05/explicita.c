#include <stdio.h>

int main()
{
    // Na linguagem de programação C, o "casting" (ou conversão de tipo) é um mecanismo que permite a conversão de uma variável de um tipo de dado para outro.  como mostra abixo int sendo convertido em float
    int a = 10;
    int b = 3;
    float quociente = (float)a / b;
    // 'a' é  explicitamente convertido  para float

    printf("Resultado: %.2f\n", quociente);

    return 0;
}