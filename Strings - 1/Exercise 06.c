#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j, len, palindromo = 1;

    printf("Digite uma string: ");
    scanf("%s", string);

    len = strlen(string);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (string[i] != string[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("A string '%s' e um palindromo.\n", string);
    } else {
        printf("A string '%s' nao e um palindromo.\n", string);
    }

    return 0;
}
