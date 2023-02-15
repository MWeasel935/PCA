#include <stdio.h>
#include <string.h>

void cifraCesar(char *str) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'A' && str[i] <= 'W') || (str[i] >= 'a' && str[i] <= 'w')) {
            str[i] = str[i] + 3;
        } else if ((str[i] >= 'X' && str[i] <= 'Z') || (str[i] >= 'x' && str[i] <= 'z')) {
            str[i] = str[i] - 23;
        }
    }
}

int main() {
    char str[100];
    printf("Digite a string a ser cifrada: ");
    fgets(str, 100, stdin);
    cifraCesar(str);
    printf("A string cifrada e: %s", str);
    return 0;
}
