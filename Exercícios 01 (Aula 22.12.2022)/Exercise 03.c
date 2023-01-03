#include <stdio.h>

// Faça um programa que leia vários inteiros positivos e mostre, no final,
// a soma dos números pares e a soma dos números ímpares. O programa para
// quando o número for maior que 1000.

int main()
{
    int num, par, impar = 0;

    while (1){
        loop:
        printf("Digite um numero inteiro positivo (Maior que 1000 para parar): ");
        scanf("%d", &num);
        if (num > 1000)
            break;
        if (num >= 0){
            if (num % 2 == 0)
                par += num;
            if (num % 2 != 0)
                impar += num;
        }
        else {
            printf("Numero invalido\n");
            goto loop;
            }
    }

    printf("\nSoma dos pares: %d", par);
    printf("\nSoma dos impares: %d\n", impar);
    return 0;
}
