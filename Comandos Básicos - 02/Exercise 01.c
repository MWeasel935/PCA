#include <stdio.h>

int main()
{
    int num1, num2, soma;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("\nA soma de %d + %d eh: %d\n", num1, num2, soma);
    return 0;
}
