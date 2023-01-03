#include <stdio.h>

// Dado um  número identificar se é um número primo.(Um número
// primo é aquele que é dividido por 1 e por ele mesmo).

int main()
{
    int num, count, primo = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (count = 1; count <= num; count++){
        if (num % count == 0)
            primo += 1;
    }

    if (primo == 2)
        printf("\nEh um numero primo\n");
    else
        printf("\nNao eh um numero primo\n");
}
