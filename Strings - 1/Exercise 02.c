#include <stdio.h>
#include <string.h>

#define NUM_CARROS 5
#define MAX_MODELO 20

int main() {
    char modelos[NUM_CARROS][MAX_MODELO];
    float consumo[NUM_CARROS];
    int i, indice_mais_economico;
    float menor_consumo, consumo_1000km;

    for (i = 0; i < NUM_CARROS; i++) {
        printf("Digite o modelo do carro %d: ", i+1);
        scanf("%s", modelos[i]);
        printf("Digite o consumo do carro %d em km/L: ", i+1);
        scanf("%f", &consumo[i]);
    }
    indice_mais_economico = 0;
    menor_consumo = consumo[0];
    for (i = 1; i < NUM_CARROS; i++) {
        if (consumo[i] < menor_consumo) {
            indice_mais_economico = i;
            menor_consumo = consumo[i];
        }
    }
    printf("\nO modelo mais economico e: %s\n", modelos[indice_mais_economico]);

    printf("\nConsumo para percorrer 1000 km:\n");
    for (i = 0; i < NUM_CARROS; i++) {
        consumo_1000km = 1000.0 / consumo[i];
        printf("%s: %.2f litros\n", modelos[i], consumo_1000km);
    }

    return 0;
}
