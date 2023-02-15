#include <stdio.h>

int main() {
    int i, n, resultado, ocorrencias[6] = {0};

    printf("Digite o numero de lancamentos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        int n = i;
        printf("Digite o resultado do %d lancamento: ", n+1);
        scanf("%d", &resultado);
        ocorrencias[resultado-1]++;}

    printf("\nNumero de ocorrencias de cada face do dado:\n");
    for (i = 0; i < 6; i++){
        printf("Face %d: %d\n", i+1, ocorrencias[i]);}

    return 0;
}
