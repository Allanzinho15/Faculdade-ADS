#include <stdio.h>

int main()
{
    int numero1 = 40, numero2 = 30;
    int maior;

    // priemira forma de fazer
    numero1 > numero2 ? (maior = numero1) : (maior = numero2);
    printf("Número maior é %d\n ", maior);

    // segunda forma de fazer
    if (numero1 > numero2)
    {
        printf("Número maior é %d\n ", numero1);
    }
    else
    {
        printf("Número maior é %d\n ", numero2);
    }
}