#include <stdio.h>

int main()
{
    int temperatura = 30;
    int resultado;

    // primeira maneira de fazer
    temperatura >= 30 ? printf("esta calor\n") : printf("esta frio\n");

    // segunda maneira de fazer
    resultado = temperatura >= 30 ? 1 : 0;
    if (resultado)
    {
        printf("esta calor\n");
    }
    else
    {
        printf("esta frio\n");
    }

    return 0;
}