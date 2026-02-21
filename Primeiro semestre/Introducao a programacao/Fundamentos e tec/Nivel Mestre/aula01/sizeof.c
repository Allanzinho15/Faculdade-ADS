#include <stdio.h>

int main()
{

    printf("Taman de int: %lu bytes\n", sizeof(int));
    printf("Taman de long int: %lu bytes\n", sizeof(long int));
    printf("Taman de long long int: %lu bytes\n", sizeof(long long int));
    printf("Taman de double: %lu bytes\n", sizeof(double));
    printf("Taman de long double: %lu bytes\n", sizeof(long double));

    return 0;
}