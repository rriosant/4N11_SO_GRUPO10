#include <stdio.h>

void linha_por_numero(int matriz[][100], int linha, int colunas, int numero) {
    int j;

    for (j = 0; j < colunas; j++) {
        matriz[linha][j] *= numero;
    }
}

void coluna_por_numero(int matriz[][100], int linhas, int coluna, int numero) {
    int i;

    for (i = 0; i < linhas; i++) {
        matriz[i][coluna] *= numero;
    }
}
