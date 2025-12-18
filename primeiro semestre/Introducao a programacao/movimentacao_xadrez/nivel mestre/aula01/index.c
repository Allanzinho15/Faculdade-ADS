#include <stdio.h>

/*
loop Avançados
o que vamos ver?

*formas não comuns de declarar loops
*Especificidade, complexidade, necessidade

______________________________________________________________________________________

loops avançados
"for" básico

*estrutura:
  °nome da estrutura
  °(inicialização; condição; incremento)
  °{código}

*for(inicialização; condição; incremento){
Código
}
 *definie valor inicial
 *condição booleana
 *incremento ou decremento

_________________________________________________________________________________________

loops avançados
"for" avançado

*estrutura:
  °nome da estrutura
  °(inicialização; condição; incremento)
  °{código}

*for(múltiplas variáveis; condição múltipla; atualizações de incremento complexas){
Código
}
 * "i" e "j" sendo iniciados ao mesmo tempo
 *uso de && ou ||
 *incremento ou decremento baseado em condicionais

 EXEMPLO DE MÚLTIPLAS VARIÁVEIS:

 int main() {
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}

 EXEMPLO DE CONDIÇÕES MÚLTIPLAS:

 int main() {
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}

 EXEMPLO DE ATUALIZAÇÕES COMLEXAS:

 int main() {
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }
    return 0;
}

 _______________________________________________________________________________________

 loops avançados
 importância

 *controle sobre a execução
 *criar programas eficientes e simples
 *requer entendimento do macro da aplicação

 dicas:

 *a compreensão maior vem da pática
 *explorar as alternativas de aplicação
________________________________________________________________________________________

loops acançados
Uso de continue e break


int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue; // Pula a iteração quando i é 5
        if (i == 8) break;    // Sai do loop quando i é 8
        printf("%d ", i);
    }
    return 0;
}
*/
int main()
{
    for (int i = 0, j = 10; i < j; i++, j--)
    {
        printf("I = %d, j = %d \n", i, j);
    }

    return 0;
}