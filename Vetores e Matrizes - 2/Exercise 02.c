#include <stdio.h>
#define MAX 100

void somanxn(int a[MAX][MAX], int b[MAX][MAX], int fa, int ca, int fb, int cb)
{
    int fila, coluna;
    if (fa != fb || ca!= cb){
        printf("As matrizes nao tem a mesma ordem");
        return;
    }
    for (fila = 0; fila < fa; fila++){
        for (coluna = 0; coluna < ca; coluna++){
            printf("%d", a[fila][coluna] + b[fila][coluna]);
        }
        printf("\n");
    }
}

int main()
{
    int m1[MAX][MAX] = {{2,2,2}, {3,3,3},{4,4,4}};
    int m2[MAX][MAX] = {{3,3,3}, {2,2,2},{1,1,1}};

    somanxn(m1, m2, 3, 3, 3, 3);
    return 0;
}
