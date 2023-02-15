#include <stdio.h>
#define TAMANHO 100

int fatorial(int n)
{
    int fatorial = 1;
    for (int i = 1; i <= n; i++){
        fatorial *= i;}

    return fatorial;
}

void imprimir_fatorial(int n[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        n[i] = fatorial(n[i]);
}

int main()
{
    int num, v[TAMANHO];

    printf("Quantidade de numeros: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);}

    imprimir_fatorial(v, num);

    for (int x = 0; x < num; x++)
        printf("%d ", v[x]);
}
