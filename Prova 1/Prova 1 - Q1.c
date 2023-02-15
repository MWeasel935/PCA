#include <stdio.h>

void main()
{
    float nota, min, max, media, cont;

    printf("Nota: ");
    scanf("%f", &nota);

    max = nota;
    min = max;

    while (nota >= 0){
        if (nota > max)
            max = nota;
        if (nota < min)
            min = nota;
        media += nota;
        cont++;

        printf("Nota: ");
        scanf("%f", &nota);
    }

    if (cont == 0)
        printf("\nNenhuma nota inserida");
    else{
        printf("\nMaior nota: %.1f", max);
        printf("\nMenor nota: %.1f", min);
        printf("\nMedia das notas: %.1f", (media/cont));
    }
}
