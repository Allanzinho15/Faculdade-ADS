#include <stdio.h>

int main()
{
  int variavel;

  printf("Digite um valor");
  scanf("%d", &variavel);

  switch (variavel)
  {
  case 1:
    printf("Código a ser executado se variavel == valor1");
    break;
  case 2:
    printf("Código a ser executado se variavel == valor2");
    break;
  // Você pode adicionar quantos casos forem necessários
  default:
    printf("Código a ser executado se nenhum dos casos acima for verdadeiro");
  }
}