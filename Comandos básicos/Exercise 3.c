#include <stdio.h>

int main()
{
    // Declara a atribui o valor digitado ao salário
    float salario;
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    // Declara, calcula e atribui o ajuste de 10% do salário
    float ajuste = salario * 10/100;

    // Declara e atribui o valor do novo salário com o ajuste obtido
    float novo_salario = salario + ajuste;

    printf("O novo salario e: %.2f", novo_salario);
    return 0;
}
