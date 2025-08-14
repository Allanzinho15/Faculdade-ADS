#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    if (a > 0 && b > 0)
    {
        printf("Os numeros são verdadeira\n");
    }
    else
    {
        printf("Pelo menos um números é falso");
    }

    if (a > 0 || b > 0)
    {
        printf("Pelo menos um números é verdadeira\n");
    }
    else
    {
        printf("todos são falso");
    }
}