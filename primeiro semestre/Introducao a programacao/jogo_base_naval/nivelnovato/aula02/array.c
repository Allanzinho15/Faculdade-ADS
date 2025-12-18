#include <stdio.h>
/*
vetores e matrizes
definição, inicialização e acesso

*definição:
 °declarae tipo e quantidade
   °int numero[5]

*inicialização:
 °inicialização com lista.
   °int numeros[5] = {10,20,30,40,50}

*acesso:
 °acesso pelo índice
   °numeros[0]
   °numeros[1]
   °numeros[4]

*Exemplo: printf("o primerio elemento é %d\n", numeros[0]);

*/
int main()
{

  float notas[3] = {85.5, 90.0, 78.3};

  printf("Nota do aluno 1 é: %.1f \n", notas[0]);
  printf("Nota do aluno 2 é: %.1f \n", notas[1]);
  printf("Nota do aluno 3 é: %.1f \n", notas[2]);

  return 0;
}