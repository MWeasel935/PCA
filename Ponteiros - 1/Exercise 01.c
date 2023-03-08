#include <stdio.h>

void imprimir_vetor(float *primeiro, float *ultimo)
{
    for(;primeiro <= ultimo; primeiro++)
        printf("%.1f ", *primeiro);
    printf("\n");
}

int main()
{
    float num1[9] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    float num2[3] = {1.0, 2.0, 3.0};
    float num3[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    printf("Vetor 1:\n");
    imprimir_vetor(&num1[0], &num1[8]);
    printf("\n");

    printf("Vetor 2:\n");
    imprimir_vetor(&num2[0], &num2[2]);
    printf("\n");

    printf("Vetor 3:\n");
    imprimir_vetor(&num3[0], &num3[4]);

    return 0;
}
