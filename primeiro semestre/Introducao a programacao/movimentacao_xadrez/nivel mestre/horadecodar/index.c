#include <stdarg.h>
/*

recursividade
csao imprimir pré calculo

*printf(recursivo(5))
*recursivo(5-1)

*printf(recursivo(4))
*recursivo(4-1)

*printf(recursivo(3))
*recursivo(3-1)

*printf(recursivo(2))
*recursivo(2-1)

*printf(recursivo(1))
*recursivo(1-1)

informações lineares
_______________________________________________________________

recursividade
caso imprimir pos calculo

*recursivo(5-1)
*recursivo(4-1)
*recursivo(3-1)
*recursivo(2-1)
*recursivo(1-1)
*printf(recursivo(1))
*printf(recursivo(2))
*printf(recursivo(3))
*printf(recursivo(4))
*printf(recursivo(5))

dependência de execução
pilha de informaçôes

exemplo
void recursivo(int numero)
{
    if (numero > 0)
    {
        recursivo(numero - 1);
        printf("%d\n", numero);
    }
}

int main()
{

    int quantidade = 10;
    printf("contagem regressiva...\n");
    recursivo(quantidade);

    return 0;
}
*/

void recursivo(int numero)
{
    if (numero > 0)
    {
        recursivo(numero - 1);
        printf("%d\n", numero);
    }
}

int main()
{

    int quantidade = 10;
    printf("contagem regressiva...\n");
    recursivo(quantidade);

    return 0;
}
