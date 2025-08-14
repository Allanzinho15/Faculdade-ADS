#include <stdio.h>

int main()
{
    int Nota_A, Nota_B, Nota_C;
    float Media;

    printf("*** Programa de Calculo de Media ***\n");

    printf("Digite a sua Priemeira nota:");
    scanf("%d", &Nota_A);

    printf("Digite a sua Segunda nota:");
    scanf("%d", &Nota_B);

    printf("Digite a sua Terceira nota:");
    scanf("%d", &Nota_C);

    Media = (float)(Nota_A + Nota_B + Nota_C) / 3;

    printf("Sua Media é:%.2f", Media);
}
