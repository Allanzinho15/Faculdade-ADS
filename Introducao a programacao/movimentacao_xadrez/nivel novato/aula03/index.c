#include <stdio.h>
/*
estrutura "for"

*utilizado para loops de tamanho específico
*ideal quando sabemos quantas vezes será executado

_____________________________________________________________________________________________

estrutura "for"
*estrutura:
*(inicialização; condição; incremento)
*{código}

for(inicialização; condição; incremento){
código
}

*define valor inicial
*condição booleana
*incremento ou decremento
_____________________________________________________________________________________________

estrutura "for"
funcionamento

*inicialização: Apenas uma vez
*condição: toda execução
*incremento: no final da execução
________________________________________________________________________________________________
estrutura "for"
vantagens

*código fácil de ler e enteder
*número fixo de execuçães
*uso de condicionais
*incremento e decremento
_______________________________________________________________________________________________
estrutura "for"
importância

*indispensavável para qualquer programador
*controle sobre a execução do código
*criar programas eficientes e robustos
*códigos legíveis

dicas

*a compreensão maior vem da prática
*explorar condicionais dentro do "for", incrementos e decrementos
*/
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}