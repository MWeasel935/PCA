#include <stdio.h>
#include <math.h>

int binario_para_decimal(int binario) {
    int decimal = 0, i = 0, resto;
    while (binario != 0) {
        resto = binario % 10;
        binario /= 10;
        decimal += resto * pow(2, i);
        i++;}

    return decimal;
}


int main()
{
    int binario;

    printf("Digite um numero binario: ");
    scanf("%d", &binario);

    printf("%d em binario eh %d em decimal.\n", binario, binario_para_decimal(binario));
    return 0;
}
