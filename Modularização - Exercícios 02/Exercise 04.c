#include <stdio.h>

int verifica_segmento(int x, int y)
{
    int temp = y;
    int pot = 1;
    int dig;

    while (temp > 0){
        pot *= 10;
        temp /= 10;}

    while (y >= x){
        dig = y % pot;
        if (dig == x){
            return 1;}
        y /= 10;}

    return 0;
}

int main()
{
    int x, y;
    printf("Digite um numero (X): ");
    scanf("%d", &x);

    printf("Digite um numero (Y): ");
    scanf("%d", &y);

    if (verifica_segmento(x, y))
        printf("\nX eh um segmento de Y.\n");
    else
        printf("\nX eh um segmento de Y.\n");
}
