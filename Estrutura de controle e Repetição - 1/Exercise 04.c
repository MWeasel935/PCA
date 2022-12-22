#include <stdio.h>

int main()
{
    int num, count, min, max = 0;
    for (count = 1; count <=20; count++)
    {
        printf("Digite 20 numeros (%d/20): ", count);
        scanf("%d", &num);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }

    printf("\nMaior numero: %d", max);
    printf("\nMenor numero: %d\n", min);
    return 0;
}
