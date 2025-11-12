/*Write a program to take an integer array arr and an integer k as inputs.
 The task is to find the kth smallest element in the array. Print the kth smallest element as output.
*/
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);}