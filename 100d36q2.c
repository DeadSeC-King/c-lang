//Find the sum of all elements in a matrix.
#include <stdio.h>
#include <stdlib.h>
int sumMatrix(int** matrix, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}