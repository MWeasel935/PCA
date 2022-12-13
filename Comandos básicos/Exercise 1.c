#include <stdio.h>

int main()
{
    // Declara as variáveis, base e altura
    float base, altura

    // Colocar os valores do triângulo
    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    // Fórmula da área do triângulo
    float area
    area = (base*altura) / 2;

    printf("\nArea do triangulo: %.1f\n", area);
    return 0;
}
