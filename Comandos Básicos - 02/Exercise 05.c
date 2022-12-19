#include <stdio.h>

int main()
{
    float lado, area, dobro;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado*lado;
    dobro = area * 2;

    printf("\nArea do quadrado: %.2f m2", area);
    printf("\nDobro da area do quadrado: %.2f m2\n", dobro);
    return 0;
}
