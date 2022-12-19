#include <stdio.h>
#define pi 3.14159

int main()
{
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * (raio*raio);

    printf("\nA area do circulo eh: %.2f\n", area);
    return 0;
}
