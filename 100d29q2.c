//Find the maximum and minimum element in an array.
#include <stdio.h>
#include <limits.h>
void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = INT_MIN; // Initialize max to the smallest integer
    *min = INT_MAX; // Initialize min to the largest integer

    for (int i = 0; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}