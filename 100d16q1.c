//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main()
{
    int n, binary = 0, remainder, product = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 2;
        binary = binary + remainder * product;
        n = n / 2;
        product = product * 10;
    }
    printf("Binary equivalent: %d\n", binary);
    return 0;
}