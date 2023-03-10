#include <stdio.h>
#include <stdlib.h>

int organizar(int *x, int *y, int *z)
{
    int temp;

    if(*x == *y && *x == *z)
        return 1;

    if(*x > *y){
        temp = *x;
        *x = *y;
        *y = temp;
    }

    if(*y > *z){
        temp = *y;
        *y = *z;
        *z = temp;
    }

    if(*x > *y){
        temp = *x;
        *x = *y;
        *y = temp;
    }
}

int main()
{
    int x = 9;
    int y = 3;
    int z = 5;

    organizar(&x, &y, &z);

    if(organizar == 1)
        printf("Os numeros sao iguais.");
    else
        printf("Numeros em ordem crescente: %d, %d, %d.\n", x, y, z);
}
