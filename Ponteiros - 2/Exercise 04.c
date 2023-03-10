#include <stdio.h>

int main()
{
    int vet[8];
    int dobro;
    int *pvet;

    for(pvet = &vet[0]; pvet <= &vet[7]; pvet++){
        printf("Digite um numero: ");
        scanf("%d", pvet);}

    printf("\nDobro do vetor:\n");
    for(pvet = &vet[0]; pvet <= &vet[7]; pvet++){
        dobro = *pvet;
        printf("%d ", dobro*2);}

    printf("\n\nNumeros pares:");
    for(pvet = &vet[0]; pvet <= &vet[7]; pvet++){
        if (*pvet %2 == 0)
            printf("\nEndereco: %d", pvet);}
    printf("\n");
}
