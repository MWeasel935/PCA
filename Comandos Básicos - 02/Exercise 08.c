#include <stdio.h>

int main()
{
    float celsius, farenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    farenheit = ((celsius * 9) / 5) + 32;

    printf("\n%.0f graus Celsius sao %.1f graus Farenheit\n", celsius, farenheit);
    return 0;
}
