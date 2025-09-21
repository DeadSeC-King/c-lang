//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
int main()
{
    int num, digit, i, max = 0, index;
    int count[MAX] = {0};
    printf("Enter an integer number: ");
    scanf("%d", &num);
    num = abs(num);
    if (num == 0)
        count[0] = 1;
    while (num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (i = 0; i < MAX; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            index = i;
        }
    }
    printf("The digit that occurs the most is: %d\n", index);
    return 0;
}