#include <stdio.h>
#include <math.h>

int decimal_para_binario(int decimal) {
    int binario = 0, i = 0;
    while (decimal != 0) {
        binario += (decimal % 2) * pow(10, i);
        decimal /= 2;
        i++;}
    return binario;
}

int main() {
    int decimal;

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    printf("%d em decimal eh %d em binario\n", decimal, decimal_para_binario(decimal));
    return 0;
}
