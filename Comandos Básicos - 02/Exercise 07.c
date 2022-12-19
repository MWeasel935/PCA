#include <stdio.h>

int main()
{
    float farenheit, celsius;

    printf("Digite a temperatura em graus Farenheit: ");
    scanf("%f", &farenheit);

    celsius = ((farenheit - 32) * 5) / 9;

    printf("\n%.1f graus Farenheit sao %.0f graus Celsius\n", farenheit, celsius);
    return 0;
}
