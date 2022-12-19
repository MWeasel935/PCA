#include <stdio.h>

int main()
{
    float metros, centimetros;

    printf("Metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    if (metros == 1)
        printf("\n%.0f metro eh %.0f centimetros\n", metros, centimetros);
    else
        printf("\n%.0f metros sao %.0f centimetros\n", metros, centimetros);
    return 0;
}
