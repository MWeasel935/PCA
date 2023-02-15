#include <stdio.h>
#include <math.h>


void analisar_parto(float gramas, int semanas)
{
    if (gramas < 100 || semanas < 28)
        printf("\nParto nao devera ser realizado, reavaliar clinicamente.\n");
    else{
        int meses = abs(semanas / 4);
        if (gramas >= 1500 && gramas <= 2000 && meses > 9)
            printf("\nParto normal.\n");
        else if (gramas > 2500 && meses > 7)
            printf("\nParto normal.\n");
        else if (gramas > 2500 && meses <= 7)
            printf("\nParto cesariana.\n");
        else
            printf("\nParto cesariana.\n");
    }
}

void ler_dados()
{
    float gramas;
    int semanas;

    printf("Gramas: ");
    scanf("%f", &gramas);

    printf("Semanas: ");
    scanf("%d", &semanas);

    analisar_parto(gramas, semanas);
}

int main()
{
    ler_dados();
}
