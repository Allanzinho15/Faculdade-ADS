#include <stdio.h>

int main()
{
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    pós-Decremento a--
    */

    int Numero = 1, resultado;

    // maneira de como poderia ser feito sem Pós-incremento
    // Numero = Numero + 1
    // Numero += 1
    printf("Antes incremento: %d\n", Numero);
    Numero++;
    printf("Apos incremento: %d\n", Numero);

    // maneira de como poderia ser feito sem Pós-decremento
    // Numero = Numero - 1
    // mumero -= 1
    printf("Antes decremento: %d\n", Numero);
    Numero--;
    printf("Apos decremento: %d\n", Numero);

    // mostrando como funciona o Pós-incremento
    // Pós-incremento
    // resultado = recebe Numero e depois Numero recebe mais 1
    // ex: Numero = 1, resultado recebe Numero, agora resultado  passa a valer 1, e só depois que resultado recebe Numero que o Numero vai receber mais 1 e vai passa a valer 2
    resultado = Numero++;
    printf("Apos Pós-incremento - Numeor 1: %d - resultado:%d\n", Numero, resultado);

    // mostrando como funciona o Pré-incremento
    // Pré-incremento
    // resultado = ja recebe mumero1 com mais 1
    // ex: resultado ele ja recebe Numero valendo dois, antes do resultado receber Numero o Numero ele recebe mais 1 e passa valer dois, e resultado ja recebe Numero valendo dois assim resultado tambem passa a valer 2
    resultado = ++Numero;
    printf("Apos Pré-incremento - Numeor 1: %d - resultado:%d\n", Numero, resultado);

    // mostrando como funciona o Pós-Decremento
    // pós-Decremento
    // resultado = recebe Numero e depois Numero recebe  -1
    // ex: Numero = 1, resultado recebe Numero, agora resultado  passa a valer 1, e só depois que resultado recebe Numero que Numero vai receber  -1 e vai passa a valer 0
    resultado = Numero--;
    printf("Apos Pós-incremento - Numeor 1: %d - resultado:%d\n", Numero, resultado);

    // mostrando como funciona o Pré-incremento
    // pré-Decremento
    // resultado = ja recebe mumero1 com menos -1
    // ex: resultado ele ja recebe Numero com menos -1, antes do resultado receber Numero o Numero ele recebe  -1 e passa valer 0, e resultado ja recebe Numero valendo 0 assim resultado tambem passa a valer 0
    resultado = --Numero;
    printf("Apos Pré-incremento - Numeor 1: %d - resultado:%d\n", Numero, resultado);
}