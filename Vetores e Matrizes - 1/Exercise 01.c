// Criar um programa que dada uma sequência de n números a imprima
// na ordem inversa à da leitura. (O comprimento máximo é 100)

#include <stdio.h>
int main()
{
    int i;
    int sequencia[100];

    for (i = 0; i <= 100; i++){
        sequencia[i] = i;}

    for (i = 100; i > 0; i--){
        printf("%d ", sequencia[i]);}

    return 0;
}
