//take input of matrix and Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>
#define MAX 10
int main() {
    int matrix[MAX][MAX];
    int rows, cols;
    bool isDistinct = true;

    // Input number of rows and columns
    printf("Enter number of rows and columns (max %d): ", MAX);
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (int i = 0; i < rows && i < cols; i++) {
        for (int j = i + 1; j < rows && j < cols; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = false;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    // Output result
    if (isDistinct) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }

    return 0;
}
