/*Write a program to take an integer array nums which contains only positive integers,
 and an integer target as inputs. The goal is to find two distinct indices i and j in the 
 array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists
  and return the indices in any order. 
Print the two indices separated by a space as output. If no solution exists, 
print "-1 -1".*/
#include <stdio.h>
#define MAX_SIZE 100
void findTwoSum(int nums[], int size, int target, int *index1, int *index2) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                *index1 = i;
                *index2 = j;
                return;
            }
        }
    }
    *index1 = -1;
    *index2 = -1;
}