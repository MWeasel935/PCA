#include <stdio.h>
#include <math.h>
#define True 1

float pegar_numero(float real)
{
    while (True){
        if (real >=0 && real <=1)
            return real;
        else{
            printf("Digite um numero real entre 0 e 1: ");
            scanf("%f", &real);}}
}

float arctran(float x)
{
    float cont = 1;
    float arc1, arc2, total;

    while(True){
        arc1 = (pow(x, cont)) / cont;
        total += arc1;
        cont += 2;
        arc2 = (pow(x, cont))/ cont;
        total -= arc2;
        if (arc1 < 0.0001 || arc2 < 0.0001)
            return total;}
}

void mensagem(float inicial, float arco)
{
    printf("\nNumero real: %.1f", inicial);
    printf("\nArco tangente: %.4f rad", arco);
}

int main(void)
{
    float num_real, arco_total, numero;
    printf("Digite um numero real entre 0 e 1: ");
    scanf("%f", &numero);

    num_real = pegar_numero(numero);
    arco_total = arctran(num_real);
    mensagem(num_real, arco_total);
}
