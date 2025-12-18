#include <stdio.h>
/*
loops aninhados
o que são?

*loop dentro de outro loop
*usados para múltiplas dimensões de dados

_______________________________________________________________________________________

loops aninhados
funcionamento básico

*estrutura:
*nome da estrutura
*(condição)
*{código}

estrutura(condição){
    estrutura(condição){
        código
    }

}

*condição é booleana
*estrutura interna e externa

_______________________________________________________________________________________

loops aninhados
execução básica

estrutura(condição){
    estrutura(condição){
        código
    }

}

*cada execução do loop externo, executará completamente o loop interno.

_______________________________________________________________________________________

 loops aninhados
 exemplo com "while"

int main(){
    int i = 1;

    while (i <= 10){ //loop externo
        int j = 1;//variável local
        while (j <= 10){//loop interno
            printf("%d\n", i * j);
            j++;//incremento loop interno
        }
        printf("\n");
        i++;//incremento loop externo
    }
    return 0;
}

_______________________________________________________________________________________

loop aninhados
exemplo com "Do-while"

int main(){
    int i = 1;

    do{ //loop externo
        int j = 1;//variável local
        do{//loop interno
            printf("%d\n", i * j);
            j++;//incremento loop interno
        }while (j <= 10);//condição interno
        printf("\n");
        i++;//incremento loop externo
    } while (i <= 10);//condição externo

    return 0;
}

_______________________________________________________________________________________

loops aninhados
exemplo com "for"


int main(){
    for (int i = 0; i <= 10; i++){
        for (int j = 0; j <= 10; j++){
            printf("%d\n", i * j);
        }
        printf("\n");
    }
   return 0;
}

_______________________________________________________________________________________

loops aninhados
desenpenho

*computacionalmente caros
*crescimento exponencial:
    °O(n^2) para loops de "i" e "j"
    °o(n^3) para loops de "i", "j", e "k"
    °...n
_______________________________________________________________________________________

loops aninhados
importâncio

*fundamental para qualquer programador
*controlesobre a execução do código
*criar programas eficientes e robustos

dicas:
*a compreensão maior vem da prática
*utilizar o "for" para praticar
*não passar de O(n^3) quando praticar
*/
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\n", i * j);
        }
        printf("\n");
    }

    return 0;
}
