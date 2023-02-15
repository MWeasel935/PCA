#include <stdio.h>

int pegar_perfeito()
{
    int perfeito;
    printf("Digite um numero par: ");
    scanf("%d", &perfeito);

    while (perfeito % 2 != 0){
        printf("Digite um numero par: ");
        scanf("%d", &perfeito);}

    return perfeito;
}

void verificar_perfeito(int num)
{
    int total = 0;

    for (int i = 1; i < num; i++){
        if (num % i == 0)
            total += i;}

    if (total == num)
        printf("\nNumero Perfeito\n");
    else
        printf("\nNao perfeito\n");
}

int main()
{
    int perfeito = pegar_perfeito();
    verificar_perfeito(perfeito);
}
