#include <stdio.h>

int main() {

    // //verificação inplícita
    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", numero1 > numero2);
    printf("numero1 == numero2: %d\n", numero1 == numero2);

    //verificação explicita
    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", (int)numero1 > numero2);
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2);


    return 0;
}