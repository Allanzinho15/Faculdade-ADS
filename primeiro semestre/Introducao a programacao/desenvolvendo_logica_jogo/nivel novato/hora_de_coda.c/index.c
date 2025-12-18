#include <stdio.h>;

int main()
{
    float temperatura, umidaded;
    unsigned int estoque, estoqueminimo = 1000;

    printf("entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("entre com a umidade: \n");
    scanf("%f", &umidaded);
    printf("entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30)
    {
        printf("temperatura está alta\n");
    }
    else
    {
        printf("A temperatura está adequada\n");
    }

    if (umidaded > 50)
    {
        printf("Umidade elevada\n");
    }
    else
    {
        printf("umidade esta adequada\n");
    }

    if (estoque < estoqueminimo)
    {
        printf("estoque abaixo do minimo\n");
    }
    else
    {
        printf("estoque normal\n");
    }
}