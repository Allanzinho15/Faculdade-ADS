#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */
   int numero1, numero2;
   int soma , subtracao, multiplicacao, divisao;


   //faz a coleta de dados para realizar as operações
   printf("Entre com o numero 1: \n");
   scanf("%d", &numero1);
   printf("Entre com numero 2: \n");
   scanf("%d", &numero2);


   //operação soma
   soma = numero1 + numero2;

   //operação subtração
   subtracao = numero1 - numero2;

   //operação multiplicação
   multiplicacao = numero1 * numero2;

   //operação divisão
   divisao = numero1 / numero2;


   //Exibe o resultado das operação
   printf("A Soma é: %d\n", soma);
   printf("A Subtração é: %d\n", subtracao);
   printf("A Multiplicação é: %d\n", multiplicacao);
   printf("A Divisão é: %d\n", divisao);


}