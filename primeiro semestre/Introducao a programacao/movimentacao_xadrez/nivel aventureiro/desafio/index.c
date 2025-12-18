#include <stdio.h>

int main()
{
    int torre = 1, bispo, rainha = 1, cavalo;
    int casatorre, casabispo, casarainha, casacavalo;
    int opcao;

    // usamos variavel como torre, bispo para inicializar a contagem das peças e variavel como casastorre e casabispo para determinar quantas vezes as peças iria andar no xadrex

    // Usamos o printf para pedir ao usuario quantas casas cada peça do xadrex vão se mover

    // sacanf usamos para coletar o dados de quantas casas a peça do xadrez vai andar

    // nesse programa estamos usando tamébem estrutura de repetição para que as peças do xadrez ande a quantidade de casas que o usuario escolher

    printf("Escolha a Sua Peça do Xadrez\n");
    printf("1. Rainha\n");
    printf("2. torre\n");
    printf("3. Bispo\n");
    printf("4. Cavalo\n");
    printf("Digite o número da opção\n");
    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:
        int opcao1;
        printf("Você Escolheu a Rainha\n");
        printf("Escolha quantas casas a Raina vai andar\n");
        scanf("%d", &casarainha);
        printf("Agora escolha para qual lado a rainha vai andar\n");
        printf("1. Cima\n");
        printf("2. Cima/Direita\n");
        printf("3. Direita\n");
        printf("4. Baixa/direita\n");
        printf("5. Baixo\n");
        printf("6. Baixo/Esquerda\n");
        printf("7. Esquerda\n");
        printf("8. Cima/Esquerda\n");
        printf("Digite o número da opção\n");
        scanf("%d", &opcao1);

        switch (opcao1)
        {
        case 1:

            while (rainha <= casarainha)
            {

                printf("Rainha (cima)\n");
                rainha++;
            }

            break;

        case 2:

            while (rainha <= casarainha)
            {

                printf("Rainha (Cima/Direita)\n");
                rainha++;
            }

            break;

        case 3:

            while (rainha <= casarainha)
            {

                printf("Rainha (Direita)\n");
                rainha++;
            }

            break;

        case 4:

            while (rainha <= casarainha)
            {

                printf("Rainha (Baixo/Direita)\n");
                rainha++;
            }

            break;

        case 5:

            while (rainha <= casarainha)
            {

                printf("Rainha (baixo)\n");
                rainha++;
            }

            break;

        case 6:

            while (rainha <= casarainha)
            {

                printf("Rainha (baixo/esquerda)\n");
                rainha++;
            }

            break;

        case 7:

            while (rainha <= casarainha)
            {

                printf("Rainha (esquerda)\n");
                rainha++;
            }

            break;

        case 8:

            while (rainha <= casarainha)
            {

                printf("Rainha (Cima/esquerda)\n");
                rainha++;
            }
            break;

        default:

            printf("Opção invalida\n");
            break;
        }

        break;

    case 2:
        int opcao2;
        printf("Você Escolha a Torre\n");
        printf("Escolha quantas casas a Torre vai andar\n");
        scanf("%d", &casatorre);
        printf("Agora escolha para qual lado a Torre vai andar\n");
        printf("1. Cima\n");
        printf("2. Baixo\n");
        printf("3. Direita\n");
        printf("4. Esquerda\n");
        printf("Digite o número da opção\n");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:

            do
            {

                printf("Torre (cima)\n");
                torre++;
            } while (torre <= casatorre);

            break;

        case 2:
            do
            {

                printf("Torre (baixo)\n");
                torre++;
            } while (torre <= casatorre);

            break;

        case 3:

            do
            {

                printf("Torre (direita)\n");
                torre++;
            } while (torre <= casatorre);

            break;

        case 4:

            do
            {

                printf("Torre (esquerda)\n");
                torre++;
            } while (torre <= casatorre);

            break;

        default:

            printf("Opção invalida\n");
            break;
        }

        break;

    case 3:
        int opcao3;
        printf("Você Escolheu o Bispo\n");
        printf("Escolha quantas casas a Torre vai andar\n");
        scanf("%d", &casabispo);
        printf("Agora escolha para qual lado a Torre vai andar\n");
        printf("1. Cima/Direita\n");
        printf("2. Baixo/Direita\n");
        printf("3. Cima/Esquerda\n");
        printf("4. Baixo/Esquerda\n");
        printf("Digite o número da opção\n");
        scanf("%d ", &opcao3);

        switch (opcao3)
        {
        case 1:

            for (bispo = 1; bispo <= casabispo; bispo++)
            {

                printf("Bispo (cima/direita)\n");
            }

            break;

        case 2:

            for (bispo = 1; bispo <= casabispo; bispo++)
            {

                printf("Bispo (Baixo/Direita)\n");
            }

            break;

        case 3:

            for (bispo = 1; bispo <= casabispo; bispo++)
            {

                printf("Bispo (Cima/Esquerda)\n");
            }

            break;

        case 4:

            for (bispo = 1; bispo <= casabispo; bispo++)
            {

                printf("Bispo (Baixo/Esquerda)\n");
            }

            break;

        default:

            printf("Opção invalida\n");

            break;
        }

        break;

    case 4:

        int opcao4;
        printf("Você escolheu o Cavalo\n");
        printf("Escolha quantas casas a Torre vai andar\n");
        scanf("%d", &casacavalo);
        printf("Agora escolha para qual lado o Cavalo vai andar\n");
        printf("1. Cima, Cima, Direita\n");
        printf("2. Direita, Direita, Cima\n");
        printf("3. Direita, Direita, Baixo\n");
        printf("4. Baixo, Baixo, Deireita\n");
        printf("5. Baixo, Baixo, Esquerda\n");
        printf("6. Esquerda, Esquerda, Baixo\n");
        printf("7. Esquerda, Esquerda, Cima\n");
        printf("8. Cima, Cima, Esquerda\n");

        switch (opcao4)
        {
        case 1:

            do
            {

                for (cavalo = 1; cavalo <= 2; cavalo++)
                {
                    printf("cima\n");
                }

                printf("direita\n");

                casacavalo--;

            } while (casacavalo);

            break;

        case 2:

            do
            {

                for (cavalo = 1; cavalo <= 2; cavalo++)
                {
                    printf("direita\n");
                }

                printf("cima\n");

                casacavalo--;

            } while (casacavalo);

            break;

        case 3:

            do
            {

                for (cavalo = 1; cavalo <= 2; cavalo++)
                {
                    printf("direita\n");
                }

                printf("baixo\n");

                casacavalo--;

            } while (casacavalo);

            break;

        case 4:

            do
            {

                for (cavalo = 1; cavalo <= 2; cavalo++)
                {
                    printf("baixo\n");
                }

                printf("direita\n");

                casacavalo--;

            } while (casacavalo);

            break;

        case 5:

            do
            {

                for (cavalo = 1; cavalo <= 2; cavalo++)
                {
                    printf("biaxo\n");
                }

                printf("esquerda\n");

                casacavalo--;

            } while (casacavalo);

            break;

        case 6:

            do
            {

                for (cavalo = 1; cavalo <= 2; cavalo++)
                {
                    printf("esquerda\n");
                }

                printf("baixo\n");

                casacavalo--;

            } while (casacavalo);

            break;

        case 7:

            do
            {

                for (cavalo = 1; cavalo <= 2; cavalo++)
                {
                    printf("esquerda\n");
                }

                printf("cima\n");

                casacavalo--;

            } while (casacavalo);

            break;

        case 8:
            do
            {

                for (cavalo = 1; cavalo <= 2; cavalo++)
                {
                    printf("cima\n");
                }

                printf("esquerda\n");

                casacavalo--;

            } while (casacavalo);

            break;

        default:
            printf("Opção invalida");
            break;
        }


    default:

        printf("Opção Invalida");
        break;
    }

    return 0;
}