#include <stdio.h>

int main()
{
    // Declara as variáveis
    float conta, gorjeta, total;

    // Colocar o valor da conta
    printf("Informe o valor da conta: ");
    scanf("%f", &conta);

    // Calcula o valor da gorjeta e o total a pagar
    gorjeta = conta * 10/100;
    total = conta + gorjeta;

    printf("\nConta: %.2f", conta);
    printf("\nGorjeta do garcom: %.2f", gorjeta);
    printf("\nTotal a pagar: %.2f\n", total);
    return 0;
}
