#include <stdio.h>

int contar(int n, int d)
{
    int cont = 0;
    while (n > 0){
        if ((n%10) == d)
            cont++;
        n = n/10;
    }
    return cont;
}

int main()
{
    int n, d;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Digite outro numero: ");
    scanf("%d", &d);

    printf("\nO numero %d apareceu %d vezes em %d.\n", d, contar(n, d), n);
}
