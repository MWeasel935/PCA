#include <stdio.h>

int main()
{
    float num1, num2, num3;

    printf("Digite o primeiro numero (Inteiro): ");
    scanf("%f", &num1);
    printf("Digite o segundo numero (Inteiro): ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero (Real): ");
    scanf("%f", &num3);

    float conta1, conta2, conta3;

    conta1 = (num1 * 2) * (num2 * 1/2);
    conta2 = (num1 * 3) + num3;
    conta3 = (num3 * num3 * num3);

    printf("\nO produto do dobro do primeiro com a metade do segundo: %.1f\n", conta1);
    printf("\nA soma do triplo do primeiro com o terceiro: %.1f\n", conta2);
    printf("\nO terceiro elevado ao cubo: %.1f\n", conta3);
    return 0;
}
