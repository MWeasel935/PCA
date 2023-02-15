#include <stdio.h>
#include <math.h>
#define True 1

int pegar_numero(int inteiro)
{
    while (True){
        if (inteiro >= 0)
            return inteiro;
        else{
            printf("Digite um numero inteiro positivo: ");
            scanf("%d", &inteiro);}}
}

int hiperfatorial(int x)
{
    int cont, soma;
    int hiper = 1;

    for (cont = 0; cont <= x; cont++)
        hiper *= (pow(cont, cont));
        soma += hiper;
    return soma;
}

void mensagem(int inicial, int hiperfatorial)
{
    printf("\nNumero inteiro: %d", inicial);
    printf("\nHiperfatorial: %d", hiperfatorial);
}

int main(void)
{
    int num_inteiro, hiperfact, numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    num_inteiro = pegar_numero(numero);
    hiperfact = hiperfatorial(num_inteiro);
    mensagem(num_inteiro, hiperfact);
}
