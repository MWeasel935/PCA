#include <stdio.h>

int main() {
    int n, i, j, soma_magica, soma_linha, soma_coluna, soma_diag1, soma_diag2;
    int matriz[100][100];

    printf("Digite a dimensao da matriz: ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    soma_magica = (n * (n*n + 1)) / 2;

    for (i = 0; i < n; i++) {
        soma_linha = 0;
        soma_coluna = 0;
        soma_diag1 = 0;
        soma_diag2 = 0;
        for (j = 0; j < n; j++) {
            soma_linha += matriz[i][j];
            soma_coluna += matriz[j][i];
            if (i == j) {
                soma_diag1 += matriz[i][j];
            }
            if (i == n-j-1) {
                soma_diag2 += matriz[i][j];
            }
        }
        if (soma_linha != soma_magica || soma_coluna != soma_magica ||
            soma_diag1 != soma_magica || soma_diag2 != soma_magica) {
            printf("A matriz nao e um quadrado magico.\n");
            return 0;
        }
    }
    printf("A matriz e um quadrado magico.\n");
    return 0;
}
