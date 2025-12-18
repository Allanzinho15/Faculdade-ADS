#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.5;
    float resultado = a + b;
    // 'a' é convertido implitamente para float

    // quando a converção é de float para int existe uma espéce de roubo de dado decimal, mais quando é de int para float funciona em alguns casos

    printf("Resultado: %.2f\n", resultado);

    return 0;
}