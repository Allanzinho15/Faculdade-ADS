#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    pós-Decremento a--
    */

    int numero1 = 1, resultado;

    //maneira de como poderia ser feito sem Pós-incremento
    //numero1 = numero1 + 1
    //numero1 += 1 
    printf("Antes incremento: %d\n", numero1);
    numero1++;
    printf("Apos incremento: %d\n", numero1);

    //maneira de como poderia ser feito sem Pós-decremento
    //numero1 = numero1 - 1
    //mumero -= 1
    printf("Antes decremento: %d\n", numero1);
    numero1--;
    printf("Apos decremento: %d\n", numero1);


    //mostrando como funciona o Pós-incremento
    //Pós-incremento
    //resultado = recebe numero1 e depois numero1 recebe mais 1 
    //ex: numero1 = 1, resultado recebe numero1, agora resultado  passa a valer 1, e só depois que resultado recebe numero1 que numero1 vai receber mais 1 e vai passa a valer 2  
    resultado = numero1++;
    printf("Apos Pós-incremento - Numeor 1: %d - resultado:%d\n", numero1, resultado);


    //mostrando como funciona o Pré-incremento
    //Pré-incremento
    //resultado = ja recebe mumero1 com mais 1
    //ex: resultado ele ja recebe numero1 valendo dois, antes do resultado receber numero1 o numero1 ele recebe mais 1 e passa valer dois, e resultado ja recebe numero1 valendo dois assim resultado tambem passa a valer 2
    resultado = ++numero1;
    printf("Apos Pós-incremento - Numeor 1: %d - resultado:%d\n", numero1, resultado);


    //mostrando como funciona o Pós-Decremento
    //pós-Decremento
    //resultado = recebe numero1 e depois numero1 recebe  -1 
    //ex: numero1 = 1, resultado recebe numero1, agora resultado  passa a valer 1, e só depois que resultado recebe numero1 que numero1 vai receber  -1 e vai passa a valer 0
    resultado = numero1--;
    printf("Apos Pós-incremento - Numeor 1: %d - resultado:%d\n", numero1, resultado);


    //mostrando como funciona o Pré-incremento
    //pré-Decremento
    //resultado = ja recebe mumero1 com menos -1
    //ex: resultado ele ja recebe numero1 com menos -1, antes do resultado receber numero1 o numero1 ele recebe  -1 e passa valer 0, e resultado ja recebe numero1 valendo 0 assim resultado tambem passa a valer 0
    resultado = --numero1;
    printf("Apos Pós-incremento - Numeor 1: %d - resultado:%d\n", numero1, resultado);

}