#include <stdio.h>
#include <ctype.h>

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%10s", data);

    if (sscanf(data, "%2d/%2d/%4d", &dia, &mes, &ano) != 3) {
        printf("A data informada nao tem o formato correto.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 2 || i == 5) {
            if (data[i] != '/') {
                printf("A data informada nao tem o formato correto.\n");
                return 1;
            }
        } else {
            if (!isdigit(data[i])) {
                printf("A data informada nao tem o formato correto.\n");
                return 1;
            }
        }
    }

    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
