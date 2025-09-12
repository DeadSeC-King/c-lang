//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int n, r, p = 1, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        if (r % 2 != 0)
        {
            p = p * r;
            flag = 1;
        }
        n = n / 10;
    }
    if (flag == 1)
        printf("Product of odd digits is %d", p);
    else
        printf("No odd digit found");
    return 0;
}