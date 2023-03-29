#include <stdio.h>
#include <string.h>

void encontrar_letra(char *string, char letra, int *posicoes, int *tam)
{
    int n = strlen(string);
    int cont = 0;

    for (int i = 0; i < n; i++){
        if (string[i] == letra){
            posicoes[cont] = i;
            cont++;}}

    *tam = cont;
}

int main()
{
    char string[] = "Sou um pessimo programador";
    char letra = 'o';
    int tam, posicoes[strlen(string)];

    encontrar_letra(string, letra, posicoes, &tam);

    printf("A letra '%c' foi encontrada nas seguintes posicoes: ", letra);
    for (int i = 0; i < tam; i++)
        printf("%d ", posicoes[i]);

    printf("\nTotal de letras iguais encontradas: %d", tam);
    printf("\n");

    return 0;
}
