#include <stdio.h>
#include <string.h>

int main() {
    char Str[100] = "hello world";
    int pos = 4; // posição do caractere a ser removido

    int len = strlen(Str);
    if (pos < 0 || pos >= len) {
        printf("Posição inválida\n");
        return 1;
    }

    // desloca os caracteres para a esquerda a partir da posição de remoção
    for (int i = pos; i < len - 1; i++) {
        Str[i] = Str[i+1];
    }

    // adiciona o terminador nulo ao final da string para indicar o novo comprimento
    Str[len-1] = '\0';

    printf("%s\n", Str);

    return 0;
}
