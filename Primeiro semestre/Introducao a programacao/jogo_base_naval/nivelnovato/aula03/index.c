#include <stdio.h>
/*
vetores e matrizes
o que são vetores?

*também conhecido como array
*coleção de elemento na memória
*acesso direto por índices (começando pelo zero)
_______________________________________________________________________________________

vetores e matrizes
declaração, inicialização e acesso

int main(){

int numeros[5]; // declaração de um vetor de inteiros

//inicializando os elementos do vetor

numeros[0] = 10;
numeros[1] = 20;
numeros[2] = 30;
numeros[3] = 40;
numeros[4] = 50;

//acessando elementos do vetor

printf("o primeiro elemento é %d\n", numero[0]);
printf("o segundo elemento é %d\n", numero[1]);

return 0;

}

_______________________________________________________________________________________________

vetores e matrizes
o que são matrizes

*também conhecido como array multidimensional
*contém linhas e colunas
*forma mais comum de utilização é bidimensional

*múltiplos índices:
  °linhas
  °colunas
_______________________________________________________________________________________________

vetores e matrizes
declaração,  inivialização e acesso

int main() {
    int matriz[3][3];  // Declaração de uma matriz 3x3 de inteiros

    // Inicializando os elementos da matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    // Acessando elementos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n", matriz[1][1]);

    return 0;
}

inicialização cimplificada

*semelhante a vetores
*declara os valores de todos os índices no início

int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

_________________________________________________________________________________

vetores e matrizes

*tamanho fixo, não pode ser alterado em execução
*acesso por índices, começando do zero
*todos os elementos devem possuir o mesmo tipo
*essencial para programas eficientes e eficazes

*/
int main()
{
}