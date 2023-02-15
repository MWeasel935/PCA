#include <stdio.h>

int verificar(int x, int y)
{
    while (y > 0){
        if ((x%10) != (y%10))
            return 0;

        x = x/10;
        y = y/10;}

    return 1;
}

int main()
{
    int x, y;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Digite outro numero: ");
    scanf("%d", &y);

    if (verificar(x, y))
        printf("\nCorresponde\n");
    else
        printf("\nNao corresponde\n");
}
