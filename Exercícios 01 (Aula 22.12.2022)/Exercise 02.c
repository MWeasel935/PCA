#include <stdio.h>

// Escreva um programa em C que lê 15 valores reais,
// encontra o maior e o menor deles e mostre o resultado.

int main()
{
    int count;
    float num, min, max = 0;

    for (count = 1; count <=15; count++)
{
        loop:
        printf("Digite 15 numeros reais (%d/15): ", count);
        scanf("%f", &num);
        if (count == 1){
                max = num;
                min = max;}
        else if (num > max)
            max = num;
        else if (num < min)
            min = num;
}

    printf("\nMaior numero: %.1f", max);
    printf("\nMenor numero: %.1f\n", min);
    return 0;
}
