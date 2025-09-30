//Find the transpose of a matrix.
#include <stdio.h>
#include <stdlib.h>

void transposeMatrix(int** matrix, int rows, int cols) {
    int** transposed = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) {
        transposed[i] = (int*)malloc(rows * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    printf("Transposed matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < cols; i++) {
        free(transposed[i]);
    }
    free(transposed);
}