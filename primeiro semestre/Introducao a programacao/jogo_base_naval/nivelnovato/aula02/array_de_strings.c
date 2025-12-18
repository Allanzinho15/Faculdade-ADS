#include <stdio.h>
/*
vetores e matrizes
array de strings
_______________________________________________________________
vetores e matrizes
conclusão

*arrays armazenam e cessam multiplos valores
*possuem tamanho fixo e acesos por índices
*essenciais para manipulação eficiente de dados
*aplicações variadas

*/
int main()
{

    char *nomes[] = {"Alice", "Bob", "Carol"};

    for (int i = 0; i < 3; i++)
    {
        printf("%s \n", nomes[i]);
    }

    return 0;
}