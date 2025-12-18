#include <stdio.h>
/*
estrutura "do-while"
definição

*variante do "while"
*garante execução pelo menos uma vez

______________________________________________________________________________________________

estrutura "do-while"
sintaxe básica

*estrutura:
*nome da estrutura
*(condição)
*{codigo}

do{
código

}while(condição)

*condição é booleana

_______________________________________________________________________________________________

estrutura "do-while"
vantagens

*execução garantida
*útil para solicitação de entrada do usuário
*útil para menus interativos
*verifição de condição posterior

*/
int main()
{
    int i = 1;

    do
    {
        printf("%d\n", i);
        i++;

    } while (i <= 5);

    return 0;
}