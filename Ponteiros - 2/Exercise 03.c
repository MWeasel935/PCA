#include <stdio.h>

int main()
{
    int x = 1, *px = &x;
    float y = 2.5, *py = &y;
    char z = 'A', *pz = &z;

    printf("Variaveis iniciais:");
    printf("\n%d", x);
    printf("\n%.1f", y);
    printf("\n%c\n", z);


    *px = 2;
    *py = 4.7;
    *pz = 'B';

    printf("\nVariaveis modificadas:");
    printf("\n%d", x);
    printf("\n%.1f", y);
    printf("\n%c\n", z);
}
