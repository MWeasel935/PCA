#include <stdio.h>
#include <math.h>

void scanIntIntervalo(int x, int y, int *menor, int *maior)
{
    if (x >= 0 && x <= 1000 && y >= 0 && y <= 1000){
        if (x > y){
            *maior = x;
            *menor = y;}
        else {
            *maior = y;
            *menor = x;}}
    else{
        printf("\nDIGITE VALORES ENTRE 0 E 1000.\n");
        *maior = 0;
        *menor = 0;}
}
float percentual(float min, float max)
{
    float porcentagem;
    if (min >= 0 && max > 0)
        porcentagem = (min) * 100 / max;
    return porcentagem;
}

int absdif(int real_min, int real_max)
{
    int absoluto = abs(real_max - real_min);
    return absoluto;
}

int main()
{
    int x, y, menor, maior;

    printf("Digite um numero inteiro (x) entre 0 e 1000: ");
    scanf("%d", &x);
    printf("Digite um numero inteiro (y) entre 0 e 1000: ");
    scanf("%d", &y);

    scanIntIntervalo(x, y, &menor, &maior);

    printf("\nO maior eh %d e o menor eh %d", maior, menor);
    printf("\nO percentual do menor em relacao ao maior: %.1f", percentual(menor, maior));
    printf("\nO modulo da diferenca entre o maior e o menor: %d\n", absdif(menor, maior));

    return 0;
}
