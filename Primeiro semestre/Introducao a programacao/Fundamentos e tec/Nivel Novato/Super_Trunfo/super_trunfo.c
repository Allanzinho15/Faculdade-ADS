#include <stdio.h>

int main()
{
    // Variavel onde vai armazenar os dados da cartas
    char estado_A[2], estado_B[2];
    char codigo_A[4], codigo_B[4];
    char cidade_A[35], cidade_B[35];
    int populacao_A, populacao_B;
    float area_A, area_B;
    float pib_A, pib_B;
    int numero_pontos_turisticos_A, numero_pontos_turisticos_B;

    // aqui é onde os dados serão pedidos e coletados
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %s", estado_A);

    printf("Código da Carta: ");
    scanf("%s", codigo_A);

    printf("Nome da Cidade: ");
    scanf("%s", cidade_A);

    printf("População: ");
    scanf("%d", &populacao_A);

    printf("Àrea (em km²): ");
    scanf("%f", &area_A);

    printf("PIB: ");
    scanf("%f", &pib_A);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numero_pontos_turisticos_A);

    printf("Carta 2:\n");
    printf("Estado: ");
    scanf(" %s", estado_B);

    printf("Código da Carta: ");
    scanf("%s", codigo_B);

    printf("Nome da Cidade: ");
    scanf("%s", cidade_B);

    printf("População: ");
    scanf("%d", &populacao_B);

    printf("Àrea (em km²): ");
    scanf("%f", &area_B);

    printf("PIB: ");
    scanf("%f", &pib_B);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &numero_pontos_turisticos_B);

    // onde será exibido os dados da carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_A);
    printf("Código da Carta: %s\n", codigo_A);
    printf("Nome da Cidade: %s\n", cidade_A);
    printf("População: %d\n", populacao_A);
    printf("Àrea(em km²): %.2f\n", area_A);
    printf("PIB: %.2f\n", pib_A);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_A);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_B);
    printf("Código da Carta: %s\n", codigo_B);
    printf("Nome da Cidade: %s\n", cidade_B);
    printf("População: %d\n", populacao_B);
    printf("Àrea(em km²): %.2f\n", area_B);
    printf("PIB: %.2f\n", pib_B);
    printf("Número de Pontos Turísticos: %d", numero_pontos_turisticos_B);

    return 0;
}