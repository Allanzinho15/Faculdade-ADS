#include <stdio.h>
// Operador ternario
// Condicão ? verdadeiro : falso
int main()
{
    int idade = 16;
    int resultado;

    // primeira maneira de fazer
    idade >= 18 ? printf("você é maior de idade\n") : printf("você é menor de idade\n");

    // segunda maneira de fazer
    resultado = idade >= 18 ? 1 : 0;
    if (resultado == 1)
    {
        printf("você é maior de idade\n");
    }
    else
    {
        printf("você é menor de idade\n");
    }
}