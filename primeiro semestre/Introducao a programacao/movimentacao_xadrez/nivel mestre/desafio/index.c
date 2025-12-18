#include <stdio.h>

 
void pecarainha(int casas)
{
    if (casas > 0)
    {
        printf("Rainha (cima)\n");

        pecarainha(casas - 1);
    }
}

void pecarainha2(int casas)
{
    if (casas > 0)
    {
        printf("Rainha (Cima/Direita)\n");

        pecarainha2(casas - 1);
    }
}

void pecatorre(int casas)
{

    if (casas > 0)
    {
        printf("Torre (cima)\n");

        pecatorre(casas - 1);
    }
}

void pecatorre2(int casas)
{

    if (casas > 0)
    {
        printf("Torre (baixo)\n");

        pecatorre2(casas - 1);
    }
}

void pecabispo(int casas)
{
    if (casas > 0)
    {
        for ( int i = 0; i < 1; i++)
        {
            printf("cima/");

            for ( int j = 0; j < 1; j++)
            {
                printf("direita\n");
            }
            
        }
        
        pecabispo(casas -1);
    }
    
}

void pecabispo2(int casas)
{
    if (casas > 0)
    {
        for ( int i = 0; i < 1; i++)
        {
            printf("baixo/");

            for ( int j = 0; j < 1; j++)
            {
                printf("esquerda\n");
            }
            
        }
        
        pecabispo(casas -1);
    }
    
}

int main()
{
    int cavalo;
    int casatorre, casabispo, casarainha, casacavalo;
    int opcao;


    // Usamos o printf para pedir ao usuario quantas casas cada peça do xadrex vão se mover

    // sacanf usamos para coletar o dados de quantas casas a peça do xadrez vai andar

    // nesse programa estamos usando tamébem estrutura de repetição para que as peças do xadrez ande a quantidade de casas que o usuario escolher

    //criamos também as funções com parametros e Recursividade para fazer as peças do zadrez andar 

    //usamos a estrutura de switch para criar um menu 

    //usamos também a estrutura de repetição Do-while para que o meno fique interativo e o usuario posso tenta navamente 

    
    do
    {
        
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
        printf("Digite o número da opção\n");
        scanf("%d", &opcao1);

        switch (opcao1)
        {
        case 1:

            pecarainha(casarainha);

            break;

        case 2:

            pecarainha2(casarainha);

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
        printf("Digite o número da opção\n");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:

            pecatorre(casatorre);

            break;

        case 2:

            pecatorre2(casatorre);

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
        printf("2. Baixo/esquerda\n");
        printf("Digite o número da opção\n");
        scanf("%d", &opcao3);

        switch (opcao3)
        {
        case 1:

            pecabispo(casabispo);
            
            break;

        case 2:

            pecabispo2(casabispo);

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
        printf("Digite o número da opção\n");
        scanf("%d", &opcao4);

        switch (opcao4)
        {
        case 1:
            
            for(int i = 0, j = 0; i < casacavalo && j < casacavalo; i++, j++){

                printf("Cima/cima/direita\n");

            }

            break;

        case 2:

             for(int i = 0, j = 0; i < casacavalo && j < casacavalo; i++, j++){

                printf("direita/direita/cima\n");

            }
            break;

        default:

            printf("Opção Invalida");

            break;
        }

        break;

    default:

        printf("Opção Invalida, tente novamente\n");
        break;
    }

    } while (opcao > 4);
    
    return 0;
}