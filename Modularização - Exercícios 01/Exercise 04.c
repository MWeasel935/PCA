#include <stdio.h>

int fat(int n)
{
    int fatorial = 1;
    for (int i = 1; i <= n; i++){
        fatorial *= i;}

    return fatorial;
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\nFatorial de %d! = %d\n", num, fat(num));
}
