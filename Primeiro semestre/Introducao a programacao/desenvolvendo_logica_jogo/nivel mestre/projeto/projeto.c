#include <stdio.h>

int main()
{
    // variavel onde são armazenadas os dados da carta
    char estado_A[5], estado_B[5];
    char codigo_A[4], codigo_B[4];
    char cidade_A[35], cidade_B[35];
    unsigned long int populacao_A, populacao_B;
    float area_A, area_B;
    float pib_A, pib_B;
    int numero_pontos_turisticos_A, numero_pontos_turisticos_B;
    float Densidade_Populaciona_A, Densidade_Populaciona_B;
    float PIB_per_Capita_A, PIB_per_Capita_B;
    float Super_Poder_A, Super_Poder_B;
    int resultado1, resultado2;

    // aqui usamos printf para pedir os dados da carta, e scanf para coletar os dados, carta1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %s", estado_A);

    printf("Código da Carta: ");
    scanf("%s", codigo_A);

    printf("Nome da Cidade: ");
    scanf("%s", cidade_A);

    printf("População: ");
    scanf("%u", &populacao_A);

    printf("Àrea (em km²): ");
    scanf("%f", &area_A);

    printf("PIB: ");
    scanf("%f", &pib_A);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &numero_pontos_turisticos_A);
    printf("\n\n");

    /*aqui é feita os calculo da divisão de pulacão e aréa para ser exibido em densidade populacional
    e também a multiplicação de (pib X 1000000000) e depois a divisão por população, é feita a multiplicação do pib primeiro para que seja mostrado em bilhoes, carta1*/
    Densidade_Populaciona_A = (float)populacao_A / area_A;
    PIB_per_Capita_A = (float)(pib_A * 1000000000) / populacao_A;
    Super_Poder_A = populacao_A + area_A + pib_A + numero_pontos_turisticos_A + Densidade_Populaciona_A + PIB_per_Capita_A;

    // aqui usamos printf para pedir os dados da carta, e scanf para coletar os dados, carta2
    printf("Carta 2:\n");
    printf("Estado: ");
    scanf(" %s", estado_B);

    printf("Código da Carta: ");
    scanf("%s", codigo_B);

    printf("Nome da Cidade: ");
    scanf("%s", cidade_B);

    printf("População: ");
    scanf("%u", &populacao_B);

    printf("Àrea (em km²): ");
    scanf("%f", &area_B);

    printf("PIB: ");
    scanf("%f", &pib_B);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &numero_pontos_turisticos_B);
    printf("\n\n");

    /*aqui é feita os calculo da divisão de pulacão e aréa para ser exibido em densidade populacional
    e também a multiplicação de (pib X 1000000000) e depois a divisão por população, é feita a multiplicação do pib primeiro para que seja mostrado em bilhoes, carta2*/
    Densidade_Populaciona_B = (float)populacao_B / area_B;
    PIB_per_Capita_B = (float)(pib_B * 1000000000) / populacao_B;
    Super_Poder_B = populacao_B + area_B + pib_B + numero_pontos_turisticos_B + Densidade_Populaciona_B + PIB_per_Capita_B;

    // aqui utilizamos printf para exibe os dados da carta1 e carta2
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_A);
    printf("Código da Carta: %s\n", codigo_A);
    printf("Nome da Cidade: %s\n", cidade_A);
    printf("População: %u\n", populacao_A);
    printf("Àrea(em km²): %.2f km²\n", area_A);
    printf("PIB: %.2f bilhões de reais\n", pib_A);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_A);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populaciona_A);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_A);
    printf("Super Poder: %.2f\n\n", Super_Poder_A);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_B);
    printf("Código da Carta: %s\n", codigo_B);
    printf("Nome da Cidade: %s\n", cidade_B);
    printf("População: %u\n", populacao_B);
    printf("Àrea(em km²): %.2f km²\n", area_B);
    printf("PIB: %.2f bilhões de reais\n", pib_B);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_B);
    printf("Densidade Populacional: %.2f  hab/km²\n", Densidade_Populaciona_B);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_B);
    printf("Super Poder: %.2f\n\n", Super_Poder_B);

    // aqui exibimos as opcão de atributos da carta onde o usuario escolhe qual atributo vai ser comparado
    int opcao1;
    printf("Escolha O Primeiro Atributo\n");
    printf("Opcão 1, População\n");
    printf("Opcão 2, Área\n");
    printf("Opcão 3, PIB\n");
    printf("Opcão 4, Número de Pontos Turísticos\n");
    printf("Opcão 5, Densidade Populacional\n");
    printf("Opcão 6, PIB per Capital\n");
    printf("Opcão 7, Super Poder\n");
    printf("Digite o Número da Opcão:");
    scanf("%d", &opcao1);
    printf("\n\n");

    // switch é onde escolhemos o atributo que vai ser comparada
    switch (opcao1)
    {
    case 1:
        printf("Você Escolheu Opcão População\n");
        resultado1 = populacao_A > populacao_B ? 1 : 0;
        break;

    case 2:
        printf("Você Escolheu Opcão Área\n");
        resultado1 = area_A > area_B ? 1 : 0;
        break;

    case 3:
        printf("Você Escolheu Opcão PIB\n");
        resultado1 = pib_A > pib_B ? 1 : 0;
        break;

    case 4:
        printf("Você Escolheu Opcão Número de Pontos Turísticos\n");
        resultado1 = numero_pontos_turisticos_A > numero_pontos_turisticos_B ? 1 : 0;
        break;

    case 5:
        printf("Você Escolheu Opcão Densidade Populacioal\n");
        resultado1 = Densidade_Populaciona_A < Densidade_Populaciona_B ? 1 : 0;
        break;

    case 6:
        printf("Você Escolheu Opcão PIB ser Capital\n");
        resultado1 = PIB_per_Capita_A > PIB_per_Capita_B ? 1 : 0;
        break;

    case 7:
        printf("Você Escolheu Opcão Super Poder\n");
        resultado1 = Super_Poder_A > Super_Poder_B ? 1 : 0;
        break;

    default:
        printf("Opcão Invalida");
        break;
    }

    int opcao2;
    printf("Escolha O Segundo Atributo \n");
    printf("Opcão 1, População\n");
    printf("Opcão 2, Área\n");
    printf("Opcão 3, PIB\n");
    printf("Opcão 4, Número de Pontos Turísticos\n");
    printf("Opcão 5, Densidade Populacional\n");
    printf("Opcão 6, PIB per Capital\n");
    printf("Opcão 7, Super Poder\n");
    printf("Digite o Número da Opcão:");
    scanf("%d", &opcao2);
    printf("\n\n");

    // esse if-else verifica se você você escolheu os mesmo atributo e verifaca também o segundo atributo que você escolheu, usando condiçoes aninhadas
    if (opcao1 == opcao2)
    {
        printf("Vocé escolheu o mesmo atributo!\n");
    }
    else
    {

        switch (opcao2)
        {
        case 1:
            printf("Você Escolheu Opcão População\n");
            resultado2 = populacao_A > populacao_B ? 1 : 0;
            break;

        case 2:
            printf("Você Escolheu Opcão Área\n");
            resultado2 = area_A > area_B ? 1 : 0;
            break;

        case 3:
            printf("Você Escolheu Opcão PIB\n");
            resultado2 = pib_A > pib_B ? 1 : 0;
            break;

        case 4:
            printf("Você Escolheu Opcão Número de Pontos Turísticos\n");
            resultado2 = numero_pontos_turisticos_A > numero_pontos_turisticos_B ? 1 : 0;
            break;

        case 5:
            printf("Você Escolheu Opcão Densidade Populacioal\n");
            resultado2 = Densidade_Populaciona_A < Densidade_Populaciona_B ? 1 : 0;
            break;

        case 6:
            printf("Você Escolheu Opcão PIB ser Capital\n");
            resultado2 = PIB_per_Capita_A > PIB_per_Capita_B ? 1 : 0;
            break;

        case 7:
            printf("Você Escolheu Opcão Super Poder\n");
            resultado2 = Super_Poder_A > Super_Poder_B ? 1 : 0;
            break;

        default:
            printf("Opcão Invalida\n");
            break;
        }

        printf("\n\n");
        // if-else verifica o resultado dos atributo, se ganhou perdeu ou empatou
        if (resultado1 && resultado2)
        {
            printf("Parabéns, você Ganhou!\n");
        }
        else if (resultado1 != resultado2)
        {
            printf("Empatou!\n");
        }
        else
        {
            printf("Infelizmente, você Perdeu!\n");
        }
    }
    return 0;
}