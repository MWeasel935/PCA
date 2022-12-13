#include <stdio.h>

// Ler o nome,sexo e idade e verificar se ela é mulher
int main()
{
    char nome[50];
    printf("Qual seu nome?: ");
    scanf("%s", &nome);

    char sexo;
    printf("Qual seu sexo?"
           "\nDigite M para Masculino e F para Feminino: ");
    scanf("\n%c", &sexo);

    int idade;
    printf("Qual sua idade?: ");
    scanf("%d!", &idade);

    printf("\nNome: %s", nome);
    printf("\nSexo: %c", sexo);
    printf("\nIdade: %d", idade);

    if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f')
        printf("\nSexo invaido\n");
    else if (sexo == 'F' || sexo == 'f'){
        printf("\nMulher");
        }
    else if (sexo == 'M' || sexo == 'm'){
        printf("\nHomem");
        }
    return 0;
}
