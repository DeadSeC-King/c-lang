//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int num, originalNum, reversedNum = 0, remainder;
    
    // Input a number from user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalNum = num; // Store the original number
    
    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit
    }
    
    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);
    
    return 0;
}