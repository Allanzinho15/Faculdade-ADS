#include <stdio.h>

int main()
{

    int opcao;
    float saldo = 1000;

    printf("Escolha uma opção\n");
    printf("1. verificar saldo\n");
    printf("2. fazer depósito\n");
    printf("3. fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu saldo é: R$ %f\n", saldo);
        break;
    case 2:
        printf("Digite o banco que você deseja depositar\n");
        printf("Digite a agencia que você deseja deposita\n");
        printf("Digite a conta que você deseja depositar\n");
        break;
    case 3:
        printf("Digite o valor a sacar\n");
    default:
        printf("Opção inválida!\n");
        break;
    }
}