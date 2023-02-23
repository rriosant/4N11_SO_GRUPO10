#include <stdio.h>

void transpor(int matriz[][100], int linhas, int colunas) {
    int i, j;
    int transposta[100][100]; 

    for (i = 0; i < colunas; i++) {
        for (j = 0; j < linhas; j++) {
            transposta[i][j] = 0;
        }
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}
