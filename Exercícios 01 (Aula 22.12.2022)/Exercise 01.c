#include <stdio.h>
#include <math.h>

// Ra�z quadrada de um n�mero

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    float raiz = sqrt(num);
    printf("\nRaiz de %d: %.1f\n", num, raiz);

    return 0;
}
