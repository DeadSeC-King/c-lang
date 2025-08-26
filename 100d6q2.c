//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main() {
    int number;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check whether the number is positive, negative or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else {
        if (number < 0) {
            printf("The number is negative.\n");
        } else {
            printf("The number is zero.\n");
        }
    }

    return 0;
}