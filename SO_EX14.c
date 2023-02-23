#include <stdio.h>
#include <string.h>

int main() {
    char Str[100] = "hello world";
    char ch = '!';
    int pos = 5; // posição onde o caractere será inserido

    int len = strlen(Str);
    if (pos < 0 || pos > len) {
        printf("Posição inválida\n");
        return 1;
    }

    // desloca os caracteres para a direita a partir da posição de inserção
    for (int i = len; i >= pos; i--) {
        Str[i+1] = Str[i];
    }

    // insere o caractere na posição especificada
    Str[pos] = ch;

    printf("%s\n", Str);

    return 0;
}
