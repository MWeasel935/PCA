#include <stdio.h>

int fib(int n)
{
    int x1, fibo;
    int x2 = 1;

    for (int i = 1; i <= n; i++){
        if (i > 1){
            fibo = x1 + x2;
            x1 = x2;
            x2 = fibo;}
        else
           fibo = 1;
        }

    return fibo;
}

int main()
{
    int num;

    printf("Digite um numero para a sequencia de Fibonacci: ");
    scanf("%d", &num);

    printf("\nResultado: %d\n", fib(num));
}
