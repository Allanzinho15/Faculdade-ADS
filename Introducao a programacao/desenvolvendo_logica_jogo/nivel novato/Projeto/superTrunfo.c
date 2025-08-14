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

    // estrutura de comparação das cartas
    if (populacao_A > populacao_B)
    {
        printf("Carta 1 - %s: %u\n", cidade_A, populacao_A);
        printf("Carta 2 - %s: %u\n", cidade_B, populacao_B);
        printf("Resultado: Carta 1 (%s) Venceu!", cidade_A);
    }
    else
    {
        printf("Carta 1 - %s: %u\n", cidade_A, populacao_A);
        printf("Carta 2 - %s: %u\n", cidade_B, populacao_B);
        printf("Resultado: Carta 2 (%s) Venceu!\n\n", cidade_B);
    }

    if (area_A > area_B)
    {
        printf("Carta 1 - Área (em km²): %f\n", area_A);
        printf("Carta 2 - Área (em km²): %f\n", area_B);
        printf("Resultado: Carta 1 (Área) Venceu!\n\n");
    }
    else
    {
        printf("Carta 1 - Área (em km²): %f \n", area_A);
        printf("Carta 2 - Área (em km²): %f \n", area_B);
        printf("Resultado: Carta 2 (Área) Venceu!\n\n");
    }

    if (pib_A > pib_B)
    {
        printf("Carta 1 - PIB: %f bilhões de reais\n", pib_A);
        printf("Carta 2 - PIB: %f bilhões de reais\n", pib_B);
        printf("Resultado: Carta 1 (PIB) Venceu!\n\n");
    }
    else
    {
        printf("Carta 1 - PIB: %f bilhões de reais\n", pib_A);
        printf("Carta 2 - PIB: %f bilhões de reais\n", pib_B);
        printf("Resultado: Carta 2 (PIB) Venceu!\n\n");
    }

    if (Densidade_Populaciona_A < Densidade_Populaciona_B)
    {
        printf("Carta 1 - Densidade Populacional: %.2f  hab/km²\n", Densidade_Populaciona_A);
        printf("Carta 2 - Densidade Populacional: %.2f  hab/km²\n", Densidade_Populaciona_B);
        printf("Resultado: Carta 1 (Densidade Populacional) Venceu!\n\n");
    }
    else
    {
        printf("Carta 1 - Densidade Populacional: %.2f  hab/km²\n", Densidade_Populaciona_A);
        printf("Carta 2 - Densidade Populacional: %.2f  hab/km²\n", Densidade_Populaciona_B);
        printf("Resultado: Carta 2 (Densidade Populacional) Venceu!\n\n");
    }

    if (PIB_per_Capita_A > PIB_per_Capita_B)
    {
        printf("Carta 1 - PIB per Capita: %.2f Reais\n", PIB_per_Capita_A);
        printf("Carta 2 - PIB per Capita: %.2f Reais\n", PIB_per_Capita_B);
        printf("Resultado: Carta 1 (PIB per Capita) Venceu!\n\n");
    }
    else
    {
        printf("Carta 1 - PIB per Capita: %.2f Reais\n", PIB_per_Capita_A);
        printf("Carta 2 - PIB per Capita: %.2f Reais\n", PIB_per_Capita_B);
        printf("Resultado: Carta 2 (PIB per Capita) Venceu!\n\n");
    }

    if (Super_Poder_A > Super_Poder_B)
    {
        printf("Carta 1 - Super Poder: %.2f Reais\n", Super_Poder_A);
        printf("Carta 2 - Super Poder: %.2f Reais\n", Super_Poder_B);
        printf("Resultado: Carta 1 (Super Poder) Venceu!\n\n");
    }
    else
    {
        printf("Carta 1 - Super Poder: %.2f \n", Super_Poder_A);
        printf("Carta 2 - Super Poder: %.2f \n", Super_Poder_B);
        printf("Resultado: Carta 2 (Super Poder) Venceu!\n\n");
    }
    return 0;
}