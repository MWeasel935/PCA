#include <stdio.h>

void min_max(int v[], int n, int* min, int* max)
{
    *min = v[0];
    *max = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < *min)
            *min = v[i];
        if (v[i] > *max)
            *max = v[i];}
}

int main()
{
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(vet) / sizeof(int);
    int min, max;

    min_max(vet, n, &min, &max);

    printf("Valor minimo: %d\n", min);
    printf("Valor maximo: %d\n", max);

    return 0;
}
