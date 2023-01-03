#include <stdio.h>

// Dado um n�mero n inteiro e positivo, dizemos que n � perfeito
// se n for igual � soma de seus divisores positivos diferentes
// de n. Countrua um programa erm C que veriique se um dado n�mero
// � perfeito. Ex: 6 � perfeito, pois 1+2+3 = 6.

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
