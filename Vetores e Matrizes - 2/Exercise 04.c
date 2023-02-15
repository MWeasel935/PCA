#include <stdio.h>

void localizarnum(int a[3][3], int num)
{
    int fila, coluna;
    int limit = 0;

    for (fila = 0; fila < 3; fila++){
        for (coluna = 0; coluna < 3; coluna++){
            if (a[fila][coluna] == num)
                printf("O numero %d esta na posicao [%d][%d].\n", a[fila][coluna], fila+1, coluna+1);
            else if (a[fila][coluna] != num)
                limit++;
        }
    }
    if (limit == 9)
        printf("Numero nao encontrado");
}

int main()
{
    int a[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};
    localizarnum(a, 5);
    return 0;
}
