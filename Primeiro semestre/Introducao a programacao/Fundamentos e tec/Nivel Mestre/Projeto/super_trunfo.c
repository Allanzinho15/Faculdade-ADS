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

    printf("Número de Pontos Turísticos: ");
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

    // Aqui é onde acontece a comparação de carta
    char Carta[40] = "Carta 1";
    char carta0[40] = "Carta 2";

    // variavel delarada, onde vao receber as comparações
    int resultado_populacao, resultado_area, resultado_pib, resultadoPontos_turisticos, resultadoDensidade, resultadoPibCapita, resultado_poder;

    int resultado_populacao_B, resultado_area_B, resultado_pib_B, resultadoPontos_turisticos_B, resultadoDensidade_B, resultadoPibCapita_B, resultado_poder_B;

    resultado_populacao = populacao_A > populacao_B;
    resultado_area = area_A > area_B;
    resultado_pib = pib_A > pib_B;
    resultadoPontos_turisticos = numero_pontos_turisticos_A > numero_pontos_turisticos_B;
    resultadoDensidade = Densidade_Populaciona_A < Densidade_Populaciona_B;
    resultadoPibCapita = PIB_per_Capita_A > PIB_per_Capita_B;
    resultado_poder = Super_Poder_A > Super_Poder_B;

    printf("Os Atributo que Tiver (1) Significa que esse Atributo Ganha, Exceto Densidade de Populacional que quando Tiver(0) Signfica que esse Atributo Ganhou\n\n");

    // onde serão exibidas as comparações
    printf("%s\n", Carta);
    printf("População: %s (%d)\n", Carta, resultado_populacao);
    printf("Área: %s (%d)\n", Carta, resultado_area);
    printf("PIB: %s (%d)\n", Carta, resultado_pib);
    printf("Pontos Turísticos: %s (%d)\n", Carta, resultadoPontos_turisticos);
    printf("Densidade Populacional: %s (%d)\n", Carta, resultadoDensidade);
    printf("PIB per Capita: %s (%d)\n", Carta, resultadoPibCapita);
    printf("Super Poder: %s (%d)\n\n", Carta, resultado_poder);

    resultado_populacao_B = populacao_B > populacao_A;
    resultado_area_B = area_B > area_A;
    resultado_pib_B = pib_B > pib_A;
    resultadoPontos_turisticos_B = numero_pontos_turisticos_B > numero_pontos_turisticos_A;
    resultadoDensidade_B = Densidade_Populaciona_B < Densidade_Populaciona_A;
    resultadoPibCapita_B = PIB_per_Capita_B > PIB_per_Capita_A;
    resultado_poder_B = Super_Poder_B > Super_Poder_A;

    printf("%s\n", carta0);
    printf("População: %s (%d)\n", carta0, resultado_populacao_B);
    printf("Área: %s (%d)\n", carta0, resultado_area_B);
    printf("PIB: %s (%d)\n", carta0, resultado_pib_B);
    printf("Pontos Turísticos: %s (%d)\n", carta0, resultadoPontos_turisticos_B);
    printf("Densidade Populacional: %s (%d)\n", carta0, resultadoDensidade_B);
    printf("PIB per Capita: %s (%d)\n", carta0, resultadoPibCapita_B);
    printf("Super Poder: %s (%d)", carta0, resultado_poder_B);

    return 0;
}