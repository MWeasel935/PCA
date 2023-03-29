#include <stdio.h>

int soma_arrays(int *array1, int *array2, int *resultado, int tam1, int tam2)
 {
    if (tam1 != tam2)
        return 0;

    for (int i = 0; i < tam1; i++)
        *(resultado + i) = *(array1 + i) + *(array2 + i);

    return 1;
}

int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {5, 4, 3, 2, 1};

    int tam1, tam2;

    tam1 = sizeof(array1) / sizeof(int);
    tam2 = sizeof(array2) / sizeof(int);

    int soma[tam1];

    if (soma_arrays(array1, array2, soma, tam1, tam2) == 1) {
        printf("Soma dos arrays: ");
        for (int i = 0; i < 5; i++)
            printf("%d ", soma[i]);}
    else
        printf("Os tamanhos dos arrays são diferentes.\n");
    return 0;
}
