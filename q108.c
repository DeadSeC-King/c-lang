/*Write a Program to take an integer array nums.
 Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
  The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/
#include <stdio.h>
#define MAX_SIZE 100
void productExceptSelf(int* nums, int numsSize, int* answer) {
    int leftProduct[MAX_SIZE];
    int rightProduct[MAX_SIZE];

    
    leftProduct[0] = 1;
    rightProduct[numsSize - 1] = 1;
    for (int i = 1; i < numsSize; i++) {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
    }
    for (int i = numsSize - 2; i >= 0; i--) {
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
    for (int i = 0; i < numsSize; i++) {
        answer[i] = leftProduct[i] * rightProduct[i];
    }
}