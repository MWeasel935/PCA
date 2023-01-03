#include <stdio.h>

// Faça um programa em C que calcula e escrevea seguinte
// soma: soma=1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.

int main()
{
    float soma = 0;
    float num = 1;

    for (int den = 1; den <= 50; den ++){
        soma += num / den;
        num += 2;
    }

    printf("\nResultado: %.1f\n", soma);
    return 0;
}
