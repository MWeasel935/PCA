#include <stdio.h>

int main()
{
    int num, count, min, max = 0;
    for (count = 1; count <=20; count++)
{
        loop:
        printf("Digite 20 numeros positivos (%d/20): ", count);
        scanf("%d", &num);
        if (num >= 0){
            if (num > max)
                max = num;
            if (num < min)
                min = num;}
        else {
            printf("Numero invalido\n");
            goto loop;
            }
}

    printf("\nMaior numero: %d", max);
    printf("\nenor numero: %d\n", min);
    return 0;
}
