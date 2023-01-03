#include <stdio.h>

// Dado um número n inteiro e positivo, dizemos que n é perfeito
// se n for igual à soma de seus divisores positivos diferentes
// de n. Countrua um programa erm C que veriique se um dado número
// é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6.

int main()
{
    int num, count, perfeito = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (count = 1; count < num; count++){
        if (num % count == 0)
            perfeito += count;
    }

    if (perfeito == num)
        printf("\nEh um numero perfeito\n");
    else
        printf("\nNao eh um numero perfeito\n");
}
