#include <stdio.h>
#define SIZE 5

void operacoes(int a[SIZE][SIZE])
{
    printf("\nDiagonal principal: ");
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            if (i == j)
                printf("%d ", a[i][j]);}}

    printf("\n");

    printf("\nDiagonal secundaria: ");
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            if (i + j == 4)
                printf("%d ", a[i][j]);}}

    printf("\n");

    int linha4 = 0;
    printf("\nSoma da linha 4: ");
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            if (i == 1)
                linha4 += a[i][j];}}
    printf("%d", linha4);

    printf("\n");

    int coluna2 = 0;
    printf("\nSoma da coluna 2: ");
    for (int x = 0; x < SIZE; x++){
        for (int y = 0; y < SIZE; y++){
            if (y == 0)
                coluna2 += a[x][y];}}
    printf("%d", coluna2);

    printf("\n");

    int tudo = 0;
    printf("\nSoma de tudo exceto a diagonal principal: ");
    for (int p = 0; p < SIZE; p++){
        for (int t = 0; t < SIZE; t++){
            if (p != t)
                tudo += a[p][t];}}
    printf("%d", tudo);

    printf("\n");
}

int main()
{
    int a[SIZE][SIZE];
    int x, y, num;

    for (int i = 0; i < SIZE; i++){
        x = i;
        for (int j = 0; j < SIZE; j++){
            y = j;
            printf("Digite o valor na posicao [%d][%d]: ", x+1, y+1);
            scanf("%d", &num);
            a[i][j] = num;}}

    operacoes(a);
}
