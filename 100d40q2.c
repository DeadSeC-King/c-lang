//take input of matrix and Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

#define MAX 10

int main() {
    int matrix[MAX][MAX];
    int n, sum = 0;

    // Input size of square matrix
    printf("Enter the size of the square matrix (max %d): ", MAX);
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Output result
    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
