/*Write a program to take an integer array arr as input. 
The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm.
 Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/
#include <stdio.h>
#include <limits.h>
#define MAX_SIZE 100
int kadane(int arr[], int n) {
    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }

    return max_so_far;
}