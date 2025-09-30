//input a matrix and Perform diagonal traversal of a matrix.
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void diagonalTraversal(int arr[MAX][MAX], int n, int m) {
    for (int line = 1; line <= (n + m - 1); line++) {
        int start_col = max(0, line - n);
        int count = min(line, (m - start_col), n);
        for (int j = 0; j < count; j++)
            printf("%d ", arr[min(n, line) - j - 1][start_col + j]);
    }
}