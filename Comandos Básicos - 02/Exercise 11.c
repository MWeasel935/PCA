#include <stdio.h>

int main()
{
    float dinheiro, horas, total;

    printf("Quanto voce ganha por hora?: ");
    scanf("%f", &dinheiro);
    printf("Quantas horas voce trabalha no mes?: ");
    scanf("%f", &horas);

    total = dinheiro * horas;

    float imposto, inss, sindicato, sal_liquido;

    imposto = total * 0.11;
    inss = total * 0.08;
    sindicato = total * 0.05;
    sal_liquido = total - imposto - inss - sindicato;

    printf("\nSalario Bruto: R$%.2f\n", total);
    printf("\nPago ao Imposto de Renda: R$%.2f\n", imposto);
    printf("\nPago ao INSS: R$%.2f\n", inss);
    printf("\nPago ao sindicato: R$%.2f\n", sindicato);
    printf("\nSalario Liquido: R$%.2f\n", sal_liquido);

    return 0;
}
