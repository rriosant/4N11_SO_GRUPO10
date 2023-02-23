#include <stdio.h>

#define ROWS 3
#define COLS 3

void sum_rows(int matrix[ROWS][COLS], int row1, int row2) {
    for (int j = 0; j < COLS; j++) {
        matrix[row2][j] += matrix[row1][j];
    }
}

void multiply_rows(int matrix[ROWS][COLS], int row1, int row2) {
    for (int j = 0; j < COLS; j++) {
        matrix[row2][j] *= matrix[row1][j];
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz original:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int row1 = 0;
    int row2 = 1;

    sum_rows(matrix, row1, row2);

    printf("\nMatriz após somar linhas %d e %d:\n", row1+1, row2+1);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    row1 = 1;
    row2 = 2;

    multiply_rows(matrix, row1, row2);

    printf("\nMatriz após multiplicar linhas %d e %d:\n", row1+1, row2+1);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
