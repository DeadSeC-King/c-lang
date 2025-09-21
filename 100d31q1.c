//Search for an element in an array using linear search.
#include <stdio.h>
#define MAX 100
void linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found in the array\n");
}