#include <stdio.h>

int main() {
    int n = 4;  // height of the top half (number of rows in upper pyramid)
    
    // Upper half (including middle row)
    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for(int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(int i = n-1; i >= 1; i--) {
        // Print spaces
        for(int j = n; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for(int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
