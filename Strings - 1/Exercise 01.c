#include <stdio.h>
#include <string.h>
#define SIZE 100

void reverter_string()
{
    char string[SIZE];
    printf("\nString: ");
    scanf("%s", &string);

    for (int i = strlen(string) - 1; i >= 0; i--)
        printf("%c", string[i]);
}

void tirar_vogais()
{
    char string[SIZE];
    printf("\nString: ");
    scanf("%s", &string);
    int i, j;

    for (i = 0, j = 0; string[i] != '\0'; i++) {
        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' &&
            string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U'){
            string[j] = string[i];
            j++;}}

    string[j] = '\0';
    printf("String sem vogais: %s\n", string);
}

void tranformar_maiusculas()
{
    char string[SIZE];
    printf("\nString: ");
    scanf("%s", &string);

    char maiusc[strlen(string)];

    for (int i = 0; string[i] != '\0'; i++){
        maiusc[i] = toupper(string[i]);}

    for (int j = 0; j <= strlen(maiusc) - 1; j++)
        printf("%c", maiusc[j]);
}

void mostrar_recorrencia()
{
    char string[SIZE], c;

    printf("\nString: ");
    scanf("%s", &string);

    printf("\nCaractere: ");
    scanf(" %c", &c);

    int cont = 0;

    for (int i = 0; i <= strlen(string) - 1; i++){
        if (string[i] == c)
            cont++;}

    printf("\nO caractere %c apareceu %d vezes na string.\n", c, cont);
}

void tirar_recorrencia()
{
    char string[SIZE], c;

    printf("\nString: ");
    scanf("%s", &string);

    printf("\nCaractere: ");
    scanf(" %c", &c);
    int i, j;

    for (i = 0, j = 0; i <= strlen(string) - 1; i++){
        if (string[i] != c){
            string[j] = string[i];
            j++;}}

    string[j] = '\0';

    printf("String sem o caractere '%c': %s\n", c, string);
}


int main()
{
    int num;
    printf("(1) - Reverter uma palavra.");
    printf("\n(2) - Imprimir uma string sem vogais.");
    printf("\n(3) - Tranformar tranformar as letras de uma string em maiuscula.");
    printf("\n(4) - Mostrar o numero de vezes que uma letra aparece numa string.");
    printf("\n(5) - Eliminar uma letra de uma string\n");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &num);

    if (num == 1)
        reverter_string();
    else if (num == 2)
        tirar_vogais();
    else if (num == 3)
        tranformar_maiusculas();
    else if (num == 4)
        mostrar_recorrencia();
    else if (num == 5)
        tirar_recorrencia();
}
