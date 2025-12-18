#include <stdio.h>

int main()
{

    int i, j;
    char letras;
    for (i = 1; i <= 5; i++)
    {

        letras = 'A';

        for (j = 1; j <= i; j++)
        {
            printf("%c ", letras);
            ++letras;
        }
        printf("\n");
    }

    return 0;
}