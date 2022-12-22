#include <stdio.h>

int main()
{
    int count;
    float num, media, min, max = 0;

    for (count = 1; count <=3; count++)
    {
        printf("Digite as 3 notas (%d/3): ", count);
        scanf("%f", &num);
        media += num;
        if (count == 1){
            max = num;
            min = max;}
        else if (num > max)
            max = num;
        else if (num < min)
            min = num;
    }

    printf("\nMedia: %.1f", media / 3);
    printf("\nMaior nota: %.1f", max);
    printf("\nMenor nota: %.1f\n", min);
    return 0;
}
