#include <stdio.h>

void imprimir_vetor(int *primeiro, int *ultimo)
{
    int achou = 0;
    for(;primeiro <= ultimo; primeiro++){
        if (*primeiro == 2){
            printf("Endereco: %d\n", primeiro);
            achou = 1;}}

    if (!achou)
        printf("NULL\n");
}

int main()
{
    int num1[10] = {1, 2, 3, 2, 5, 2, 7, 8, 9};

    imprimir_vetor(&num1[0], &num1[9]);

    return 0;
}
