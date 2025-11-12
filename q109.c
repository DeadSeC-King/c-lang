//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
#define MAX_SIZE 100
int maxSumSubarray(int arr[], int n, int k) {
    if (n < k) {
        return -1; 
    }

    int max_sum = 0;
    int current_sum = 0;

    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}