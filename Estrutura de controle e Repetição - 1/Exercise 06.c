#include <stdio.h>

int main()
{
    int num =0;
    int count = 0;

    for (num = 1; num <=9; num++){
        for (count = 1; count <=9; count++){
           printf("Tabuada de %d x %d: %d\n", num, count, num*count);
        }
    printf("\n");
    }
    return 0;
}
