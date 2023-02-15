#include <stdio.h>

int produto_escalar(int x[], int y[], int n) {
    int i, produto = 0;
    for (i = 0; i < n; i++){
        produto += x[i]*y[i];}
    return produto;
}

int main() {
    int i, n, x[100], y[100];

    printf("Digite o tamanho dos vetores (maximo 100): ");
    scanf("%d", &n);

    printf("\n");

    for (i = 0; i < n; i++){
        int n = i;
        printf("Digite o elemento %d do vetor x: ", n+1);
        scanf("%d", &x[i]);}

    printf("\n");

    for (i = 0; i < n; i++){
        int n = i;
        printf("Digite o elemento %d do vetor y: ", n+1);
        scanf("%d", &y[i]);}

    printf("\nProduto escalar: %d\n", produto_escalar(x, y, n));
    return 0;
}
