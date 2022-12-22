#include <stdio.h>

int main()
{
    int num, count, soma = 0;
    for (count = 1; count <=5; count++)
    {
       printf("Digite 5 numeros (%d/5): ", count);
       scanf("%d", &num);
       soma += num;
    }

    printf("\nSoma = %d\n", soma);
    return 0;
}
