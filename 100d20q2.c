//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, rem, bin = 0, dec = 0, ones = 0;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        rem = n % 10;
        if (rem == 0)
            ones += pow(10, i);
        n /= 10;
    }
    printf("1's complement is: %d", ones);
    return 0;
}