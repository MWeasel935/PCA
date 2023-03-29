#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int n, float *media, float *desvio)
{
    float soma = 0;
    float somaQuadrados = 0;

    for (int i = 0; i < n; i++){
        soma += notas[i];
        somaQuadrados += pow(notas[i], 2);}

    *media = soma / n;
    *desvio = sqrt((somaQuadrados / n) - pow(*media, 2));
}

int main() {
    int n, i;
    float *notas, media, desvio;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &n);

    notas = (float*) malloc(n *sizeof(float));

    printf("Digite as notas dos alunos:\n");

    for (i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);}

    mediaDesvio(notas, n, &media, &desvio);

    printf("Media: %.2f\nDesvio padrao: %.2f\n", media, desvio);

    free(notas);

    return 0;
}
