//Write a program to swap two numbers without using a third variable
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Swapping without a third variable
    a = a + b; // Step 1: Add both numbers and store the result in 'a'
    b = a - b; // Step 2: Subtract the new 'b' from 'a' to get the original 'a'
    a = a - b; // Step 3: Subtract the new 'b' from the new 'a' to get the original 'b'
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}