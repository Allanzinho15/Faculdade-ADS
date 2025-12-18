#include <stdio.h>

int main()
{
    int torre = 1, bispo, rainha = 1;
    int casatorre, casabispo, casarainha;

    // usamos variavel como torre, bispo para inicializar a contagem das peças e variavel como casastorre e casabispo para determinar quantas vezes as peças iria andar no xadrex

    // Usamos o printf para pedir ao usuario quantas casas cada peça do xadrex vão se mover

    // sacanf usamos para coletar o dados de quantas casas a peça do xadrez vai andar

    // nesse programa estamos usando tamébem estrutura de repetição para que as peças do xadrez ande a quantidade de casas que o usuario escolher

    printf("Escolha quantas casas a Rainha vai andar Para a esquerda\n");
    scanf("%d", &casarainha);

    while (rainha <= casarainha)
    {

        printf("Rainha (esquerda)%d\n", rainha);
        rainha++;
    }

    printf("Escolha quantas casas a Torre vai andar Para a direita\n");
    scanf("%d", &casatorre);

    do
    {

        printf("Torre (direita)\n");
        torre++;
    } while (torre <= casatorre);

    printf("Escolha quantas casas a Bispo vai andar Para diagona (cima e á direita)\n");
    scanf("%d", &casabispo);

    for (bispo = 1; bispo <= casabispo; bispo++)
    {

        printf("Bispo (cima/direita)\n");
    }

    return 0;
}