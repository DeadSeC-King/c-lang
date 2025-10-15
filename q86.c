//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX 100
bool isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        // Move left index to the next alphanumeric character
        while (left < right && !isalnum(str[left]))
            left++;
        // Move right index to the previous alphanumeric character
        while (left < right && !isalnum(str[right]))
            right--;

        // Compare characters in a case-insensitive manner
        if (tolower(str[left]) != tolower(str[right]))
            return false;

        left++;
        right--;
    }
    return true;
}