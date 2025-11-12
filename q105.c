/*Write a program to take an integer array nums of size n, and print the majority element.
 The majority element is the element that appears strictly more than ⌊n / 2⌋ times. 
 Print -1 if no such element exists. Note: Majority Element is not necessarily the element
  that is present most number of times.
*/
#include <stdio.h>
#define MAX_SIZE 100
int findMajorityElement(int arr[], int size) {
    int count = 0;
    int candidate = -1;
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > size / 2) {
        return candidate;
    } else {
        return -1;
    }
}