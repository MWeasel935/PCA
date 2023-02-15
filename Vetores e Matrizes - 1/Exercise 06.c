#include <stdio.h>
#define TAMANHO 100

void selection_sort(int n[], int tamanho)
{
    int min, trocar = 0;

    for (int i = 1; i <= tamanho - 1; i ++){
        min = i;
        for (int j = 2; j <= TAMANHO - 1; j++){
            if (n[j] > n[min])
                min = j;}
        if (min != i){
            trocar = n[min];
            n[min] = n[i];
            n[i] = trocar;}
}
    for (int i = 0; i <= tamanho - 1; i ++)
        printf("%d", n[i]);
}

int main()
{
    int num, v[TAMANHO];

    printf("Quantidade de numeros: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);}

    selection_sort(v, num);
}
