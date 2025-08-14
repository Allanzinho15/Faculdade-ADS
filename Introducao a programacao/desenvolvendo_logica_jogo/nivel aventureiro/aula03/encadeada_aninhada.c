#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um Número: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        if (numero % 2 == 0)
        {
            printf("número é par\n");
        }
        else
        {
            printf("número é ímpar\n");
        }
    }
    else if (numero == 0)
    {
        printf("Número é zero");
    }
    else
    {
        printf("Número é negativo");
    }
}