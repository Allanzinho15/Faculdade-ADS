#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int opcao, regras;
  int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    srand(time(0));
    numeroSecreto = rand() % 10;
    printf("Digite um numero de 0 a 9");
    scanf("%d", &palpite);

    if (numeroSecreto == palpite)
    {
      printf("Você acertou\n");
      printf("número secreto %d\n", numeroSecreto);
    }
    else
    {
      printf("Você errou");
      printf("número secreto %d\n", numeroSecreto);
    }
    break;
  case 2:
    printf("A explicação das regras!\n");
    printf("Digite a opção relacionada as regras do jogo!");
    scanf("%d", &regras);
    switch (regras)
    {
    case 1:
      printf("regra número 1");
      break;
    case 2:
      printf("regra número 2");
      break;
    case 3:
      printf("regra número 3");
      break;
    default:

      break;
    }
    break;
  case 3:
    printf("Saindo do jogo...\n");
    break;
  default:
    printf("Opção inválida\n");
    break;
  }

  return 0;
}