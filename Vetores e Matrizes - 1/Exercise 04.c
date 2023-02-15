#include <stdio.h>
#define TAMANHO 100

void imprimir_pares(int n[], int tamanho)
{
    for (int i = 0; i <= tamanho - 1; i ++){
        if (n[i] % 2 == 0)
            printf("%d ", n[i]);
    }
}

int main()
{
    int num, v[TAMANHO];

    printf("Quantidade de numeros: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);}

    imprimir_pares(v, num);
}
