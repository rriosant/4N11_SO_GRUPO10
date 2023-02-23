#include <stdio.h>
#include <string.h>

int posicao_caractere(char *string, char caractere) {
    int i;

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) {
            return i;
        }
    }

}
