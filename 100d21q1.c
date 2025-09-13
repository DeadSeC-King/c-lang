//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int n, first, last, digits, swap, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    digits = (int)log10(n);
    first = (int)(n / pow(10, digits));
    swap = first + last * pow(10, digits);
    temp = n - first * pow(10, digits) - last + swap;
    printf("Number after swapping first and last digit: %d\n", temp);
    return 0;
}