#include <stdio.h>

int main()
{
    int num, count, soma = 0;
    for (count = 1; count <=50; count++)
    {
       printf("Digite 50 numeros (%d/50): ", count);
       scanf("%d", &num);
       if (num % 2 != 0)
       soma += num;
    }

    printf("\nSoma dos impares = %d\n", soma);
    return 0;
}
