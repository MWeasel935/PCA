#include <stdio.h>

int main()
{
    float altura, peso_ideal;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    peso_ideal = (72.7 * altura) - 58;

    printf("\nO seu peso ideal eh: %.2f KGs\n", peso_ideal);
    return 0;
}
