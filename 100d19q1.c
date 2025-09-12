//Write a program to find the LCM of two numbers
#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b; // Find the maximum of the two numbers
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("LCM of %d and %d is %d\n", a, b, max);
            break;
        }
        max++;
    }
    return 0;
}