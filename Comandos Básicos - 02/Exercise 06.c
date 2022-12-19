#include <stdio.h>

int main()
{
    float dinheiro, horas, total;

    printf("Quanto voce ganha por hora?: ");
    scanf("%f", &dinheiro);
    printf("Quantas horas voce trabalha no mes?: ");
    scanf("%f", &horas);

    total = dinheiro * horas;

    printf("\nSalario: R$%.2f\n", total);
    return 0;
}
