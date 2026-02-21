#include <stdio.h>
/*Estrutura "while"

*executa repetidamente
*depende de uma condião verdadeira para funciona
*termina quando a condição se torna falsa
____________________________________________________________________________

*estrutura "while"

*estrutura:
*nome da estrutura
*(condição)
*{código}

while(condição){
     codigo
}
*condição é booleana
____________________________________________________________________________

*estrutura "while"

evitando loop infinito
*Ocorre quando a condição nunca se torna falso
*Pode Travar o programa ou consumir muitos recursos

como previnir?
*garatir que a condição se torne falsa
________________________________________________________________________

estrutura "while"
importância

*permite execução repetitiva
*fundamental para qualquer programador
*controle sobre a execução do código
*criar programas eficientes e robusto

dicas
*a compreensão maior vem da prática
*explorar formas de declarar o "while"

__________________________________________________________________________
*/
int main()
{
     int i = 1;

     while (i <= 5)
     {

          printf("%d\n", i);

          i++;
     }

     return 0;
}