#include <stdio.h>

int main()
{
    // declaração de variavel
    char produto_A[40] = "Produto A";
    char produto_B[40] = "Produto B";

    unsigned int estoque_A = 1000;
    unsigned int estoque_B = 2000;

    float valor_A = 10.50;
    float valor_B = 20.40;

    unsigned int estoqueMInima_A = 500;
    unsigned int estoqueMinima_B = 2500;

    double valorTotal_A;
    double valortotal_B;

    int resultado_A, resultado_B;

    // Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e ovalor unitario é R$ %.2f\n", produto_A, estoque_A, valor_A);
    printf("Produto %s tem estoque %u e ovalor unitario é R$ %.2f\n", produto_B, estoque_B, valor_B);

    // comparações com o valor mínimo de estoque
    resultado_A = estoque_A > estoqueMInima_A;
    resultado_B = estoque_B > estoqueMinima_B;

    printf("O produto %s tem estoque Mínimo %d\n", produto_A, resultado_A);
    printf("O produto %s tem estoque Mínimo %d\n", produto_B, resultado_B);

    // Comparações entre os valores totais dos produtos
    printf("O valor tatal de A (R$ %.2f)é Maior que o valor total de B(R$ %.2f): %d\n", estoque_A * valor_A, estoque_B * valor_B, (estoque_A * valor_A) > (estoque_B * valor_B));
}