#include <stdio.h>

int multiplicarMatrizes(int a[][100], int b[][100], int c[][100], int m, int n, int p) {
    if (n != p) {
        return 0;}

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return 1;
}

int main() {
    int a[100][100], b[100][100], c[100][100];
    int m, n, p;

    printf("Digite as dimensoes da matriz A (m x n): ");
    scanf("%d %d", &m, &n);
    printf("Digite as dimensoes da matriz B (n x p): ");
    scanf("%d %d", &n, &p);

    printf("Digite a matriz A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Digite a matriz B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    if (multiplicarMatrizes(a, b, c, m, n, p)) {
        printf("O resultado da multiplicacao e:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Nao e possivel multiplicar as matrizes.\n");
    }

    return 0;
}
