/*Write a program to take a string s as input.
 The task is to find the length of the longest substring without repeating characters.
  Print the length as output.*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    int index[256] = {0}; 

    for (int end = 0; end < n; end++) {
        char currentChar = s[end];
        start = start > index[(unsigned char)currentChar] ? start : index[(unsigned char)currentChar];
        maxLength = maxLength > (end - start + 1) ? maxLength : (end - start + 1);
        index[(unsigned char)currentChar] = end + 1; 
    }
    return maxLength;
}