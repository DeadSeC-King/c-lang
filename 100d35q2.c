//Rotate an array to the right by k positions.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize; // In case k is greater than numsSize
    int* temp = (int*)malloc(numsSize * sizeof(int));
    if (!temp) {
        // Handle memory allocation failure
        return;
    }
    memcpy(temp, nums + numsSize - k, k * sizeof(int)); // Copy last k elements
    memcpy(temp + k, nums, (numsSize - k) * sizeof(int)); // Copy the rest
    memcpy(nums, temp, numsSize * sizeof(int)); // Copy back to original array
    free(temp);
}