#include <stdio.h>

int main() {
    // Define the number of stars in each group
    int groups[] = {1, 2, 4, 3, 1};
    int size = sizeof(groups) / sizeof(groups[0]);

    for (int g = 0; g < size; g++) {
        for (int i = 0; i < groups[g]; i++) {
            printf("*\n");
        }
        // Print a blank line between groups, except after the last one
        if (g != size - 1) {
            printf("\n");
        }
    }

    return 0;
}
